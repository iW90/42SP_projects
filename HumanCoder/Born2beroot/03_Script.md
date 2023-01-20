# CRIANDO O SCRIPT

Devemos criar um script chamado `monitoring.sh.` que deve ser desenvolvido em Bash.
- Será o comando `Wall` que vai spammar no terminal de todos que estiverem logados no servidor.
- Será o pacote **Cron** que vai cronometrar o tempo para que **Wall** seja executado a cada 10 minutos.


## Comandos do Script:

1. **Architecture:** The architecture of your operating system and its kernel version.
	>  Linux wil 4.19.0-16-amd64 #1 SMP Debian 4.19.181-1 (2021-03-19) x86_64 GNU/Linux
	- `uname -a`
2. **CPU:** The number of physical processors.
	> 1
	- Opção 1: `nproc --all`
	- Opção 2: `lscpu | egrep -m 1 'CPU\(s\)' | awk '{print $2}'`
	- Opção 3: `grep 'physical id' /proc/cpuinfo | uniq | wc -l`
3. **vCPU:** The number of virtual processors.
	> 1
	- `grep 'processor' /proc/cpuinfo | uniq | wc -l`
4. **Memory Usage:** The current available RAM on your server and its utilization rate as a percentage.
	> 74/987MB (7.50%)
	- total RAM: `free -m | grep Mem: | awk '{print $2}'`
	- used RAM: `free -m | grep Mem: | awk '{print $3}'`
	- percent RAM: `free -m | grep Mem: | awk '{printf("%.2f"), $3/$2*100}'`
5. **Disk Usage:** The current available memory on your server and its utilization rate as a percentage.
	>  1009/2Gb (39%)
	- total DISK: `df -Bg | grep /dev/ | grep -v /boot | awk '{fd += $2} END {print fd}'`
	- used DISK: `df -Bm | grep /dev/ | grep -v /boot | awk '{ud += $3} END {print ud}'`
	- percent DISK: `df -Bm | grep /dev/ | grep -v /boot | awk '{ud += $3} {fd += $2} END {printf("%d"), ud/fd*100}'`
6. **CPU Load:** The current utilization rate of your processors as a percentage.
	> 6.7%
	- Opção 1: `top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}'` *(persiste no 0, prefira o mpstat)*
	- Opção 2: `mpstat | grep all | awk '{print 100 - $13}'` *(necessário instalar o sysstat)*
7. **Last boot:** The date and time of the last reboot.
	> 2021-04-25 14:45
	- `who -b | awk '$1 == "system" {print $3 " " $4}'`
8. **LVM use:** Whether LVM is active or not.
	> yes
	- Opção 1: `if [ $(lsblk | grep "lvm" | wc -l) -eq 0 ]; then echo no; else echo yes; fi`
	- Opção 2: `lsblk | grep LVM -q && echo yes || echo no`
9. **Connections TCP:** The number of active connections.
	> 1 ESTABLISHED
	- `netstat -ant | grep ESTABLISHED | wc -l`
10. **User log:** The number of users using the server.
	> 1
	- Opção 1: `w -h | wc -l`
	- Opção 2: `users | wc -l`
	- Opção 3: `users | wc -w`
11. **Network:** The IPv4 address of your server and its MAC (Media Access Control) address.
	> IP 10.0.2.15 (08:00:27:51:9b:a5)
	> MAC address: HWaddr ou ether
	- IP: `hostname -I | awk '{print $1}'`
	- MAC: Opção 1: `ifconfig | grep ether | awk '{print $2}'`
	- MAC: Opção 2: `ip link show | awk '$1 == "link/ether" {print $2}'`
	- MAC: Opção 3: `ip addr | grep ether | awk '{print $2}'`
12. **Sudo:** The number of commands executed with the sudo program
	> 42 cmd
	- `journalctl _COMM=sudo | grep COMMAND | wc -l`


## Configurando o Sleep

1. `sudo apt install bc`: Baixa e instala o pacote bc.
2. **Pega a diferença de minutos e segundos:**
	- `uptime -s | cut -d ":" -f 2`
	- `uptime -s | cut -d ":" -f 3`
3. **Calcule o número de segundos entre o décimo minuto mais próximo da hora e o tempo de inicialização:**
	> Ex: Se o boot foi '11:43:36',  43 % 10 = 3 minutos após 40º minuto. Agora 3 * 60 = 180 para transformar em segundos e soma com os 36 segundos já passados.
	- `bc <<< $BOOT_MIN%10*60+$BOOT_SEC`


## Instalando e configurando o Cron

1. `sudo nano /home/monitoring.sh`: Cria o arquivo que deverá ser executado a cada 10 minutos.
	- Preencha seu script.
2. `sudo crontab -u root -e`: Abre o arquivo de cronometragem.
	- Após a linha **# m h dom mon dow command**, acrescente: `*/10 * * * * bash /home/sleep.sh && /home/monitoring.sh`
3. `sudo crontab -u root -l`: Verifica a agenda.
