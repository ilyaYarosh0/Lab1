#include <stdio.h>
#include <string.h>
#include <locale.h>


void zamena(char stv[100], int ln1){
	int j =0; int i; char res[100];
for (i=0; i<ln1; i++){
	if (stv[i]==' '){
		if(j==0) continue;
		if (stv[i+1]==' ') continue;
		
	}
	res[j]=stv[i];
	j++;
}

i=strlen(res);

if(res[i-2]==' ')

res[i-2]='\0';
printf("\n%s",res);
getchar();
}

int main(){ 
setlocale(LC_ALL,"Russian"); 
char str1[100];
printf("¬ведите строку:");
gets(str1);
int lon1=strlen(str1);
zamena(str1,lon1);
}
