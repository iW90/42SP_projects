# CONHECIMENTOS NECESSÁRIOS

## Gerando a assinatura

No Shell:

`sha1sum <dir/fileDebian.vdi>`: Será gerada uma chave.

Criar um arquivo chamado `signature.txt` e colar a chave. Este arquivo que deve ser entregue no projeto.

Para cada avaliação, crie um Snapshot para que mexa na cópia sem alterar o arquivo original.


## Questões

P: Qual a diferença entre Debian e Rocky?

> R: O Rocky surgiu após o encerramento das atividades do CentOS em 2020. Apesar de ser open-source, existe uma empresa por trás, a Red Hat, fazendo com que tenha um pouco mais de estabilidade e seja preferida pelas empresas. Não possui tantos pacotes disponíveis quanto o Debian, mas o suficiente para suprir as necessidades. Já o Debian existe desde 1993, e desde sempre é mantido 100% pela comunidade e gerenciado por um grupo de voluntários. Possui muito mais pacotes, embora esses dependam da disponibilidade de seus mantenedores, o que siginifica que muitos podem estar desatualizados.

P: Por que Debian?

> R: É mais fácil de instalar e configurar do que o Rocky.

P: O que é uma máquina virtual?

> R: A Virtual Machine (VM) é um recurso que simula um computador físico para executar programas e aplicativos. Assim você pode executar seu próprio sistema operacional em um  ambiente separado, sem que ele "saiba" que está rodando em outro sistema.

P: Qual é o propósito da VM?

> R: As VMs podem ser implantadas para acomodar diferentes níveis de necessidades de poder de processamento, para executar software que requer uma sistema operacional diferente ou para testar aplicativos em um ambiente seguro e protegido.

P: Como funciona?

> R: VM funcionando por meio da tecnologia "Virtualização". A virtualização usa software para simular hardware virtual que permite VMs executarem em um único host.

P: Qual a diferença entre aptitude e apt?

> R: O Aptitude é um gerenciador de pacotes de alto nível enquanto o APT é um gerenciador de pacotes de nível inferior que pode ser usado por outros gerenciadores de pacotes de nível superior. O Aptitude é mais vasto em funcionalidades do que o apt-get e integra funcionalidades do apt-get e suas outras variantes, incluindo apt-mark e apt-cache. Além disso, o Aptitude possui uma interface de usuário mais interativa, e é considerado um gerenciador de pacotes melhor. Mas a principal diferença é que o apt possui os poderes da Super Vaca (`apt moo`), enquanto o aptitude não possui eastereggs (`aptitude moo` -> `aptitude -v moo` -> `aptitude -vv moo` -> `aptitude -vvv moo` -> `aptitude -vvvv moo` -> `aptitude -vvvvv moo` -> `aptitude -vvvvvv moo`).

P: O que é AppArmor?

> R: AppArmor ("Application Armor") é um módulo de segurança do kernel do Linux que permite ao administrador do sistema restringir os acessos dos programas através de perfis de usuários.

P: O que é SSH?

> R: SSH, (Secure Shell ou Secure Socket Shell), é um protocolo de rede que fornece aos usuários, particularmente ao sistema administrador, uma maneira segura de acessar um computador em uma rede não segura. O Secure Shell fornece autenticação de senha forte e autenticação de chave pública, bem como comunicações de dados criptografados entre dois computadores conectados por uma rede aberta, como a Internet.



---

## CLI

> Se não estiver no root, utilize sudo.

#### Criação de novo usuário:

```
| adduser username                       | <- cria novo user
| chage -l username                      | <- verifica info sobre senha do user
| adduser username sudo                  | <- adiciona o user ao grupo sudo
| adduser username user42                | <- adiciona o user ao grupo user42
```

#### Checklist:

```
| dpkg -l | grep xorg                    | <- verifica as interfaces gráficas instaladas
| uname -v                               | <- nome do sistema em uso
| hostname                               | <- mostra o nome do host
| lsblk                                  | <- verifica as partições
| aa-status                              | <- AppArmor status
| getent group sudo                      | <- sudo group users
| getent group user42                    | <- user42 group users
| service ssh status                     | <- ssh status
| service ufw status                     | <- ufw status
| ssh username@ipadress -p 4242          | <- conecte-se à VM de sua máquina host (física) via SSH
| nano /etc/sudoers.d/sudoconfig         | <- arquivo de configuração do sudo. Você pode usar "ls /etc/sudoers.d" primeiro
| nano /etc/login.defs                   | <- política de expiração da senha
| nano /etc/security/pwquality.conf      | <- política de expiração de senha pt2
| crontab -l                             | <- agendamento cron
| service --status-all                   | <- serviços instalados
```

#### Novo usuário e grupo:

```
| sudo adduser <user>                    | <- Cria um novo usuário
| sudo addgroup <groupname>              | <- Cria um novo grupo
| sudo adduser <user> <groupname>        | <- Adiciona o usuário no grupo.
```

#### Como mudar o hostname:

```
| nano /etc/hostname`                    | <- Bastra trocar o nome no arquivo
| sudo reboot                            | <- reinicia o sistema
```

#### Logs do sudo:

```
| cd /var/log/sudo/00/00 && ls`          | <- você verá vários diretórios (01 2B 9S 4D etc). Eles contém os logs.
| sudo apt update                        | <- cria um novo log
| ls                                     | <- veja que surgiu um novo diretório
```

#### Como adicionar e remover a porta 8080 no UFW:

```
| ufw allow 8080                         | <- permite
| ufw status                             | <- verifica
| ufw deny 8080                          | <- fecha
| sudo ufw delete deny 8080              | <- deleta
```

#### Como rodar o script a cada 30 segundos:

`crontab -e`: Abre a agenda do crontab.

Substitua seu comando pela linha abaixo no arquivo:

`*/1 * * * * sleep 30s && /path/to/monitoring.sh`

Para não rodar na inicialização, basta usar o @reboot:

`@reboot /path/to/monitoring.sh`

#### Cron:

```
| sudo crontab -e                       | <- Modifica o tempo do cron
| sudo /etc/init.d/cron stop            | <- Interrompe o cron
| sudo /etc/init.d/cron start           | <- Inicia o cron
```

#### Fail2Ban:

```
| fail2ban-client status sshd           | <- Lista os banidos
| systemctl status fail2ban             | <- Verifica se ativo
| systemctl restart fail2ban            | <- Reinicia o serviço
| systemctl stop fail2ban               | <- Interrompe o serviço
| systemctl start fail2ban              | <- Interrompe o serviço
```
