#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex09/ft_strcapitalize.c"

char *ft_strcapitalize(char *str);

int main(void)
{
	char mensagem1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char mensagem2[] = "oi, tUdo bEm? 42PalAVras QUarenta-E-DUas; CINnquenta+e+uM";
	char mensagem3[] = "a";	

	printf("\n\n*** ATENÇÃO, ESSE TESTE NAO COMPARA AS STRING!! LOGO, VERIQUE A OLHO NU O ANTES E DEPOIS!! ***\n\n");
	printf("---\n");
	printf("mensagem antes                                 = %s\n", mensagem1);
	printf("mensagem depois da sua funcao ft_strcapitalize = %s\n", ft_strcapitalize(mensagem1));
	printf("---\n");
	printf("mensagem a antes                               = %s\n", mensagem2);
	printf("mensagem depois da sua funcao ft_strcapitalize = %s\n", ft_strcapitalize(mensagem2));
	printf("---\n");
	printf("mensagem a antes                               = %s\n", mensagem3);	
	printf("mensagem depois da sua funcao ft_strcapitalize = %s\n", ft_strcapitalize(mensagem3));
	return 0;
}
