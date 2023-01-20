#!bin/bash

# Get minutes and seconds
bmin=$(uptime -s | cut -d ":" -f 2)
msec=$(uptime -s | cut -d ":" -f 3)

# Calculate number of seconds between the nearest 10th minute of the hour and boot time:
delay=$(bc <<< $bmin%10*60+$bsec)

# Wait that number of seconds
sleep $delay