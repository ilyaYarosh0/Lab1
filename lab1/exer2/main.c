#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
		float x,y,z,s,f,a,r;
	printf("������� ����� x \n");
	scanf("%f",&x);
	
	printf("������� ����� y \n");
	scanf("%f",&y);
	
	printf("������� ����� z \n");
	scanf("%f",&z); 
	s=exp(fabs(x-y))*(pow(fabs(x-y),x+y)); // �� ����� �����
	f= s/(atan(x)+atan(z));
	a=pow(pow(x,6)+(pow(log(y),2)),1/3.); //pow(pow(x),6)x,1/3.); // � ��������� ���������� , �� pow(x,1/3.)- �������� � ������� 1/3 (���������)
	r=f+a;
	printf ("%0.5f",r);
	return 0;
}
