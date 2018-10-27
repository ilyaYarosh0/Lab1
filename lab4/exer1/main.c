#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Russian"); 
int main_list[10];

int otr_list[10]={0};

int other_list[10]={0};

int i;

printf("Введите 10 элементов массива: \n");

for(i=0; i<10; i+=1){

scanf("%d", &main_list[i]);

}

for(i=0;i<10; i+=1){

if(main_list[i] < 0){

otr_list[i] = main_list[i];

}else{

other_list[i] = main_list[i];

}

}

printf(" Отрицательные элементы : ");

for(i=0;i<10; i+=1){

if (otr_list[i] != 0){

printf("%d ", otr_list[i]);

}

}

printf("\n Остальные элементы:");

for(i=0;i<10; i+=1){

if (other_list[i] != 0){

printf("%d ", other_list[i]);

}

}

}

