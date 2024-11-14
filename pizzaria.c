//pizzaria - conta dividida pela a quantidade de pessoas + descontos
#include <stdio.h>

int main(){
	
	int quant_pessoas;
	int desconto;
	float conta;
	float valor_final;
	float valor_dividido;
	
	printf("Digite a quantidade de pessoas na mesa: ");
	scanf("%d", &quant_pessoas);
	
	printf("Digite o valor da conta: ");
	scanf("%f", &conta);
	
	printf("Digite o desconto em porcentagem: ");
	scanf("%d", &desconto);
	
	valor_final = conta - (conta * desconto/100);
	valor_dividido = valor_final/quant_pessoas;
	
	printf("Valor da conta: %.2f", valor_final);
	printf("\nValor para cada pessoa: %.2f", valor_dividido);
	
	return 0;
}
