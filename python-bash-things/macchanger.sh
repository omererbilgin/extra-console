#!/bin/bash

a=1

while [ "$a" -eq "1" ]; do

echo ""
echo "Here is your network interfaces: "
echo ""

ip -o link show | awk -F': ' '{print $2}'

echo ""
read -r -p 'Write your interface that you desire to modify its mac address: ' wlan




i=1
while [ $i -eq 1 ]; do
clear
echo ""
echo "Selected wlan interface: $wlan"
echo ""
echo "Change Mac Address Randomly         (1)"
echo "Change Mac Address Manually         (2)"
echo "Show Your Current Mac Address       (3)"
echo "Reset to Your Permanent Mac Address (4)"
echo "Return Back                         (5)"
echo ""
read -p 'Type the number that matches your desired option: ' ans

if [ "$ans" -eq "1" ]; then

sudo ifconfig "$wlan" down
sudo clear
sudo macchanger -r "$wlan"
read
sudo ifconfig "$wlan" up

clear
exit

elif [ "$ans" -eq "2" ]; then

clear
echo "Mac Address Format: XX:XX:XX:XX:XX:XX"
echo ""
echo "Example: b2:aa:0e:56:ed:f7"
echo ""
read -p "Enter the mac address you want: " defaultmac

clear

sudo ifconfig "$wlan" down
clear
sudo macchanger -m "$defaultmac" "$wlan"
read
sudo ifconfig "$wlan" up
exit

i=2
elif [ "$ans" -eq "3" ]; then
clear
sudo ifconfig "$wlan" | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
read
exit


elif [ "$ans" -eq "4" ]; then
clear

macchanger --permanent
read

exit

elif [ "$ans" -eq "5" ]; then
clear
i=2


else
clear

fi

done

clear



done
