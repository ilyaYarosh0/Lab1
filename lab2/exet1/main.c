#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int a, b, c;
	printf("������� a \n");
		scanf("%d", &a);
	printf("������� b \n");
		scanf("%d", &b);
	printf("������� c \n");
		scanf("%d", &c);
		if(a==b) printf("����������� �������������� a=b");		
		else if(a==c) printf("����������� �������������� a=c");
		else if(b==c) printf("����������� �������������� b=c");
		else printf("���������� �� �������� ��������������");
	return 0;
}
