#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("\t----------MENU DE NÚMEROS----------\n"
		"\nDigite 1 para o primeiro programa"
		"\nDigite 2 para o segundo programa"
		"\nDigite 3 para o terceiro programa"
		"\nDigite 4 para o quarto programa"
		"\nDigite 5 para o quinto programa"
		"\nDigite 6 para o sexto programa"
		"\nDigite 10 para o décimo programa"
		"\nDigite 0 para encerrar o programa\n\n\tRESPOSTA: ");
	scanf("%d", &numero);
	
	fflush(stdin);
	
	switch (numero){
		
		case 0:
			printf("\t----------O programa foi encerrado----------");//se o usuario digitar zero encerra o programa
			return 0;
			
		case 1:
			//faça um programa que ler um numero e diga se ele é par ou não
			int x;
			
			printf("\n\t-----PROGRAMA Nº1-----\nDigite um numero: ");//recebe a variavel do usuario
			scanf("%d", &x);//cpta e armazena o valor digitado
			
			if(x % 2 == 0){//faz o calculo 
			printf("Esse numero é par!");//informa ao usuario que o numero digitado é par
			}
			else {
			printf("Esse numero não é par!");//informa ao usuario se o numero digitado não for par
			}
			break;
			
		case 2:
			
			float n1, mult;//variaveis
			int n2;
				
			printf("\n\t-----PROGRAMA Nº2-----\nDigite um número flutuante e um número inteiro:\n");//pede os números ao usuario
			scanf("%f", &n1);//colhe os números
			scanf("%d", &n2);
				
			mult = pow(n1, n2);//faz a potenciação
				
			if(n1 >= 1  && n2 >=1){//se os numeros forem maior que 1 eles executam o programa	
			printf("O resultado da potência de %.1f elevado a %d é: %e",n1, n2, mult);
			}
			else{//caso os numeros forem menor que zero exibe essa menssagem
			printf("O valor digitado é incorreto!");
			}
		 	
		break;
				
		case 3:
			
			float nume, potencia;
			int num;
			
			printf("\n\t-----PROGRAMA Nº3-----\nDigite um número flutuante A e um número inteiro B:\n");//pede os dados ao usuario
			scanf("%f %d", &nume, &num);//colhe os dados do usuario
			
			potencia = pow(nume,1.0/num);//faz o calculo
			
			printf("O resultado da base %.1f elevado a base %d é %e:", nume, num, potencia);//mostra ao usuario o resultado
					
		break;
					
		case 4:
			
			int z;//variaveis 
			
			printf("\n\t-----PROGRAMA Nº4-----\nInforme um ano: ");//pede as informaçoes ao usuario
			scanf("%d", &z);//colhe os dados
			
			if(z % 4 == 0){//faz o calculo
				printf("Esse é um ano bissexto.");//mostra o resultado ao usuario
			}
			else{
				printf("Esse não é um ano bissexto.");
			}
		break;
					
					
		case 5:

			float nt1, nt2, nt3, media;//variaveis
		
		   		printf("\n\t-----PROGRAMA Nº5-----\nInforme sua primeira nota: ");//pede os dados do usuario
		        scanf("%f",&nt1);//colhe os dados do usuario
		        
		        printf("Informe sua segunda nota: ");//pede mais um dado
		        scanf("%f",&nt2);//colhe mais um dado
		        
		        printf("Informe sua terceira nota: ");//pede outro dado
		        scanf("%f",&nt3);//colhe novamente
		        
		        media = (nt1 + nt2 + (nt3 * 2));//faz o calculo
		        
		     	printf("Você obteu %.2f pontos.\n", media);//informa ao usuario o resultado
		     
			    if(media >= 60,0){
		            printf("Você foi aprovado\n");
				}
				else {
					printf("Você foi reprovado\n");
				}
		break;
		
		case 6:
			
			float nota1, nota2, media0;//variaveis
			
				printf("\n\t-----PROGRAMA Nº6-----\nDigite duas notas em um ponto flutuante:\n");//pede os dados ao usuario
				scanf("%f %f", &nota1, &nota2);//colhe os dados do usuario
				
				media0 = (nota1+nota2)/2;//faz o calculo
				
				if(nota1>=0.0 && nota1<=10.0 && nota2>=0.0 && nota2<=10.0){
					printf("A média das suas notas foi: %.1f", media0);//informa o resultado
				}
				else{
					printf("Esse não é um valor válido.");
				}
		break;
		
		case 10:
			
			int naa;
			char numEmHexa[10];
			char nome[128] = "\0";
			//variaveis
			
				printf("\n\t-----PROGRAMA 10-----\nDigite seu nome: ");//pede os dados do usuario
				gets(nome);//colhe o primeiro dado
				
				printf("\nDigite sua matrícula: ");//pede outro dado
				scanf("%d", &naa);//colhe novamente
				sprintf(numEmHexa, "%x", naa);
				
				printf("Seu nome é: %s", nome);
				printf("\nE sua matrícula em hexadecimal é: %s", numEmHexa);//mostra o reultado ao usuario
			
			break;
	}
}
