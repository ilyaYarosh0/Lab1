#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int matrix[3][3];

int i; int j;

for(i=0; i<3; i++){

for(j=0; j<3; j++){

printf("[%d-%d]: ",i+1,j+1);

scanf("%d", &matrix[i][j]);

}

}

int n = 0; int z;

for(i=0; i<3; i++){

z = 0;

for(j=0; j<3; j++){

if(matrix[j][i]>0){

z = 1;

}

}

if(z==1){

n = i-2;

}

}

for(i=0; i<3; i++){

matrix[i][n] *= -1;

}

for(i=0; i<3; i++){

for(j=0; j<3; j++){

printf("%d ", matrix[i][j]);

}

printf("\n");

}

}
