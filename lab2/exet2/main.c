#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale(LC_ALL,"Russian");
	float rad, S2,deam,stor,S1,diagon;
	printf("¬ведите радиус круга \n");
		scanf("%f", &rad);
	printf("¬ведите сторону квадрата  \n");
		scanf("%f", &stor);
		deam=2*rad;
		S1=rad*rad*M_PI;	
		S2=stor*stor;  
		diagon = sqrt(2)*stor; //описать формулу диагонали квадрата 
		if(deam<=stor) printf(" руг поместитьс€ в квадрат,  вадрат в круг нет");	
		
		else if(diagon<=deam) printf(" вадарат поместитьс€ в  руг,  руг в квадрат нет");
		/// допилить прогу , осталось только посчитать диагональ кввадрата и сравнить еЄ с диаметром окружности 
	return 0;
}
