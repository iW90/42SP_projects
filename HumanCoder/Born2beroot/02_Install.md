# INSTALAÇÃO DE PACOTES E CONFIGURAÇÕES DE NETWORK E USERS

- É necessário ter concluída a primeira parte de instalação e configuração.

## Inicializando o Debian

1. Inicialize seu Debian clicando em **"🡺 START"**.
2. Digite sua **Encryption passphrase**.
3. Digite o nome do user.
4. Digite a senha do user.
5. `su -`: para que seu acesso desça um nível, nesse caso para o root.
	- Digite a senha do root.
	> Também é possível acessar direto o root, só fiz uma etapa a mais para mostrar o comando acima.



## Instalando e configurando o SUDo (super usuário)

1. `apt install sudo`: Baixa e instala o pacote sudo.
2. `adduser <user> sudo`: Inclui o usuário no grupo com permissão de usar sudo.
3. `sudo reboot`: Reinicia a máquina.
	Repita os passos de **Inicializando o Debian**, mas procure continuar como user, não root.
4. `sudo -v`: Atualiza as credenciais em cache, autenticando o user se necessário.
	- Digite sua senha para confirmar.
5. `sudo addgroup <groupname>`: Cria um grupo de usuários sudo.
	- Chame o grupo de `user42`, sem substituir 'user' pelo seu login.
6. `sudo adduser <user> <groupname>`: Adiciona o usuário no grupo.
	- Coloque o usuário criado com o nome do seu login ao grupo recém criado 'user42'.



## Instalando e Atualizando os gerenciadores de pacote (apt e aptitude)

1. `sudo apt update`: Atualiza o pacote apt.
2. `sudo apt-get install aptitude`: Baixa e instala o pacote  o aptitude.
	- Confirme `Y`.

> Diferenças entre apt e aptitude.



## Instalando e configurando o pacote SSH (protocolo de segurança)

1. `sudo apt install openssh-server`: Baixa e instala o pacote Open SSH Server.
	- Confirme `Y`.
2. `sudo nano /etc/ssh/ssh_config`: Abre o arquivo **ssh_config** no Nano.
	> Você pode usar o Vi no lugar do nano, se preferir.
	- Descomente o **"Port 22"** removendo a hashtag e no lugar de **"22"**, use `4242`.
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).
4. `sudo nano /etc/ssh/sshd_config`: Abre o arquivo **sshd_config** no Nano.
	- Descomente o **"Port 22"** removendo a hashtag e no lugar de **"22"**, use `4242`.
	- Descomente o **"PermitRootLogin prohibit-password"** removendo a hashtag e no lugar de **"prohibit-password"**, use `no`.
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).
5. `sudo service ssh status`: Permite verificar se a ssh está ativa.
	> Se ativo, estará em verde **"active (running)"**.

## Instalando e configurando o pacote UFW (firewall)

1. `sudo aptitude install ufw`: Baixa e instala o pacote UFW.
	> Pode usar aptitude ou o apt, tanto faz.
	- Confirme `Y`.
2. `sudo ufw enable`: Ativa o UFW.
3. `sudo ufw allow <porta>`: Adiciona uma regra de acesso à porta informada e já deixa aberta.
	- Use a porta 4242.
4. `sudo ufw status`: Visualiza quais portas estão disponíveis e abertas/fechadas.

	> Para fechar uma porta, você pode usar `sudo ufw deny <porta>`.

	> Para deletar a regra, você pode usar `sudo ufw delete allow <porta>` ou `sudo ufw delete <posição>` (posição é a ordem de colocação que aparece no status).
	
	> Http é a porta 80/tcp, então caso use `sudo ufw allow http` você abrirá essa porta.

## Criando arquivo de configurações do SUDo e configurando acessos

1. `sudo touch /etc/sudoers.d/<arquivosudo>`: Cria o arquivo que será usado para incluir regras do SUDo.
	> Usei o nome `sudoconfig`.
2. `sudo nano /etc/sudoers.d/<arquivosudo>`: Abre o arquivo no Nano para preenchermos com as regras.
	- Regras a serem inseridas no arquivo:
		```
		Defaults	passwd_tries=3
		Defaults	badpass_message="Invalid Password"
		Defaults	log_input,log_output
		Defaults	iolog_dir="/var/log/sudo"
		Defaults	requiretty
		Defaults	secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
		```
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).
3. `sudo nano /etc/login.defs`: Arquivo com várias configurações de senha.
	- Regras a serem modificadas:
		- `PASS_MAX_DAYS	30`
		- `PASS_MIN_DAYS	2`
		- `PASS_WARN_AGE	7`
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).

## Instalando e configurando o pacote libpwquality (senhas fortes)

1. `sudo aptitude install libpam-pwquality`: Baixa e instala o pacote libpwquality.
	- Confirme `Y`.
2. `sudo nano /etc/security/pwquality.conf`: Abre o arquivo **pwquality.conf** no Nano.
	- Regras a serem descomentadas e modificadas:
		- `difok = 7`
		- `minlen = 10`
		- `dcredit = -1`
		- `ucredit = -1`
		- `lcredit = -1`
		- `maxrepeat = 3`
		- `usercheck = 1`
		- `retry = 3`
		- `enforce_for_root`
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).

## Alterando as senhas

1. `sudo chage -M 30 <user>`: Define para 30 o número máximo de dias necessários para trocar a senha.
2. `sudo chage -m 2 <user>`: Define para 2 o número mínimo de dias necessários para trocar a senha.
3. `sudo chage -l <user>`: Log de informações do usuário.
	> Aqui deve mostrar os números mínimo e máximo de dias que foram mudados.
4. `sudo passwd <user>`: Redefine a senha do usuário.

## Instalando e configurando o pacote NetTools (ferramentas de network/internet)

1. `sudo apt install net-tools`: Baixa e instala o pacote NetTools.
2. `sudo systemctl restart sshd`: Reinicia a o SSHD.
3. `ss -tunlp`: Exibe quais portas estão abertas.


## Conectando no Servidor

1. `hostname -I`: Exibe o endereço IPv4 e o IPv6 do Servidor.
	> É diferente do IP da máquina.
2. `ssh -p 4242 <user>@<IPv4>`: Use em um terminal fora da VM para se conectar ao servidor.

## Configurações para evitar erros de conexão na SSH

1. `sudo ifconfig -a`: Exibe informações da rede.
2. `sudo route -n`: Exibe informações da rota (gateway).
3. `sudo nano /etc/network/interfaces`: Abre o arquivo **interfaces** no Nano.
	- Regra a ser modificada:
		- `iface enp0s3 inet static`
	- Regras a serem inseridas no final do arquivo:
		> As informações de IPv4 e Netmask são exibidas no comando de informações de rede (ifconfig):
		```
		address <IPv4>
		netmask <netmask>
		```
		> As informações de Gateway são exibidas no comando de informações de rota (route):
		```
		gateway <gateway>
		```
		> Acrescente também:
		```
		# This is a autoconfigured IPv6 interface
		iface enp0s3 inet6 auto
		```
	- Salve e saia do Nano (`Ctrl + S`; `Ctrl + X`).

## AppArmor

O AppArmor protege proativamente o sistema operacional e os aplicativos contra ameaças externas ou internas, até mesmo ataques de dia zero, reforçando o bom comportamento e impedindo que falhas de aplicativos conhecidas e desconhecidas sejam exploradas.

- `sudo aa-status`: Exibe o status do AppArmor (já vem instalado com o Debian nas novas versões).
	> Usado pra mostrar que ele está instalado e ativo.

---

> Quase tudo configurado e instalado! Agora é a parte do Script.
