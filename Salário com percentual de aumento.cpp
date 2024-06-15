/*VALOR ATUAL DO SAL�RIO COM PERCENTUAL DE AUMENTO CALCULADO
Calcular o sal�rio atual somado com o percentual de aumento
Fatec Ant�nio Russo      22/04/23
Gustavo da Cunha Oliveira*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float salario, percentual, valor_aumento, novo_salario;

	printf("--------------------------------------------------");	
	printf("\nCALCULO DE SAL�RIO ATUAL COM PERCENTUAL DE AUMENTO\n"); //Refere-se ao t�tulo do programa
	printf("--------------------------------------------------\n\n");

	printf("Qual o valor do seu sal�rio?\n"); //Defini��o da vari�vel salario
	scanf("%f", &salario);

	printf("Qual o percentual de aumento do seu sal�rio?\n"); //Defini��o da vari�vel percentual
	scanf("%f", &percentual);

	valor_aumento= percentual/100 * salario;  //Calculo do percentual em rela��o ao sal�rio
	printf("\nO valor de aumento do seu sal�rio ser� de: \nR$%.2f\n", valor_aumento);
	
	novo_salario=salario+valor_aumento;  //Calculo do novo sal�rio 
	printf("\nE seu novo sal�rio ser� de: \nR$%.2f", novo_salario);



	return 0;
}
