#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Russian");
char Strana[13];
printf("������ ������\n");
scanf("%c",&Strana);
switch (Strana[0])
{
case 'B':printf("������.");break;
case 'C':printf("����.");break;
case 'U':printf("�������� �������.");break;
case 'R':printf("�������.");break;
default:printf("�� �����");
	}
	}

