/*Programa que faz soma, a m�dia, mostra os n�meros digitados em 
ordem e de traz para a frente, e os n�meros pares digitados.
Gustavo da Cunha Oliveira, Fatec Ant�nio Russo - 11/06/2023*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");                                      //possibilita o uso de caracteres especiais
	int numero[10], i;											//indica as vari�veis
	
	printf("Quest�o 6 da prova\n\n");
		
	for(i=0; i<10; i++){										//faz a repeti��o da pergunta dez vezes
	printf("Digite um n�mero: ");
	scanf("%d", &numero[i]);
	}
	
	for(i=0; i<10; i++){										
		
		if(numero[i] == 0){										//define que se o n�mero for igual a 0, a repeti��o ir� parar
		printf("\n\nFim da Lista\n");							//e n�o ser� exibido os n�meros adiante	
		break;										
	}
		else{
		printf("\n%d", numero[i]);								// define a repeti��o caso o n�mero n�o for 0
		}
	
	
	}

return 0;
}

