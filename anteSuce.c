// le um numero e retorna seu antecessor e sucessor 
#include<stdio.h>

int main(){
	
	int x;
	int antes;
	int depois;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	antes= x - 1;
	depois= x + 1;
	
	printf("numero: %d", x);
	printf("\nantecessor: %d", antes);
	printf("\nsucessor: %d", depois);
	
	return 0;
}
