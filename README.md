# mg42 library
mg42 library expansion based on rtcwpub

system recommendations:
debian 11.1 (bullseye) i386, repository https://cdimage.debian.org/debian-cd/current/i386/iso-cd/debian-11.1.0-i386-netinst.iso
make
nasm
gcc

compilation:
for wolfded.x86 - /src/unix/make server

for qagame.mp.i386.so - /src/game/make

additional notes :
make sure start script (start.sh) has executable attributes and rights
chmod +x ./start.sh to give gameserver start script executable attributes rights

main .wolf/ folder structure:
.wolf/start.sh - gameserver starting script;
.wolf/wolfded.x86 - main gameserver program;
.wolf/banned.txt - ip addresses banned from connecting to gameserver in format 1.1.1.1/32, can be edited during gameserver runnings without closing or restarting gameserver, gameserver do file checks every 30 seconds and every client connection;
.wolf/main/ - folder containing all maps .pk3 files;
.wolf/rtcwPub/qagame.mp.i386.so - gameserver gameplay library;
.wolf/rtcwPub/shared.cfg - server configuration file;
.wolf/rtcwPub/deathmatch.cfg - gameplay settings configuration;
.wolf/rtcwPub/language.cfg
.wolf/rtcwPub/objective.cfg
.wolf/rtcwPub/GeoIP.dat - file containing IP geolocation data displayed in /gs, can be updated directly from maxmind.com;
.wolf/rtcwPub/logs/console.log - gameserver console log file;
.wolf/rtcwPub/stats/ - gameserver players statistics file, created automatically for each map played on gameserver if statistics are enabled in server configuration;
