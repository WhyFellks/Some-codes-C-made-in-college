/*Programa que faz soma, a média, mostra os números digitados em 
ordem e de traz para a frente, e os números pares digitados.
Gustavo da Cunha Oliveira, Fatec Antônio Russo - 11/06/2023*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");                                      //possibilita o uso de caracteres especiais
	int numero[10], i;											//indica as variáveis
	
	printf("Questão 6 da prova\n\n");
		
	for(i=0; i<10; i++){										//faz a repetição da pergunta dez vezes
	printf("Digite um número: ");
	scanf("%d", &numero[i]);
	}
	
	for(i=0; i<10; i++){										
		
		if(numero[i] == 0){										//define que se o número for igual a 0, a repetição irá parar
		printf("\n\nFim da Lista\n");							//e não será exibido os números adiante	
		break;										
	}
		else{
		printf("\n%d", numero[i]);								// define a repetição caso o número não for 0
		}
	
	
	}

return 0;
}

