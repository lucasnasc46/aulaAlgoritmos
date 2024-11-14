//le numero real e mostre seu dobro e sua terçca parte
#include<stdio.h>

int main(){
	
	float x;
	float dobro;
	float terca;
	
	printf("Digite um numero: ");
	scanf("%f", &x);
	
	dobro = x * 2;
	terca =  x/3;
	
	printf("numero: %.2f", x);
	printf("\ndobro: %.2f", dobro);
	printf("\nterca parte: %.2f", terca);
}
