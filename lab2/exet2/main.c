#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale(LC_ALL,"Russian");
	float rad, S2,deam,stor,S1,diagon;
	printf("������� ������ ����� \n");
		scanf("%f", &rad);
	printf("������� ������� ��������  \n");
		scanf("%f", &stor);
		deam=2*rad;
		S1=rad*rad*M_PI;	
		S2=stor*stor;  
		diagon = sqrt(2)*stor; //������� ������� ��������� �������� 
		if(deam<=stor) printf("���� ����������� � �������, ������� � ���� ���");	
		
		else if(diagon<=deam) printf("�������� ����������� � ����, ���� � ������� ���");
		/// �������� ����� , �������� ������ ��������� ��������� ��������� � �������� � � ��������� ���������� 
	return 0;
}
