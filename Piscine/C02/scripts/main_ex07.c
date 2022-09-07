#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex07/ft_strupcase.c"
#include "string.h"

char *ft_strupcase(char *str);

int main(void)
{
	char mensagem[] =  "Hoje eh dia 23/07/2022.A@`-=1345a18115az";
	char resultado[] = "HOJE EH DIA 23/07/2022.A@`-=1345A18115AZ"; 

	printf("mensagem antes do ft_strupcase:[%s]\n", mensagem);
	printf("mensagem apos o   ft_strupcase:[%s]\n", ft_strupcase(mensagem));

	if(strcmp(ft_strupcase(mensagem), resultado) == 0)
		printf("Result >>>>> OK\n");
	else
		printf("Result >>>>> ERROR. Esperado:[%s], Sua string[%s]\n", resultado, mensagem);

}
