/*Valor de desconto de acordo com a mensalidade, 
Tipo de matrícula 1 = 3% de desconto
2 = 4% de desconto
3 = 5% de desconto
Outros = sem desconto
Gustavo da Cunha Oliveira, Fatec Antônio Russo*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "");
	
	float mensalidade, desconto, mensalidade_descontada;
	int tipo;
	
	printf("Qual o valor da mensalidade?\n");
	scanf ("%f", &mensalidade);
	
	printf("Qual o tipo da sua matrícula?\n");
	scanf ("%d", &tipo);
	
	switch (tipo) {
		
		case 1:
			desconto = mensalidade * 0.03;
			mensalidade_descontada = mensalidade - desconto;
			
			printf ("%f", mensalidade_descontada);
			
		break;
			
		case 2:
            desconto = mensalidade * 0.04;
            mensalidade_descontada = mensalidade - desconto;
            
			printf ("%f", mensalidade_descontada);
		break;
		
		case 3:
		     desconto = mensalidade * 0.05;
		     mensalidade_descontada = mensalidade - desconto;
		     
		     printf("%f", mensalidade_descontada);
         break;
		
		default:
			printf("Nenhum desconto aplicado");
					
	}	
return 0;	
}
