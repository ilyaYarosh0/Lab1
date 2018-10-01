#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int x,a;
	printf("¬ведите число x \n");
	scanf("%d",&x);
	a = (x*x)*128;
	printf ("%d",a);
	return 0;
}
