/*Programa que pede o pre�o do produto n�o podendo ser menor que 0,01
e pe�a tambem o tipo do produto que n�o possa ser diferente dos propostos
com essas duas condi��es seguidas mostrara a mensagem "Vamos continuar"
Gustavo da Cunha Oliveira, Fatec Ant�nio Russo */

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");

    float preco_unitario;
    char tipo;

    do{																	
		printf("Digite o pre�o unit�rio do produto: ");					//pede o pre�o do produto
    	scanf("%f", &preco_unitario);
    	if(preco_unitario<0.009){										//imp�e a condi��o de n�o ser menor que 0.01
    		printf("Valor inv�lido\n");									//mostra a mensagem caso n�o siga a condi��o
		}
	}while(preco_unitario<0.009);										//faz a repeti��o caso n�o siga a repeti��o
	
    do{
		printf("Digite o tipo do produto:\n\na - essencial\n");			//pergunta o tipo de produto (a/b/c)
    	printf("b - importante\nc - sup�rfluo ==> ");
    	tipo = getche();
	tipo = tolower (tipo);
		if((tipo != 'a') && (tipo != 'b') && (tipo != 'c')){			//imp�e a condi��o de n�o ser menor que 0.01		
		printf("\nValor inv�lido\n");									//mostra a mensagem caso n�o siga a condi��o
		}
	}while ((tipo != 'a') && (tipo != 'b') && (tipo != 'c'));			//faz a repeti��o caso n�o siga a repeti��o
	
    printf("\n\nVamos continuar.");
    

	return 0;
}

