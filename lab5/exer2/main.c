#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Russian"); 
int rm = 8;

int matrix[rm][rm];

int i; int j;

for(i=0; i<rm; i++){

for(j=0; j<rm; j++){

printf("[%d-%d]: ",i+1,j+1);

scanf("%d", &matrix[i][j]);

}

}

int k[rm];

for (i = 0; i < rm; i++)

{

k[i] = 1;

for (j = 0; j < rm; j++)

if (matrix[i][j] != matrix[j][i])

{

k[i] = 0;

break;

}

}

for(i=0; i<rm; i++){

if( k[i] == 1){

printf("Строка и столбец под номером %d совпадают \n", i+1);

}

}

int sum; int p,s;

for(i=0; i<rm; i++){

sum = 0;

p = 0;

for(j=0; j<rm; j++){

if(matrix[i][j] < 0){

p = 1;

for(s=0; s<rm; s++){

sum += matrix[i][s];

}

}

}

if(p==1){

printf("Строка %d отрицательная. Сумма её эдементов равна %d .\n", i+1, sum);

}

}

}
