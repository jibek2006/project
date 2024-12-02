#include <stdio.h>
#include <string.h>

struct Register{
int parol[4];
char name[40];
char surname[40];
char username[40];

};

struct login{

char username[40];
int parol[8];
};



int main(){

int option=1;
struct Register newuser;
struct login olduser;

while(option){
    printf("1.Register\n2. Login\n0. Exit\nEnter your option:   ");
    scanf("%d", &option);

    if(option=1){
printf("ismingizni kiriting:  ");
scanf("%s", newuser.name);

printf("familiyangizni kiriting:  ");
scanf("%s", newuser.surname);

printf("username  kiriting:  ");
scanf("%s", newuser.username);

printf("parolni  kiriting:  ");
scanf("%d",&newuser.parol);

FILE *file =fopen("uusers.txt", "a");

fprintf(file,"%s|%s|%s|%d|%d\n", newuser.name, newuser.surname, newuser.username, newuser.parol);

printf("login qiling");
fclose(file);


    }
   else if(option==2){
   }
    scanf("%s", olduser){
    olduser==uusers.txt
   }
}

struct login olduser;


printf("usernameni qaita kiriting: ");
scanf("%s",olduser.username );

printf("parolni  qaita kiriting:  ");
scanf("%d", olduser.parol);

    fgets()

FILE=fopen("users.txt","r");

int loginsuccess=0;
int savedusername;
int savedparol;

while(fscanf(file"%s %s %s %d" ,newuser.name, newuser.surname, savedusername, savedparol) !=EOF){
    if(strcmp(savedusername, olduser.username)==0  &&  savedparol==olduser.parol){
        loginsuccess=1;
        break;
    }
}





    return 0;
}