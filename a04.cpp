#include <stdio.h>
#include <locale.h>
/*4. Elabore um programa para verificação de situação eleitoral, 
onde será informada somente a idade do eleitor, 
considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!

- Não utilizar os operadores lógicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- Não utilizar switch/case
- Não utilizar a estrutura "else if" */
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	
	printf("defina sua idade: ");
	scanf("%d", &idade);
	
	if(idade<=0)
	{
		printf("não nasceu\n");
	}
	else if(idade<=15)
	{
		printf("não vota\n");
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
		printf("somente ganha prêmio e não vota!!!\n");
	}
	else f(idade=65)
	{
		printf("opcional\n");
	}
	else if(idade=88)
	{
		printf("somente ganha prêmio e não vota!!!\n");
	}
	
	return 0; 
}
