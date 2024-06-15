/*VALOR ATUAL DO SALÁRIO COM PERCENTUAL DE AUMENTO CALCULADO
Calcular o salário atual somado com o percentual de aumento
Fatec Antônio Russo      22/04/23
Gustavo da Cunha Oliveira*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float salario, percentual, valor_aumento, novo_salario;

	printf("--------------------------------------------------");	
	printf("\nCALCULO DE SALÁRIO ATUAL COM PERCENTUAL DE AUMENTO\n"); //Refere-se ao título do programa
	printf("--------------------------------------------------\n\n");

	printf("Qual o valor do seu salário?\n"); //Definição da variável salario
	scanf("%f", &salario);

	printf("Qual o percentual de aumento do seu salário?\n"); //Definição da variável percentual
	scanf("%f", &percentual);

	valor_aumento= percentual/100 * salario;  //Calculo do percentual em relação ao salário
	printf("\nO valor de aumento do seu salário será de: \nR$%.2f\n", valor_aumento);
	
	novo_salario=salario+valor_aumento;  //Calculo do novo salário 
	printf("\nE seu novo salário será de: \nR$%.2f", novo_salario);



	return 0;
}
