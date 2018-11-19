#include <stdio.h>

#include <conio.h>

#include <string.h>

#include <Windows.h>

#include <locale.h>

typedef struct dan {

char nomer[21];

char punkt[30];

char dni[10];

char pribitie[20];

char otbitie[20];

}

b;

void input (b *menu, int *n);

void output (b *menu, int n);

void del (b *menu, int *n);

void find (b *menu, int n);

void change (b *menu, int n);

void sort (b *menu, int n);

main(){

SetConsoleCP(1251);

SetConsoleOutputCP(1251);

int k,n;

b menu[100];

k=7;

n=0;

while (k!=0) {

puts("Menu:");

puts("1.add entries");

puts("2.show records");

puts("3.delete entries by train number");

puts("4.find records by train number");

puts("5.record sorting by train number");

puts("6.change train number");

puts("0.Exit\n");

scanf ("%d",&k);

switch (k){

case 1 :{input(menu,&n);} break;

case 2 :{output(menu,n);} break;

case 3 :{del(menu,&n);} break;

case 4 :{find(menu,n);} break;

case 5 :{sort(menu,n);} break;

case 6 :{change(menu,n);} break;

case 0 :{puts("Exit");} break;

default :{

puts("Enter 4islo 0-6: ");

} break;

}

}

return(0);

}

void input (b *menu, int *n){

int i,m,nn,k;

puts("Enter the number of entries: ");

scanf("%d",&m);

nn=*n; *n+=m;

for (i=nn;i<*n;i++){

if (i%20==0||nn!=0&&i==nn){

k=4;{

puts("Enter data: \n");

}

}

printf("%d:",i+1);

printf("Train number: "); scanf("%s",&menu[i].nomer);

printf("Destination: "); scanf ("%s",&menu[i].punkt);

printf("Days following: "); scanf ("%s",&menu[i].dni);

printf("Arrival time: "); scanf ("%s",&menu[i].pribitie);

printf("Parking time: "); scanf ("%s",&menu[i].otbitie);

printf("\n"); k++;

}

}

void output (b *menu, int n){

int i,i_nach,i_kon,vvod,koef; if (n>0) {

for(i=0;i<n;i++)

printf(" Nomer: %s Pynkt: %s Dni: %s pribitieitie: %s Sto9nka: %s\n",menu[i].nomer,menu[i].punkt, menu[i].dni, menu[i].pribitie,menu[i].otbitie);

}else{

puts ("No records");

}

}

void del (b *menu, int *n){

int i,j,k;

if (*n>0){

puts("Enter the number of the record to be deleted: ");

scanf("%d",&k);

for (i=k-1;i<*n;i++)

for(j=0;j<20;j++){

if (j<20){

menu[i].nomer[j]=menu[i+1].nomer[j];

}

if (j<20) menu[i].pribitie[j]=menu[i+1].pribitie[j];

if (j<20) menu[i].dni[j]=menu[i+1].dni[j];

if (j<20) menu[i].punkt[j]=menu[i+1].punkt[j];

if (j<20) menu[i].otbitie[j]=menu[i+1].otbitie[j];

}

*n=*n-1;

} else{

puts ("No records");

}

}

void find (b *menu, int n){

int i,k;

char nomer[21]; k=0;

if (n>0){

puts("Enter the train number: ");

scanf("%s",&nomer);

for (i=0;i<n;i++)

if (strcmp(menu[i].nomer,nomer)==0){

k=1;

puts(" Nomer poezda Pynkt nazna4eni9 Dni sledovani9 Vrem9 pribitieiti9 Vrem9 sto9nki ");

printf(" Nomer: %s Pynkt: %s Dni: %s pribitieitie: %s Sto9nka: %s\n",menu[i].nomer,menu[i].punkt, menu[i].dni, menu[i].pribitie,menu[i].otbitie);

}

if(k==0) puts ("Iao oaeiai iiia?a.");

}else{

puts ("No records");

}

}

void change (b *menu, int n){

int i,j,nk;

char nomer[21],chnomer[21];

nk=-1;

if (n>0){

puts("Enter the number: ");

scanf("%s",&nomer);

puts("Enter the new number:");

scanf("%s",&chnomer);

for (i=0;i<n;i++)

if (strcmp(menu[i].nomer,nomer)==0){

nk=1; for (j=0;j<22;j++)

if (strlen(chnomer)+1>j)

menu[i].nomer[j]=chnomer[j];

}else{

menu[i].nomer[strlen(chnomer)+1]='\0';}

}else{

puts ("No records");

}

if(nk=-1)puts ("Number not found");

}

void sort (b *menu, int n){

int i,j,k;

struct dan p;

if (n>0){

for (j=0;j<n-1;j++)

for(k=n-1;k>j;k--)

if (strcmp(menu[k].nomer,menu[k-1].nomer)<0){

p=menu[k];

menu[k]=menu[k-1];

menu[k-1]=p;

}

} else {

puts ("No records");

}

}
