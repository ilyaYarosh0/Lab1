#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Russian");
char Strana[13];
printf("Ведите страну\n");
scanf("%c",&Strana);
switch (Strana[0])
{
case 'B':printf("Европа.");break;
case 'C':printf("Азия.");break;
case 'U':printf("Северная Америка.");break;
case 'R':printf("Евразия.");break;
default:printf("Не верно");
	}
	}

