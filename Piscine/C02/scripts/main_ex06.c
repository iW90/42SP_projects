#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex06/ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int main(void)
{
	char non_printable[32];
	for(int a =0; a < 32; a++)
		non_printable[a] = a;

	non_printable[31] = 0;
	non_printable[0] = 31;

	printf("Testando com o alfabeto. Se(1)Ok, Se(0) sua funcao falhou = [%d]\n", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVXWYZ"));
	printf("Testando com o nao printaveis. Se(0)Ok, Se(1) sua funcao falhou = [%d]\n", ft_str_is_printable(non_printable));
	printf("Testando com uma string vazia. . Se(1)Ok, Se(0) sua fucao falhou = [%d]\n", ft_str_is_printable(""));	
}
