#include <stdio.h>
/*2. Fa�a um programa que receba a idade de uma pessoa e se idade 
menor que 30 aparece a mensagem "Voc� � muito jovem". Caso idade maior que 30 anos, 
o programa n�o far� nada.*/
  
int main()
{
	int idade;
	
	printf("qual a sua idade? ");
	scanf("%d", &idade);
	
	if (idade<30)
	{
		printf("voce � muito jovem!");
	}	
	else
	{
	
		printf("nada");
	}
	
	return 0;
}
