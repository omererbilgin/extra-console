#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

//
int introduction();
int mario();
int opensurge();
int dosbox();
int dolphin();
int chess();
int wolfendoom();
void games();
void everything();
void complete();
void musiccc();
void networ();
void essentials();
void addition();
//

int main(){
    
int a;
    
a = introduction();

if(a =! 1){
system("clear");
everything();
system("clear");
complete();
return 0;

}

system("clear");
essentials();
system("clear");
games();
system("clear");
musiccc();
system("clear");
networ();
system("clear");
addition();
system("clear");
complete();
    return 0;
}

void essentials(){

    // essentials
    system("clear");
    printf("Installing essentials...\n\n\n");
    fflush(stdout);
    sleep(2);

    system("clear");
    system("sudo snap install fast");
    system("clear");
    system("sudo apt-get -y install python3-tk python3-dev");
    system("clear");
    system("sudo apt-get -y install gcc");
    system("clear");
    system("sudo apt-get -y install snapd");
    system("clear");
    system("sudo apt-get -y install  python3");
    system("clear");
    system("sudo apt-get -y install python3-pip");
    system("clear");
    system("sudo pip3 install pyautogui");
    system("clear");
    //

}


void musiccc(){
char xy;

system("clear");
system("clear");
system("clear");
printf("Should I skip the music stuff(Spotify and mp3downloader) or not? [Y]/[n] ");
q:
scanf(" %c",&xy);
if(xy == 'y' || xy == 'Y'){
system("clear");
printf("OK! Continuing without Music Stuff...\n\n\n");
fflush(stdout);
sleep(1);

}
else if(xy == 'n' || xy == 'N'){

char x;
system("clear");
printf("Install Youtube(mp3)Downloader? Highly recommended... [Y]/[n] ");
q1:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

system("clear");
fflush(stdout);
sleep(1);
system("sudo pip3 install youtube_dl");
system("clear");
system("sudo apt-get -y install ffmpeg");
system("clear");
system("sudo apt-get -y install vlc-bin");

}
else if(x == 'n' || x == 'N'){
    system("clear");
printf("OK! Continuing without Youtube(mp3)Downloader...");

  fflush(stdout);
    sleep(1);
    system("clear");
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q1;
}

char x1;
system("clear");
printf("Install Spotify? [Y]/[n] ");
q2:
scanf(" %c",&x1);
if(x1 == 'n' || x1 == 'N'){
system("clear");
printf("OK! Continuing without Spotify...");
fflush(stdout);
sleep(1);

}
else if(x1 == 'y' || x1 == 'Y'){

system("clear");
system("sudo snap install spotify");

fflush(stdout);
sleep(1);

}
else{
printf("\n\nInvalid answer. Please try again:");
goto q2;
}

system("clear");
printf("Music related installations are completed determined with the specifications you gave");
fflush(stdout);
sleep(7);
system("clear");

}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}



}


int introduction(){

char x;


system("clear");
printf("Hello, welcome to the installer for the Extra-Console :)\n\n"); 
printf("Should I ask every installation to install or not? [Y]/[n]: ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y')
return 1;
else if(x == 'n' || x == 'N'){
return 2;
}
else{

printf("\n\nInvalid answer. Please try again: ");
goto q;
}
}

void games(){

int a;
char i1;
char x;
printf("Should I skip the game installations? [Y]/[n] ");
q10:
scanf(" %c",&x);


if(x == 'n' || x == 'N'){

a = mario();
if(a == 1){

system("cd info && echo 'mario,    for mario' >> gamelist && echo '' >> gamelist");
system("sudo snap install mari0");
}
else
printf("\n\nOK! Continuing without mario...\n\n");
fflush(stdout);
sleep(1);

a = opensurge();
if(a == 1){

system("sudo snap install opensurge");
system("cd info && echo 'opensurge,    for open surge' >> gamelist && echo '' >> gamelist");
}
else
printf("\n\nOK! Continuing without opensurge...\n\n");
fflush(stdout);
sleep(1);

a = dolphin();
if(a == 1){

system("cd info && echo 'wii,    for dolphin-emu' >> gamelist && echo '' >> gamelist");
system("sudo apt-add-repository -y ppa:dolphin-emu/ppa");
system("sudo apt-get -y update");
system("sudo apt-get -y install dolphin-emu");
}
else
printf("\n\nOK! Continuing without dolphin-emu...\n\n");
fflush(stdout);
sleep(1);

a = dosbox();

if(a == 1){

system("cd info && echo 'dosbox,    for DOS-BOX' >> gamelist && echo '' >> gamelist");
system("sudo apt-get -y install dosbox");
}
else
printf("\n\nOK! Continuing without DOSBOX...\n\n");
fflush(stdout);
sleep(1);

a = chess();

if(a == 1){

system("sudo apt-get -y install gnome-chess");
system("cd info && echo 'chess,    for chess' >> gamelist && echo '' >> gamelist");
}
else
printf("\n\nOK! Continuing without Chess...\n\n");
fflush(stdout);
sleep(1);

a = wolfendoom();

if(a == 1){

system("sudo snap install boa");
system("cd info && echo 'wolfendoom,    for WolfenDoom' >> gamelist && echo '' >> gamelist");
}
else
printf("\n\nOK! Continuing without WolfenDoom...\n\n");
fflush(stdout);
sleep(1);
system("clear");
printf("The installations of the Game Section has been completed with your specifications...\n\n");
fflush(stdout);
sleep(7);
}
else if(x == 'y' || x == 'Y'){
system("clear");
printf("OK! Continuing without games...");
fflush(stdout);
sleep(4);
system("clear");
}
else{
    printf("Illegal answer. Please try again... ");
    goto q10;
}


}

int wolfendoom(){
    fflush(stdout);
sleep(1);
char x;

system("clear");
printf("Do you want to install WolfenDoom. Cool game but installing may take several minutes... [Y]/[n]: ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}

}


int chess(){
    fflush(stdout);
sleep(1);
char x;
system("clear");
printf("Do you want to install chess [Y]/[n]: ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}
}


int dosbox(){
    fflush(stdout);
sleep(1);
char x;

system("clear");
printf("Do you want to install DOSBOX. It lets you play DOS games [Y]/[n]: ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}
}

int dolphin(){
    fflush(stdout);
sleep(1);
char x;

system("clear");
printf("Do you want to install Dolphin-emu. It virtualizes wii games [Y]/[n] ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}
}

int mario(){
    fflush(stdout);
sleep(1);
char x;

system("clear");
printf("Do you want to install Mario [Y]/[n] ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}
}
int opensurge(){
    fflush(stdout);
sleep(1);
char x;

system("clear");
printf("Do you want to install OpenSurge. Fun game btw [Y]/[n] ");
q:
scanf(" %c",&x);
if(x == 'y' || x == 'Y'){

return 1;
}
else if(x == 'n' || x == 'N'){

return 2;
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}

}

void everything(){
fflush(stdout);
sleep(1);

system("clear");
system("sudo apt-get -y install python3-tk python3-dev");
system("clear");
system("sudo apt-get -y install macchanger");
system("clear");
system("sudo apt-get -y install gcc");
system("clear");
system("sudo apt-get -y install snapd");
system("clear");
system("sudo apt-get -y install  python3");
system("clear");
system("sudo snap install mari0");
system("clear");
system("sudo snap install opensurge");
system("clear");
system("sudo apt-add-repository -y ppa:dolphin-emu/ppa");
system("clear");
system("sudo apt-get update");
system("clear");
system("sudo apt-get -y install dolphin-emu");
system("clear");
system("sudo apt-get -y install dos-box");
system("clear");
system("sudo apt-get -y install python3-pip");
system("clear");
system("sudo pip3 install pyautogui");
system("clear");
system("sudo apt-get -y install gnome-chess");
system("clear");
system("sudo pip3 install youtube_dl");
system("clear");
system("sudo apt-get -y install ffmpeg");
system("clear");
system("sudo snap install boa");
system("clear");
system("sudo add-apt-repository -y ppa:ubuntu-mozilla-daily/ppa");
system("sudo apt-get update");
system("sudo apt-get -y install thunderbird");
system("clear");
system("sudo wget -q https://packagecloud.io/AtomEditor/atom/gpgkey -O- | sudo apt-key add -");
system("sudo add-apt-repository 'deb [arch=amd64] https://packagecloud.io/AtomEditor/atom/any/ any main'");
system("sudo apt-get -y install atom");
system("clear");
system("sudo apt-get -y install curl");
system("clear");
system("sudo apt-get -y install net-tools");
system("clear");
system("sudo snap install spotify");
system("clear");
system("sudo apt-get -y install netdiscover");
system("clear");
system("sudo apt-get -y install speedtest-cli");
system("clear");
system("sudo apt-get -y install net-tools");
system("clear");
system("sudo snap install fast");
system("clear");
system("sudo apt-get -y install gnupg");
system("clear");
}

void complete(){
fflush(stdout);
sleep(0.2);
system("cd info && echo '' >> gamelist && echo 'Ctrl X to quit' >> gamelist");
system("gcc extra-console.c -o extra-console");
system("clear");

printf("Installation complete...");
printf("\n\nType './extra-console' to run 'Extra Console'\n\n");


}

void networ(){

system("clear");
char x;
printf("Should I skip networking installations? Such as IP changer, mac changer, netdiscover and scan-tools [Y]/[n] ");
q:
scanf(" %c",&x);

if(x == 'y' || x == 'Y'){

system("clear");
printf("OK! Continuing without the Networking-Installations...");
fflush(stdout);
sleep(1);

}
else if(x == 'n' || x == 'N'){
char x1;
system("clear");
printf("Install Mac Changer? Recommended... [Y]/[n] ");
q1:
scanf(" %c",&x1);
if(x1 == 'y' || x1 == 'Y'){
system("clear");

system("sudo apt-get -y install macchanger");
}
else if(x1 == 'n' || x1 == 'N'){
    system("clear");
    printf("OK! Continuing without Mac Changer...");
    fflush(stdout);
    sleep(1);
    system("clear");
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q1;
}

char x1;
system("clear");
printf("Install net-tools? [Y]/[n] ");
q1:
scanf(" %c",&x1);
if(x1 == 'y' || x1 == 'Y'){
system("clear");

system("sudo apt-get -y install net-tools");
}
else if(x1 == 'n' || x1 == 'N'){
    system("clear");
    printf("OK! Continuing without net-tools...");
    fflush(stdout);
    sleep(1);
    system("clear");
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q1;
}
char x2;
system("clear");
printf("Install netdiscover? Shows nearby networks [Y]/[n] ");
q2:
scanf(" %c",&x2);
if(x2 == 'y' || x2 == 'Y'){

system("clear");
system("sudo apt-get -y install netdiscover");
}
else if(x2 == 'n' || x2 == 'N'){
    system("clear");
    printf("OK! Continuing without net-discover...");
    fflush(stdout);
    sleep(1);
    system("clear");
}
else{
printf("\n\nInvalid answer. Please try again:");
goto q2;
}
system("clear");


}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}

system("clear");
printf("Networking Tools are installed with the specifications you gave");
fflush(stdout);
sleep(7);
system("clear");


}

void addition(){

system("clear");
printf("Do you want to skip the Additional installations? I recommend to at least check them [Y]/[n] ");
char x;
q:
scanf(" %c",&x);

if(x == 'y' || x == 'Y'){
    system("clear");
printf("OK! Continuing without Additional installations...");
fflush(stdout);
sleep(1);
}
else if(x == 'n' || x == 'N'){

system("clear");
printf("Do you want to be able to Encrypt your files with GPG. Highly recommended [Y]/[n] ");
char x1;
q1:

scanf(" %c",&x1);
if(x1 == 'y' || x1 == 'Y'){
system("clear");
system("sudo apt-get -y install gnupg");
system("clear");
}
else if(x1 == 'n' || x1 == 'N'){
system("clear");
printf("OK! Continuing without GPG...");
fflush(stdout);
sleep(1);
system("clear");
}
else{
printf("\n\nInvalid answer. Please try again... ");
goto q1;
}
char x3;
system("clear");
printf("Do you want to install LibreOffice?(a word-processor) It is probably installed so check before saying yes [Y]/[n] ");
q2:
scanf(" %c",&x3);

if(x3 == 'y' || x3 == 'Y'){
system("clear");
system("sudo add-apt-repository -y ppa:libreoffice/ppa && sudo apt-get update");
system("sudo apt-get -y install libreoffice");
system("clear");
}
else if(x3 == 'n' || x3 == 'N'){
system("clear");
printf("OK! Continuing without LibreOffice...");
fflush(stdout);
sleep(1);
}
else{
printf("\n\nInvalid answer. Please try again... ");
goto q2;
}

system("clear");
printf("Install SMS sender? (1 sms per day) Highly recommended [Y]/[n] ");
char x2;
q3:
scanf(" %c",&x2);

if(x2 == 'y' || x2 == 'Y'){
system("clear");
system("sudo apt-get -y install curl");
system("clear");
}
else if(x2 == 'n' || x2 == 'N'){
system("clear");
printf("OK! Continuing without SMS-service...");
fflush(stdout);
sleep(1);
}
else{
printf("\n\nInvalid answer. Please try again... ");
goto q3;
}
system("clear");

printf("Install Atom text editor? Recommended for development [Y]/[n] ");

char x4;
q4:
scanf(" %c",&x4);

if(x4 == 'y' || x4 == 'Y'){
system("clear");
system("sudo wget -q https://packagecloud.io/AtomEditor/atom/gpgkey -O- | sudo apt-key add -");
system("sudo add-apt-repository 'deb [arch=amd64] https://packagecloud.io/AtomEditor/atom/any/ any main'");
system("sudo apt-get -y install atom");
system("clear");
}
else if(x4 == 'n' || x4 == 'N'){
system("clear");
printf("OK! Continuing without Atom...");
fflush(stdout);
sleep(1);
}
else{
printf("\n\nInvalid answer. Please try again... ");
goto q4;
}
system("clear");
printf("Install Thunderbird? Lets you check your mails [Y]/[n] ");

char x5;
q5:
scanf(" %c",&x5);

if(x5 == 'y' || x5 == 'Y'){
system("clear");
system("sudo add-apt-repository -y ppa:ubuntu-mozilla-daily/ppa");
system("sudo apt-get update");
system("sudo apt-get -y install thunderbird");
system("clear");
}
else if(x5 == 'n' || x5 == 'N'){
system("clear");
printf("OK! Continuing without Thunderbird...");
fflush(stdout);
sleep(1);
}
else{
printf("\n\nInvalid answer. Please try again... ");
goto q5;
}

system("clear");
printf("The Additional installations are completed determined with your specifications");
fflush(stdout);
sleep(6);


}
else{
printf("\n\nInvalid answer. Please try again:");
goto q;
}
}