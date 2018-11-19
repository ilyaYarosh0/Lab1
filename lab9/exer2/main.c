#include<stdio.h> 
#include<conio.h> 
#include<locale.h>
#include<string.h>
#include <windows.h>
char input();
char add();
char search(char *n);
struct patc
{ char fam[30]; 
  char name[20];  
  char ot[30];
  char numberKard[20];
  char adres[30];
  char nomPoles[3];
} ;
struct patc inf[30];
int records;
int i,k,k1;
char n[20];
int main(){
	SetConsoleCP (1251);
SetConsoleOutputCP(1251);
FILE *f;
        if(!(f = fopen("patc.dat", "w+b"))) {
             printf("File cannot be opened\n");
             return 0;
       }
 records=0;
do
{
add();
puts("dobavit echo? (1/0)");
scanf("%d", &i);
} 
while(i);
do {
printf("1n-Input\n2-Add\n3-Search\n4-Exit\n");
scanf("%d",&k);
switch(k){
	case 1:
		input();
		break;
	case 2:
		add();
		break;
	case 3:
		printf("Enter last name\n");
		scanf("%s",&n);
		search(n);
	case 4:
		break;
}
printf("Continue or exit ? (1/0)\n");
scanf("%d",&k1);}
while(k1);
}

char input(){
	FILE *f;
	int i;
    printf("\List:\n");
if(!(f=fopen("chel.dat","r")))
{ printf("Error open file\n"); return 0;}
for(i=0;i<records;i++)
{ puts(inf[i].fam);
  puts(inf[i].name);
  puts(inf[i].ot);
  puts(inf[i].numberKard);
  puts(inf[i].adres);
  puts(inf[i].nomPoles);
printf("\n\n");
}
fclose(f);
}

char add(){
    FILE *f;
	int i;
	if(!(f = fopen("chel.dat", "a+"))) {
             printf("Nevozmojno sozdat fail\n");
             return 0;
       }
{   printf("Patcient %d\n",records+1);
	puts("Enter last name");
	fflush(stdin);
	gets(inf[records].fam);
	fputs(inf[records].fam,f);
	fputs ("\n", f);
	puts("Enter name");
	fflush(stdin);
	gets(inf[records].name);
	fputs(inf[records].name,f);
	fputs ("\n", f);
	puts("Enter otchestvo");
	fflush(stdin);
	gets(inf[records].ot);
	fputs(inf[records].ot,f);
	fputs ("\n", f);
	puts("Enter number kard");
	fflush(stdin);
	gets(inf[records].numberKard);
	fputs(inf[records].numberKard,f);
	fputs ("\n", f);
    puts("Enter adres");
	fflush(stdin);
	gets(inf[records].adres);
	fputs(inf[records].adres,f);
	fputs ("\n", f);
	puts("Enter number polis");
	fflush(stdin);
	gets(inf[records].nomPoles);
	fputs(inf[records].nomPoles,f);
	fputs ("\n\n", f);
	records++;
}
fclose(f);
}
char search(char *n){
	FILE *f;
	if(!(f = fopen("patc.dat", "r"))) {
    printf("Unable to create file\n");
    return 0;
}

for(i=0; i<records;i++)
{
    if (!strcmp(inf[i].fam,n))
		{
        printf("\n\nLast name: %s \n",inf[i].fam);
        printf("Name: %s \n",inf[i].name);
        printf ("Otchestvo: %s \n",inf[i].ot);
        printf("Numer kard: %s \n",inf[i].numberKard);
        printf("Adres: %s \n",inf[i].adres);
        printf ("Number polis: %s \n",inf[i].nomPoles);
                }
}
fclose(f);
fflush(stdin);
return 0;
}

