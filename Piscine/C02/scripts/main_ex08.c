#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex08/ft_strlowcase.c"
#include "string.h"

char *ft_strlowcase(char *str);

int main(void)
{

	char mensagem[]  = "hOJE EH DIA 23/07/2022.A@`-=1345A18115AZ"; 
	char resultado[] = "hoje eh dia 23/07/2022.a@`-=1345a18115az";

	printf("mensagem antes do ft_strupcase:[%s]\n", mensagem);
	printf("mensagem apos o   ft_strupcase:[%s]\n", ft_strlowcase(mensagem));

	if(strcmp(ft_strlowcase(mensagem), resultado) == 0)
		printf("Result >>>>> OK\n");
	else
		printf("Result >>>>> ERROR. Esperado:[%s], Sua string[%s]\n", resultado, mensagem);
}
