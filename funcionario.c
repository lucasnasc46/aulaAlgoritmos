// le salario e nome de funcionario e mostrar esses valores em um print
#include<stdio.h>

int main(){
	
	char nome[10];
	float salario;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome);
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	printf("o funcionario %s recebe %.2f", nome, salario);uij/.;
	
	return 0;
}
