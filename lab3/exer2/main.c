#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int a,b,c;
printf("Найти сумму S и произведение P:\n");
printf("1) четных чисел от 1 до z\n");
printf("2) нечетных чисел от 1 до z\n");
printf("3) чисел, кратных 3, от 1 до z\n");
printf("Выберите операцию\n");
int n;
scanf("%d",&n);
switch (n)
{
	case 1:
		printf("Введите число z\n");
break;
	case 2:
			printf("Введите число z\n");
break;
	case 3: 
		printf("Введите число z\n");
break;
default: printf("Heвернoe значение.");
}
getchar();
//разработать алгоритм вычисления а)чётных чисел . б) нечётных чисел . в) чисел ,кратных 3 и вписать их в кейсы 

/*

for(a=1;a<=n;a++){

printf("%d\n",a);
}*/
	return 0;
}
