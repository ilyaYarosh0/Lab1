#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]){ 
setlocale(LC_ALL,"Russian"); 
int matrix[3][3];

int i; int j;

for(i=0; i<3; i++){

for(j=0; j<3; j++){

printf("[%d-%d]: ",i+1,j+1);

scanf("%d", &matrix[i][j]);

}

}

int n; int s;

for(i=0; i<3; i++){

s = 1;

for(j=0; j<3; j++){

if(matrix[i][j]<0){

s=0;

}

}

if(s==1){

n = i;

break;

}

}

int sum = summa(matrix[n], 3);

for(i=0; i<3; i++){

for(j=0; j<3; j++){

matrix[i][j] -= sum;

}

}

printf("Первая положительная строка номер %d . Сумма её элементов равна %d .\n Если отнять от каждого элемента матрицы сумму первой положительной строки получится: \n", n+1, sum);
for(i=0; i<3; i++){

for(j=0; j<3; j++){

printf("%d ", matrix[i][j]);

}

printf("\n");

}

}

int summa(int array[], int len){

int i;

int sum;

for(i=0; i<len; i++){

sum += array[i];

}

return sum;

}
