#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int a,b,c;
printf("����� ����� S � ������������ P:\n");
printf("1) ������ ����� �� 1 �� z\n");
printf("2) �������� ����� �� 1 �� z\n");
printf("3) �����, ������� 3, �� 1 �� z\n");
printf("�������� ��������\n");
int n;
scanf("%d",&n);
switch (n)
{
	case 1:
		printf("������� ����� z\n");
break;
	case 2:
			printf("������� ����� z\n");
break;
	case 3: 
		printf("������� ����� z\n");
break;
default: printf("He����oe ��������.");
}
getchar();
//����������� �������� ���������� �)������ ����� . �) �������� ����� . �) ����� ,������� 3 � ������� �� � ����� 

/*

for(a=1;a<=n;a++){

printf("%d\n",a);
}*/
	return 0;
}
