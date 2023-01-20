#!bin/bash

# Architecture
arch=$(uname -a)
pcpu=$(nproc --all)
vcpu=$(grep 'processor' /proc/cpuinfo | uniq | wc -l)

# RAM Usage
tram=$(free -m | grep Mem: | awk '{print $2}')
uram=$(free -m | grep Mem: | awk '{print $3}')
pram=$(free -m | grep Mem: | awk '{printf("%.2f"), $3/$2*100}')

# HDD Usage
thdd=$(df -Bm | grep -v -e boot -e tmpfs -e udev | awk '{td += $2} END {print td/1000}')
uhdd=$(df -Bm | grep -v -e boot -e tmpfs -e udev | awk '{ud += $3} END {print ud}')
phdd=$(df -Bm | grep -v -e boot -e tmpfs -e udev | awk '{ud += $3} {td += $2} END {printf("%.2f"), ud/td*100}')

# Processor Usage
cpul=$(mpstat | grep all | awk '{print 100 - $13}')

# Last Boot
boot=$(who -b | awk '{print $3 " " $4}')

# LVM on/off
lvmu=$(lsblk | grep LVM -q && echo yes || echo no)

# Active Connections
ctcp=$(netstat -ant | grep ESTABLISHED | wc -l)

# Logged Users
ulog=$(w -h | wc -l)

# IP an MAC addresses
adip=$(hostname -I | awk '{print $1}')
amac=$(ip addr | grep ether | awk '{print $2}')

# Total sudo commands
tsud=$(journalctl _COMM=sudo | grep COMMAND | wc -l)


# MONITORING PANNEL
wall "
	#Architecture: ${arch}
	#CPU physical: ${pcpu}
	#vCPU: ${vcpu}
	#Memory Usage: ${uram}/${tram}MB (${pram}%)
	#Disk Usage: ${uhdd}/${thdd}Gb (${phdd}%)
	#CPU load: ${cpul}
	#Last boot: ${boot}
	#LVM use: ${lvmu}
	#Connections TCP: ${ctcp} ESTABLISHED
	#User log: ${ulog}
	#Network: IP ${adip} (${amac})
	#Sudo: ${tsud} cmd
	"
