# BONUS

## Parte 01 - Partitions

Já foram feitas durante a instalação do Debian.



## Parte 02 - Instalar um serviço de sua escolha: Fail2Ban

Um serviço que dá uma camada extra de proteção a qualquer outro serviço que se conecte por senha com seu servidor. O Fail2Ban encontra tentativas de login com falha usando o log do seu serviço e bloqueia novas tentativas de login desses IPs. Ao fazer isso, desencoraja hackers e pessoas com intenções maliciosas de acessar seu servidor por completo.

Vamos instalar o Fail2Ban e configurá-lo para bloquear tentativas remotas de conexões SSH que digitaram a senha errada mais de algumas vezes.

1. `sudo apt install fail2ban`: Baixa e instala o serviço **fail2ban**.
	Confirme: `Y`.
2. `systemctl start fail2ban`: Inicializa o serviço.
3. `sudo nano /etc/fail2ban/jail.conf`: Cria e abre o arquivo de configurações.
	- Regras a serem atualizadas:
	```
	[sshd]

	# To use more aggressive sshd modes set filter ...
	# ...
	# ...
	#mode = normal

	enabled = true
	maxretry = 3
	findtime = 10m
	bantime = 3m
	port = 4242
	logpath = %(sshd_log)s
	backend = %(sshd_backend)s


	[dropbear]

	port = 4242
	logpath = %(sshd_log)s
	backend = %(sshd_backend)s


	[selinux-ssh]

	port = 4242
	logpath = %(sshd_log)s
	```
4. `cp /etc/fail2ban/jail.conf /etc/fail2ban/jail.local`: Transfere as novas instruções para o arquivo **jail.local**.
5. `systemctl restart fail2ban`: Reinicia o serviço.
6. `systemctl status fail2ban`: Visualiza o status atual do fail2ban.

7. `fail2ban-client status`
8. `fail2ban-client status sshd`
9. `tail -f /var/log/fail2ban.log`: Visualiza quem foi banido.

10. `systemctl list-units --type==service`: Mostra os serviços instalados.
	- `service --status-all`



## Parte 03 - Fazer um site no wordpress (unfinished)

### Lighttpd

1. `apt install lighttpd`
	- Confirme: `Y`
2. `lighttpd -v`
3. `systemctl start lighttpd`
4. `systemctl enable lighttpd`
5. `systemctl status lighttpd`

6. `ufw allow http`

### MariaDB

7. `apt install mariadb-server`
	- Confirme: `Y`
8. `systemctl start mariadb-server`
9. `systemctl enable mariadb-server`
10. `systemctl status mariadb-server`

11. `mysql_secure_installation`
	- Switch to unix_socket authentication \[Y/n]: Y
	- Enter current password for root (enter for none): Enter
	- Set root password? \[Y/n]: Y
	- New password: xxx | yyy
	- Re-enter new password: xxx | yyy
	- Remove anonymous users? \[Y/n]: Y
	- Disallow root login remotely? \[Y/n]: Y
	- Remove test database and access to it? \[Y/n]:  Y
	- Reload privilege tables now? \[Y/n]:  Y
12. `systemctl restart mariadb`
13. `mysql -u root -p`: Configurar para o Wordpress
	- MariaDB [(none)]> `SHOW DATABASES;`
	- MariaDB [(none)]> `CREATE DATABASE wordpress;`
	- MariaDB [(none)]> `CREATE USER 'admin'@'localhost' IDENTIFIED BY 'WPadm1n';`
	- MariaDB [(none)]> `GRANT ALL ON wordpress.* TO 'admin'@'localhost' IDENTIFIED BY 'WPadm1n' WITH GRANT OPTION;`
	- `FLUSH PRIVILEGES;`
	- `EXIT;`