# COMANDOS NECESSÁRIOS

## Mostrar que não há interface gráfica instalada

- `dpkg -l | grep xorg`: Quando há interface instalada, é exibida uma lista de itens instalados.
	> xorg é relacionado ao drive de vídeo.

## Mostrar que o pacote UFW está ativo

- `dpkg -s ufw`: Mostra que está instalado.
- `sudo service ufw status`: Exibe o **"Status: active"** na primeira linha.

# Mostrar que o pacote SSH está ativo

- `sudo service ssh status`: Exibe em destaque o **Active: active (running)**.

# Exibir qual sistema foi utilizado

- `uname -v`: Exibe o nome do sistema em uso.

# Comprovar que o user está dentro dos grupos sudo e user42

- `getent group sudo`: Exibe o nome dos usuários incluídos neste grupo.
- `getent group user42`: Exibe o nome dos usuários incluídos neste grupo.

# Criar um novo user e mostrar que segue a política de senha

- `sudo adduser <user>`: Cria um novo usuário.
	- A senha deve seguir as regras.
	- As demais informações podem ser deixadas em branco.

# Criar um novo grupo

- `sudo addgroup <groupname>`: Cria um novo grupo.

# Adicionar usuário ao grupo

- `sudo adduser <user> <groupname>`: Adiciona o usuário no grupo.

# Mostrar o hostname login42

- `hostname`: Mostra o nome do hostname.

# Modificar o hostname

- `sudo nano /etc/hostname`
- `sudo reboot`
- Fazer login novamente.

# Mostrar todas as partições

- `lsblk`

# Mostrar que o sudo está instalado

- `which sudo`
- `dpkg -s sudo`: Mostra informações dos pacotes instalados

# Incluir um user nas permissões sudo

- `sudo adduser <user> sudo`

# Mostrar regras sudo

- `sudo nano /etc/sudoers.d/<sudoconfig>`
	> Eu dei o nome de sudoconfig, mesmo.

# Criar nova porta

- `sudo ufw allow 8080`

# Mudar o tempo de execução do script

- `sudo crontab -u root -e`: Modifica o tempo do cron
- `sudo /etc/init.d/cron stop`: Interrompe o cron
- `sudo /etc/init.d/cron start`: Inicia o cron