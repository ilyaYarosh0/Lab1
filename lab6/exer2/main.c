#include <stdio.h>

#include <math.h>

#include <stdlib.h>

#include <conio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Russian"); 
int t,i,j,m,n,k,d,sum;

t=0;

printf("кол-во строк  и столбцов= ");

scanf("%d",&n);

int *arr;

if(!(arr=(int*)malloc(n*n*sizeof(int)))){

puts("Not enough memory");

getch();

return 1;}

for(i=0;i<n;i++)

for(j=0;j<n;j++){

printf("arr[%d][%d]=",i+1,j+1);

scanf("%d",(arr+i*n+j)); }

for(i=0;i<n;i++){

for(j=0;j<n;j++){

printf("%5d",*(arr+i*n+j));}

printf("\n"); }

d=0; sum=0;

for(i=0;i<n;i++){k=0; sum=0;

for(j=0;j<n;j++){if(*(arr+i*n+j)<0){k++;}} if(k>0){for(d=0;d<n;d++){

sum=*(arr+i*n+d)+sum; } printf("строка %d: %d\n",i+1,sum);}}

for(t=0;t<n;t++){k=0;

for(i=0;i<n;i++){if((*(arr+t*n+i))==(*(arr+i*n+t))){k++;}}if(k==n){printf("Строка и столбец %d одинаковы\n",t+1);}}

free(arr);

}
