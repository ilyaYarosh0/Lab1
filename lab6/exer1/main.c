#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Russian"); 
int *ptr, i, n;

do{

printf("������� ���-�� ��������� �������(<30)\n");

scanf("%d", &n);

}while(n>=30);

if(!(ptr=(int*)malloc(n*sizeof(int)))){

puts("Not enough memory!");

getch();

return;

}

for (i=0;i<n;i++){

printf("������� ������� [%d]\n", i+1);

scanf("%d",ptr+i);

}

printf("\n������: \n", i+1);

for (i=0;i<n;i++){

printf("%d ", *(ptr+i));

}

int p = 1;

for(i=0; i<n; i++){

if(*(ptr+i)<0){

p *= *(ptr+i);

}

}

printf("\n ������������ %d", p);

}

