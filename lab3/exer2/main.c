#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int a,b,c,z,v,sum=0,su=1;
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
		scanf("%d",&z);
	for(v=2;v<=z;v+=2){
	sum+=v;
	su=su*v;

}
	printf("����� S= %d\n",sum);
	printf("������������ P= %d\n",su);
		
break;
	case 2:
			printf("������� ����� z\n");
			scanf("%d",&z);
				for(v=1;v<=z;v++){
	sum+=v;
	su=su*v;

}
	printf("����� S= %d\n",sum);
	printf("������������ P= %d\n",su);
break;
	case 3: 
		printf("������� ����� z\n");
		scanf("%d",&z);
			for(v=3;v<=z;v+=3){
	sum+=v;
	su=su*v;

}
	printf("����� S= %d\n",sum);
	printf("������������ P= %d\n",su);
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
