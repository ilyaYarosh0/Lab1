#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int a, b, c;
	printf("Введите a \n");
		scanf("%d", &a);
	printf("Введите b \n");
		scanf("%d", &b);
	printf("Введите c \n");
		scanf("%d", &c);
		if(a==b) printf("Треугольник равнобедренный a=b");		
		else if(a==c) printf("Треугольник равнобедренный a=c");
		else if(b==c) printf("Треугольник равнобедренный b=c");
		else printf("Треуголник не является равнобедренным");
	return 0;
}
