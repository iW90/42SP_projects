# CONHECIMENTOS NECESSÁRIOS

## Gerando a assinatura

No Shell:

`sha1sum <dir/fileDebian.vdi>`: Será gerada uma chave.

Criar um arquivo chamado `signature.txt` e colar a chave. Este arquivo que deve ser entregue no projeto.

Para cada avaliação, crie um Snapshot para que mexa na cópia sem alterar o arquivo original.


## Questões

P: Por que Debian?

R: É mais fácil de instalar e configurar do que o Rocky.



P: O que é uma máquina virtual?

R: A Virtual Machine (VM) é um recurso que simula um computador físico para executar programas e aplicativos. Assim você pode executar seu próprio sistema operacional em um  ambiente separado, sem que ele "saiba" que está rodando em outro sistema.



Q: Qual é o propósito da VM?

R: As VMs podem ser implantadas para acomodar diferentes níveis de necessidades de poder de processamento, para executar software que requer uma sistema operacional diferente ou para testar aplicativos em um ambiente seguro e protegido.



P: Como funciona?

R: VM funcionando por meio da tecnologia "Virtualização". A virtualização usa software para simular hardware virtual que permite VMs executarem em um único host.



P: Qual a diferença entre aptitude e apt?

R: O Aptitude é um gerenciador de pacotes de alto nível enquanto o APT é um gerenciador de pacotes de nível inferior que pode ser usado por outros gerenciadores de pacotes de nível superior. O Aptitude é mais vasto em funcionalidades do que o apt-get e integra funcionalidades do apt-get e suas outras variantes, incluindo apt-mark e apt-cache. Além disso, o Aptitude possui uma interface de usuário mais interativa, e é considerado um gerenciador de pacotes melhor.



P: O que é AppArmor?

R: AppArmor ("Application Armor") é um módulo de segurança do kernel do Linux que permite ao administrador do sistema restringir os acessos dos programas através de perfis de usuários.



P: O que é SSH?

R: SSH, (Secure Shell ou Secure Socket Shell), é um protocolo de rede que fornece aos usuários, particularmente ao sistema administrador, uma maneira segura de acessar um computador em uma rede não segura. O Secure Shell fornece autenticação de senha forte e autenticação de chave pública, bem como comunicações de dados criptografados entre dois computadores conectados por uma rede aberta, como a Internet.



---

## CLI

- Criação de novo usuário:

| You have to create a new user here.   |

| $ sudo adduser username               | <- creating new user (yes (no))

| $ sudo chage -l username              | <- Verify password expire info for new user

| $ sudo adduser username sudo          |

| $ sudo adduser username user42        | <- assign new user to sudo and user42 groups

- Checklist:

| 1) lsblk                              1 <- verifica as partições

| 2) sudo aa-status                     2 <- AppArmor status

| 3) getent group sudo                  3 <- sudo group users

| 4) getent group user42                4 <- user42 group users

| 5) sudo service ssh status            5 <- ssh status

| 6) sudo ufw status                    6 <- ufw status

| 7) ssh username@ipadress -p 4242      7 <- conecte-se à VM de sua máquina host (física) via SSH

| 8) nano /etc/sudoers.d/sudoconfig     8 <- yes, sudo config file. You can $ ls /etc/sudoers.d first

| 9) nano /etc/login.defs               9 <- política de expiração da senha

| 10) nano /etc/pam.d/common-password  10 <- política de senha

| 11) sudo crontab -l                  11 <- agendamento cron


Como mudar o hostname?

`sudo nano /etc/hostname`



`cd /var/log/sudo/00/00 && ls`       Onde está o sudo logs em /var/log/sudo?

Você verá vários diretórios (01 2B 9S 4D etc). Eles contém os logs.

sudo apt update

ls

Agora você vê um novo diretório.

cd <nameofnewdirectory> && ls
  
cat log                               <- Input log
                                         
cat ttyout                            <- Output log
  

Como adicionar e remover a porta 8080 no UFW?
  
$ sudo ufw allow 8080                 <- allow
                                         
$ sudo ufw status                     <- check
  
$ sudo ufw deny 8080                  <- deny (yes yes)

Como rodar o script a cada 30 segundos?
                                         
$ sudo crontab -e
                                         
Remove or commit previous cron "schedule" and add next lines in crontab file

`*/1 * * * * /path/to/monitoring.sh`
                                        
`*/1 * * * * sleep 30s && /path/to/monitoring.sh`

Para não rodar na inicialização, basta remover om comentar a linha abaixo do crontab file:

@reboot /path/to/monitoring.sh
