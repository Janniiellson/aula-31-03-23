#include <stdio.h>
#include <locale.h>
/*4. Elabore um programa para verifica��o de situa��o eleitoral, 
onde ser� informada somente a idade do eleitor, 
considere as situa��es abaixo:

Menor que 0 n�o nasceu
0-15 n�o vota
16-17 opcional
18-65 obrigat�rio
exatamente 41- somente ganha pr�mio e n�o vota!!!
> 65 opcional
exatamente 88 - somente ganha pr�mio e n�o vota!!!

- N�o utilizar os operadores l�gicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- N�o utilizar switch/case
- N�o utilizar a estrutura "else if" */
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	
	printf("defina sua idade: ");
	scanf("%d", &idade);
	
	if(idade<=0)
	{
		printf("n�o nasceu\n");
	}
	else if(idade<=15)
	{
		printf("n�o vota\n");
	}	
	else if(idade=16, idade=17)
	{
		printf("opcional\n");
	}
	else if(idade>18, idade<65)
	{
		printf("obrigatorio \n");
	}
	else if(idade=41)
	{
		printf("somente ganha pr�mio e n�o vota!!!\n");
	}
	else f(idade=65)
	{
		printf("opcional\n");
	}
	else if(idade=88)
	{
		printf("somente ganha pr�mio e n�o vota!!!\n");
	}
	
	return 0; 
}
