/*Programa que pede o preço do produto não podendo ser menor que 0,01
e peça tambem o tipo do produto que não possa ser diferente dos propostos
com essas duas condições seguidas mostrara a mensagem "Vamos continuar"
Gustavo da Cunha Oliveira, Fatec Antônio Russo */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");

    float preco_unitario;
    char tipo;

    do{																	
		printf("Digite o preço unitário do produto: ");					//pede o preço do produto
    	scanf("%f", &preco_unitario);
    	if(preco_unitario<0.009){										//impõe a condição de não ser menor que 0.01
    		printf("Valor inválido\n");									//mostra a mensagem caso não siga a condição
		}
	}while(preco_unitario<0.009);										//faz a repetição caso não siga a repetição
	
    do{
		printf("Digite o tipo do produto:\n\na - essencial\n");			//pergunta o tipo de produto (a/b/c)
    	printf("b - importante\nc - supérfluo ==> ");
    	tipo = getche();
	tipo = tolower (tipo);
		if((tipo != 'a') && (tipo != 'b') && (tipo != 'c')){			//impõe a condição de não ser menor que 0.01		
		printf("\nValor inválido\n");									//mostra a mensagem caso não siga a condição
		}
	}while ((tipo != 'a') && (tipo != 'b') && (tipo != 'c'));			//faz a repetição caso não siga a repetição
	
    printf("\n\nVamos continuar.");
    

	return 0;
}

