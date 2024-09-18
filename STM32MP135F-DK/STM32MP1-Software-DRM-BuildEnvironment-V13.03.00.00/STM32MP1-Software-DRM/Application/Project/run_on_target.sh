#!/bin/sh

ipFile=./target_ip.txt
target_folder=/tmp
ipaddr=$TARGET_IP_ADDR

echo
echo "Script $0 started ..."

if [ -z "$ipaddr" ]; then
  # check, if ipFile is existing
  if [ ! -f $ipFile ]; then
      echo "ERROR: $ipFile not found!"
      echo "Please add file $ipFile containing the ip address of the target"
      exit 1
  fi


  # read first line of ipFile as ip address and remove trailing new line
  ipaddr=$(head -1 $ipFile |  tr -d [$'\t\r\n'])
fi


# check, if $ipaddr contains a valid ip address
if ! expr "$ipaddr" : '[0-9][0-9]*\.[0-9][0-9]*\.[0-9][0-9]*\.[0-9][0-9]*$' >/dev/null; then
   echo "ERROR: invalid ip address set ($ipaddr)!"
   echo "Please set a valid ip address in environment variable TARGET_IP_ADDR or in file $ipFile"
   exit 1
fi


# check, if target ip is available
ping -w 1 $ipaddr > /dev/null
if [ $? -eq 1 ]; then
   echo "ERROR: Target ip $ipaddr not avialable!"
   echo "Please check your target platform at ip address $ipaddr or set another ip address in environment variable TARGET_IP_ADDR or in $ipFile"
   exit 1
fi

# kill already running binary
ssh -o ConnectTimeout=3 -o StrictHostKeyChecking=no root@$ipaddr pkill $(echo $1 | cut -c-12)
if [ $? -eq 0 ]; then
   sleep 1
fi

# download the binary file
echo "downloading $1 to target $ipaddr using scp ..."
scp -o ConnectTimeout=3 -o StrictHostKeyChecking=no $1 root@$ipaddr:$target_folder
if [ $? -eq 1 ]; then
   echo "ERROR: downloading $1 failed!"
   exit 1
fi

echo "$1 successfully downloaded"
echo

# execute the binary file
echo "starting $1 to target $ipaddr using ssh ..."
ssh -o ConnectTimeout=3 -o StrictHostKeyChecking=no root@$ipaddr $2 $target_folder/$1
if [ $? -eq 1 ]; then
   echo "ERROR: starting $1 failed!"
   exit 1
fi
echo

exit 0
