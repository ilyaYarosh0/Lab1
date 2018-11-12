#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
 
int main(){

setlocale(LC_ALL,"Russian");
FILE *F1;
FILE *F2;
int k=0;
char str[255];
    
    printf("¬ведите K = ");
    scanf("%d",&k);
    printf("\n");
 
    F1=fopen("input.txt","w");
    int i;
    for (i=0;i<10;i++)
    {
        fflush(stdin);
        printf("¬ведите %d строку \n",i+1);
        gets(str);
        fputs(str,F1);
        fputs("\n",F1);
    }
    fclose(F1);
    F1=fopen("input.txt","r");
    F2=fopen("output.txt","w");
    while (fgets(str,255,F1)!=NULL)
    {
        if (strlen(str)-1>k) 
        {
            fputs(str,F2);
 
        }
    }
    fclose(F1);
    fclose(F2);
 
}
