

//libraries----------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
//-------------------------------------------------------------------------------------------------

//letting the compiler read the functions before executing them------------------------------------
void cmdline(int);
void cmdd();
int r1(int);
void srch();
void recommendation();
void search();
void resolution();
void position();
void eba();
void mac();
char *readFile(char[200]);
void netdisc();
void intspeed();
void networm();
void ip();
void games();
char *invalidcmd(char*);
void gamechoice(char*);
void spotify();
void srchyoutube();
void mp3();
void music();

//-------------------------------------------------------------------------------------------------

int main(){ // no args required

system("clear");
cmdline(0);


return 0;


}

void printcmd(int bbb){

int a = r1(10);


if(bbb == 0){
system("clear");
if(a == 0)
printf("\nTake a walk if you're bored\n\n");
else if(a == 1)
printf("\nPutin\n\n");
else if(a == 2)
printf("\nNerd\n\n");
else if(a == 3)
printf("\nI love you\n\n");
else if(a == 4)
printf("\nWhatsup?\n\n");
else if(a == 5)
printf("\nLets play\n\n");
else if(a == 6)
printf("\nYou are seeing the matrix, aren't you?\n\n");
else if(a == 7)
printf("\nI wanna hack\n\n");
else if(a == 8)
printf("\nSomeday I am gonna be real\n\n");
else if(a == 9)
printf("\nShh, Everything's gonna be ok\n\n");
}
else if(bbb == 1){

// blank
}
else{
system("clear");
printf("\nCommand not found");
}

printf("\n\n\n\n\n\n\n");
printf("---------------------------------\n");
printf("> ");



}


void cmdline(int bbb){

printcmd(bbb);
cmdd();

}

int r1(int b1){ // r1() is for generating random numbers with the function rand() & srand() which will decide random events

   time_t t;
   
   // Intializes random number generator
   
   srand((unsigned) time(&t));
   
   // Give the random number to the variable 'x'
   
   int x = rand() % b1;

   return x;

}

void cmdd(){

char *input = malloc(999);

fgets(input, 999, stdin);

if(strcmp(input, "clear\n") == 0){
   free(input);
main();
}
else if(strcmp(input, "search\n") == 0 || strcmp(input, "search on browser\n") == 0 || strcmp(input, "search-on-browser\n") == 0 || strcmp(input, "searchfirefox\n") == 0 || strcmp(input, "search something\n") == 0){
free(input);
search();
main();
}
else if(strcmp(input, "eba\n") == 0 || strcmp(input, "online lessons\n") == 0){
free(input);
eba();
}
else if(strcmp(input, "resolution\n") == 0 || strcmp(input, "res\n") == 0 || strcmp(input, "screen\n") == 0){
free(input);
resolution();
getchar();

}
else if(strcmp(input, "position\n") == 0 || strcmp(input, "pos\n") == 0 || strcmp(input, "cursorpos\n") == 0){
free(input);
position();
}
else if(strcmp(input, "whoami\n") == 0){
system("clear");
free(input);
printf("\nYou're a human from planet earth");
fflush(stdout);
getchar();
main();
}
else if(strcmp(input, "whoareyou\n") == 0){
system("clear");
free(input);
printf("\nI am your computer who is programmed to say this");
fflush(stdout);
getchar();
main();
}
else if(strcmp(input, "myos\n") == 0 || strcmp(input, "os\n") == 0 || strcmp(input, "OS\n") == 0){
system("clear");
free(input);
printf("\n");
system("lsb_release -a");
getchar();
main(1);
}
else if(strcmp(input, "ls\n") == 0){
printf("\n");
free(input);
system("clear");
printf("\n");
system("ls");
cmdline(1);

}
else if(strcmp(input, "changeMAC\n") == 0 || strcmp(input, "changemac\n") == 0 || strcmp(input, "mac-changer\n") == 0 || strcmp(input, "macchanger\n") == 0 || strcmp(input, "macaddress\n") == 0 || strcmp(input, "macaddr\n") == 0 || strcmp(input, "mac\n") == 0){
free(input);
system("clear");
mac();

}
else if(strcmp(input, "IP\n") == 0 || strcmp(input, "showIP\n") == 0 || strcmp(input, "ip\n") == 0 || strcmp(input, "Ip\n") == 0){
free(input);
system("clear");
ip();
}
else if(strcmp(input, "Networking\n") == 0 || strcmp(input, "networking\n") == 0){
free(input);
networm();
main();

}
else if(strcmp(input, "mario\n") == 0 || strcmp(input, "mari0\n") == 0 || strcmp(input, "play-mario\n") == 0 || strcmp(input, "Mario\n") == 0){
free(input);
gamechoice("mario");
main();

}
else if(strcmp(input, "opensurge\n") == 0 || strcmp(input, "open-surge\n") == 0 || strcmp(input, "Opensurge\n") == 0 || strcmp(input, "play-opensurge\n") == 0){
free(input);
gamechoice("opensurge");
main();

}
else if(strcmp(input, "dolphin-emu\n") == 0 || strcmp(input, "dolphinemu\n") == 0 || strcmp(input, "dolphin\n") == 0 || strcmp(input, "wii\n") == 0){
free(input);
gamechoice("dolphin");
main();

}
else if(strcmp(input, "chess\n") == 0 || strcmp(input, "Chess\n") == 0 || strcmp(input, "play-chess\n") == 0 || strcmp(input, "lichess\n") == 0){
free(input);
system("clear");
int asd;
printf("\nOnline[1] or Offline[2] ");
q10:
scanf("%d",&asd);
if(asd == 2){
gamechoice("chess");
main();
}
else if(asd == 1){
system("firefox lichess.com");
main();
}
else{
printf("\n\nInvalid answer. Please try again: ");
goto q10;
}


}
else if(strcmp(input, "dosbox\n") == 0 || strcmp(input, "dos-box\n") == 0 || strcmp(input, "DOSBOX\n") == 0 || strcmp(input, "DOS-BOX\n") == 0){

gamechoice("dosbox");
main();

}
else if(strcmp(input, "wolfendoom\n") == 0 || strcmp(input, "BOA\n") == 0 || strcmp(input, "play-wolfendoom\n") == 0 || strcmp(input, "boa\n") == 0){

gamechoice("boa");
main();

}
else if(strcmp(input, "music\n") == 0 || strcmp(input, "Music\n") == 0 || strcmp(input, "MUSIC\n") == 0){

music();
main();

}
else if(strcmp(input, "spotify\n") == 0 || strcmp(input, "Spotify\n") == 0 || strcmp(input, "SPOTIFY\n") == 0){

spotify();
main();

}
else if(strcmp(input, "mp3-downloader\n") == 0 || strcmp(input, "youtube(mp3)downloader\n") == 0 || strcmp(input, "yt-downloader\n") == 0){

mp3();
main();

}
else if(strcmp(input, "search-music\n") == 0 || strcmp(input, "search-youtube\n") == 0 || strcmp(input, "searchonyoutube\n") == 0){

srchyoutube();
main();

}
else{
invalidcmd(input);
}


}

void search(){
system("clear");

char search[200] = {0};
char a;
char lsearch[400] = {0};
char esearch[2000] = {0};

printf("\n*Suggestions for your Search*\n\n\n\n");
printf("> ");
system ("/bin/stty raw");
int i = 0;
while(i > -1){
system ("/bin/stty raw");
a = getchar();
if(a == ' '){
system("clear");
system("/bin/stty cooked");
printf("*Suggestions for your Search*\n\n\n");
   search[i] = '!';
   snprintf(lsearch, 400, "cd python-bash-things && python3 rec.py %s",search);
   
   system(lsearch);
   search[i] = ' ';
   printf("\n\n\n> %s",search);
   i++;
   continue;
}
else if(a == 13){

snprintf(esearch, 2000, "firefox --search '%s'",search);

break;
}
else if(a == 3){
system("/bin/stty cooked");
return;

}
search[i] = a;
i++;
}
system("clear");
system ("/bin/stty cooked");
system(esearch);

main();

}


void eba(){

system("cd python-bash-things && python3 eba.py");
main();
}

void position(){

   system("clear");
   printf("Your cursor position:\n\n");
system("cd python-bash-things && python3 position.py");
getchar();
main();

}

void ip(){

char *pip = readFile("curl icanhazip.com");


system("clear");
printf("\n");
printf("Your public IP: %s",pip);

getchar();
getchar();

main();
}

void games(){

system("clear");
system("cd info && nano gamelist");
system("clear");
main();

}




void networm(){
system("clear");
printf("\nWhat are we going to do boss?");
printf("\n\nChange/Display Mac Addresses    (1)");
printf("\nDisplay Public IP Address       (2)");
printf("\nDisplay private IP              (3)");
printf("\nTest Internet Speed             (4)");
printf("\nDiscover Your Network           (5)");
printf("\nLearn Networking                (6)\n\n> ");
int x;
q:
scanf("%d",&x);
switch(x){
case 1:
system("clear");
mac();
break;
case 2:
system("clear");
ip();
break;
case 3:
system("clear");
printf("\n");
system("hostname -I | awk '{print $1}'");
getchar();
getchar();
break;
case 4:
system("clear");
intspeed();
break;
case 5:
system("clear");
netdisc();
break;
case 6:
system("clear");
getchar();
system("firefox https://www.udemy.com/course/complete-networking-fundamentals-course-ccna-start/");
system("firefox https://www.coursera.org/browse/information-technology/networking");

system("cd python-bash-things && python3 tb.py front");
break;
default:
printf("\n\nInvalid answer. Please try again: ");
goto q;
}


}



void resolution(){
system("clear");
   printf("Your resolution:\n\n");
system("cd python-bash-things && python3 resolution.py");
getchar();
system("clear");

main();
}

char *readFile(char cmd[200]) {

   char cmd1[99999];
   system("touch cmd");  
   snprintf(cmd1, 100199, "%s >> cmd", cmd);
   system(cmd1); 
    
    FILE *f = fopen("cmd", "rt");
    assert(f);
    fseek(f, 0, SEEK_END);
    long length = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *buffer = (char *) malloc(length + 1);
    buffer[length] = '\0';
    fread(buffer, 1, length, f);
    fclose(f);
    system("rm cmd");
    return buffer;
}
void mac(){

   system("clear");
   getchar();
   system("cd python-bash-things && sudo ./macchanger.sh");
   main();

}

void netdisc(){
   system("clear");
   system("sudo netdiscover");
   getchar();
   main();
}

void intspeed(){
system("clear");
getchar();
system("fast");
getchar();
main();
}

char *invalidcmd(char *icmd){

system("clear");
char *icmdoutpt;

icmdoutpt = readFile(icmd);

printf("\n%s",icmdoutpt);
cmdline(1);

}

void gamechoice(char *choice){

if(strcmp(choice, "mario") == 0)
system("cd python-bash-things && python3 tb.py mario");
else if(strcmp(choice, "opensurge") == 0)
system("cd python-bash-things && python3 tb.py opensurge");
else if(strcmp(choice, "dosbox") == 0)
system("cd python-bash-things && python3 tb.py dosbox");
else if(strcmp(choice, "dolphin") == 0)
system("cd python-bash-things && python3 tb.py dolphin");
else if(strcmp(choice, "boa") == 0)
system("cd python-bash-things && python3 tb.py boa");
else if(strcmp(choice, "chess") == 0)
system("cd python-bash-things && python3 tb.py chess");

}

void music(){

int choice;
system("clear");
printf("\nMusic options:");
printf("\n\nShow downloaded musics (1)");
printf("\nSpotify                (2)");
printf("\nSearch on youtube      (3)");
printf("\nYoutube(mp3)Downloader (4)");
printf("\n\n\n> ");
q90:
scanf("%d",&choice); 

if(choice == 1){
char *buffer = malloc(500);
char *buffer1 = malloc(1000);

getchar();
system("clear");
buffer = readFile("pwd");
snprintf(buffer1, 1000, "nautilus %s",buffer);
free(buffer);

system(buffer1);
free(buffer1);
system("clear");
printf("\n");
system("cd music && ls");
cmdline(1);

}
else if(choice == 2){
spotify();
cmdline(0);
}
else if(choice == 3){
srchyoutube();
cmdline(0);
}
else if(choice == 4){
mp3();
cmdline(0);
}
else{
printf("\n\nInvalid answer. Please try again ");
goto q90;
}



}

void spotify(){
   getchar();
   system("cd python-bash-things && python3 tb.py spotify");
}

void srchyoutube(){

char *srch = malloc(100);
system("clear");
printf("\n*Search*");
printf("\n\n\n> ");
getchar();
fgets(srch, 100, stdin);

system("clear");
char *search = malloc(200);

snprintf(search, 200, "firefox 'https://www.youtube.com/results?search_query=%s'",srch);
free(srch);
system(search);
free(search);

}

void mp3(){

system("clear");
char *url = malloc(150);
char *url2 = malloc(300);
getchar();
printf("\nYoutube url to download");
printf("\n\n\n> ");

fgets(url, 150, stdin);

snprintf(url2, 300, "cd music && python3 download.py %s",url);
free(url);
system("clear");
system(url2);
free(url2);

main();

}
