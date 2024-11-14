//calculo de tinta por metro quadrado de parede
#include<stdio.h>

int main(){
	
	float h;
	float l;
	float area;
	float tinta;
	
	printf("Digite a altura da parede: ");
	scanf("%f", &h);
	
	printf("Digite a largura da parede: ");
	scanf("%f", &l);
	
	area = l * h;
	tinta = area/2;
	
	printf("voce precica de %.2f de tinta para pintar sua parede", tinta);
	
	return 0; 
}
