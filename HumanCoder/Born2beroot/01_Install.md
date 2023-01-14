# INSTALAÇÃO E CONFIGURAÇÕES INICIAIS DO DEBIAN

- É necessário ter a Virtual Box instalada na máquina.
- É necessário fazer o download do [Debian](https://www.debian.org/download).

## Instalando o Debian na VM

### Parte 01:

Na Virtual Box Machine (VM), clique em **"✸ NEW"**.

> Vai abrir uma janela de instalação.

1. Aba **Name and Operation System**:
	- Preencha apenas **Name**: `Debian`.
	- Atenção: NÃO importe a **ISO Image** aqui ainda.
2. Aba `Hardware`:
	- **Base Memory**: `2048MB`
3. Aba **Hard Disk**:
	- Selecione a opção `Create a Virtual Hard Disk Now`
		- Em **Hard Disk File Location and Size**: `8GB`
			> Fica a seu critério a quantidade de espaço que seu servidor terá
		- Em **Hard Disk File Type and Variant**: `VDI (VirtualBox Disk Image)`
4. O que não foi mencionado, não mexa.
5. Clique em **Finish**.

### Parte 02:

Na VM, agora com o Debian selecionado do lado esquerdo, clique em **"⚙ SETTINGS"**.

> Vai abrir uma janela de configurações.

1. Aba **Storage**:
	- Clique em **🞉 Empty** logo abaixo de **Controller: IDE**.
	- Clique no ícone de CD (**🞉**) em frente a **Optical Drive**, depois em **Chose a Disk File** e selecione o iso do Debian que foi baixado.
2. Aba **Network**
	- Na aba **Adapter 1**, em **Attached to:** selecione a opção `Bridged Adapter`.
3. Não mexa no que não foi mencionado e clique em **OK**.


## Iniciando as configurações do Debian

Na VM, com o Debian selecionado do lado esquerdo, clique em **"🡺 START"**.

> Vai abrir um prompt de comando onde iniciaremos as configurações, e o mouse não funciona, toda a configuração é feita pelo teclado.

### Configurações de usuário e localização

1. Debian GNU/Linux installer menu (BIOS mode): `Install`
	> Não utilizaremos uma interface gráfica.
2. Select a language: `English`
3. Select your location: `other` > `South America` > `Brazil`
4. Configure locales: `United States - en_US.UTF-8`
5. Configure the keyboard: `Brazilian`

|█████ 100% █████|

6. Configure the network > Hostname: `<user42>`
	- Coloque seu login seguido de 42 sem espaço.
7. Configure the network > Domain: `<domínio de sua preferência>`
8. Set up users and passwords > Root password: `<senha>`
9. Set up users and passwords > Re-enter password to verify: `<senha>`
10. Set up users and passwords > Full name for the new user: `<seu nome>`
	- Coloque seu nome.
11. Set up users and passwords > Username for your account: `<user>`
	- Coloque apenas o seu login.
12. Set up users and passwords > Choose a password for the new user: `<senha>`
13. Set up users and passwords > Re-enter password to verify: `<senha>`
14. Configure the clock: `São Paulo`

|█████ 100% █████|



### Partições (com bônus)

Configurações em **\[!!] Partition disks**



#### Parte 01: Criando partições.

1. `Manual`
2. `SCSI3 (0,0,0) (sda) - 8.6 GB ATA VBOX HARDDISK`
	> Também pode ser SCSI2
3. Create new empty partition table on this device: `Yes`
4. SCSI3 (0,0,0) (sda) - 8.6 GB ATA VBOX HARDDISK > `pri/log 8.6 GB FREE SPACE`
5. How to use this free space: `Create a new partition`
6. New partition size: `500 MB`
7. Type for the new partition > `Primary`
8. Location for the new partition: `Beginning`
9. Partition settings:
	- Use as: `Ext4 journaling file system`
	- Mount point: `/boot - static files of the boot loader`
	- `Done setting up the partition`
		> Vai aparecer a nova partição **#1 primary 499.1 MB f ext4 /boot**
10. SCSI3 (0,0,0) (sda) - 8.1 GB ATA VBOX HARDDISK > `pri/log 8.6 GB FREE SPACE`
11. How to use this free space: `Create a new partition`
12. New partition size: `max`
13. Type for the new partition > `Logical`
14. Partition settings:
	- Use as: `Ext4 journaling file system`
	- Mount point: `Do not mount it` (`none`)
	- `Done setting up the partition`
		> Vai aparecer a nova partição **#5 logical 8.1 GB f ext4** (pode variar o número após a hash).

> Não finalize ainda! Continuação abaixo.



#### Parte 02: Encriptando a partição onde vão ficar os volumes lógicos.

15. `Configure encrypted volumes`
	- Write the changes to disk and configure encrypted volumes: `Yes`
16. `Create encrypted volumes`
17. `/dev/sda5 (8087MB; ext4)`
	> Utilize o espaço para selecionar o sda5 (não fazer no sda1, pois é o boot)
18. `Done setting up the partition`
19. `Finish`
20. Really erase the data on SCSI3 (0,0,0), partition #5 (sda): `yes`

|█████ 100% █████|

21. Encryption passphrase: `<senha>`
	> Anote e guarde esta senha.
22. Re-enter password to verify: `<senha>`

|█████ 100% █████|

> Não finalize ainda! Continuação abaixo.



#### Parte 03: Criando os volumes lógicos (bônus)

23. `Configure the Logical Volume Manager`
24. Write the changes to disks and configure LVM: `Yes`
25. LVM configuration action: `Create volume group`
26. Volume group name: `LVMGroup`
27. Devices for the new volume group: `/dev/mapper/sda5_crypt (8070MB; ext4)`
28. `Create logical volume`
	- Volume group: `LVMGroup (8069MB)`
	- Logical volume name: `root`
	- Logical volume size: `2GB`
29. `Create logical volume`
	- Volume group: `LVMGroup (6073MB)`
	- Logical volume name: `swap`
	- Logical volume size: `1GB`
30. `Create logical volume`
	- Volume group: `LVMGroup (5075MB)`
	- Logical volume name: `home`
	- Logical volume size: `1GB`
31. `Create logical volume`
	- Volume group: `LVMGroup (4076MB)`
	- Logical volume name: `var`
	- Logical volume size: `1GB`
32. `Create logical volume`
	- Volume group: `LVMGroup (3078MB)`
	- Logical volume name: `srv`
	- Logical volume size: `1GB`
33. `Create logical volume`
	- Volume group: `LVMGroup (2080MB)`
	- Logical volume name: `tmp`
	- Logical volume size: `1GB`
34. `Create logical volume`
	- Volume group: `LVMGroup (1082MB)`
	- Logical volume name: `var-log`
		> Digite apenas um traço em 'var-log'.
	- Logical volume size: `1082MB`
		> Ou preencha com o que sobrou da memória.
35. `Finish`

|█████ 100% █████|

> Agora temos um overview das partições para verificar se está tudo certinho.

> Não finalize ainda! Continuação abaixo.



#### Parte 04: Configurando os volumes lógicos (bônus)

58. LVM VG LVMGroup, LV **home** - 998.2 MB Linux device-mapper (linear) > `#1	998.2 MB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `/home - user home directories`
	- `Done setting up the partition`
59. LVM VG LVMGroup, LV **root** - 2.0 GB Linux device-mapper (linear) > `#1	2.0 GB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `/ - the root file system`
	- `Done setting up the partition`
60. LVM VG LVMGroup, LV **srv** - 998.2 MB Linux device-mapper (linear) > `#1	998.2 MB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `/srv - data for services provided by this system`
	- `Done setting up the partition`
61. LVM VG LVMGroup, LV **swap** - 998.2 MB Linux device-mapper (linear) > `#1	998.2 MB`
	- Use as: `swap area`
	- `Done setting up the partition`
62. LVM VG LVMGroup, LV **tmp** - 998.2 MB Linux device-mapper (linear) > `#1	998.2 MB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `/tmp - temporary files`
	- `Done setting up the partition`
63. LVM VG LVMGroup, LV **var** - 998.2 MB Linux device-mapper (linear) > `#1	998.2 MB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `/var - variable data`
	- `Done setting up the partition`
64. LVM VG LVMGroup, LV **var-log** - 1.1 GB Linux device-mapper (linear) > `#1	1.1 GB`
	- Use as: `Ext4 journaling file system`
	- Mount point: `Enter manually`
	- Mount point for this partition: `/var/log`
	- `Done setting up the partition`
65. `Finish partitioning and write changes to disk`
66. Writethe changes to disks: `Yes`

|█████ 100% █████|

67. Scan extra installation media: `No`

> Continuação abaixo.


#### Parte 05: Configurando os gerenciadores de pacotes e softwares

Configurações em ****

68. \[!] Configure the package manager > Debian archive mirror country: `Brazil`
69. \[!] Configure the package manager > Debian archive mirror: `deb.debian.org`
	> Aqui você pode escolher a unidade mais próximas da localização do seu servidor.
70. \[!] Configure the package manager > HTTP proxy information (blank for none): ` `
	> Pode deixar em branco.

|█████ 100% █████|

71. \[!] Configure the package manager > Participate in the package usage survey: `No`

|█████ 100% █████|

72. \[!] Software selection > Choose software to install: ` `
	> Desmarque todas as opções.

|█████ 100% █████|

73. \[!] Install the GRUB boot loader > Install the GRUB boot loader to your primary drive: `Yes`
	- Device for boot loader installation: `/dev/sda (ata-VBOX_HARDDISK_VBXXXXXXXX-xxxxxxxx)`

|█████ 100% █████|

74. \[!!] Finish the installation: `Continue`

> Seu servidor será reiniciado.

---

> Agora você pode fazer uma pausa para o café antes de continuar, o restante é no prompt do seu próprio servidor. =)