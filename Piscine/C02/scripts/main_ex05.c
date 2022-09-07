#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex05/ft_str_is_uppercase.c"

int	ft_str_is_uppercase(char *str);

int main(void)
{
	printf("Teste com a alfabeto em Maisculo. Se(1)Ok, Se(0) sua funcao falhou = [%d]\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVXWYZ"));
	printf("Teste com a alfabeto em Maisculo e uma letra em minusculo. Se(0)Ok, Se(1) sua funcao falhou = [%d]\n", ft_str_is_uppercase("ABCDEFgHIJKLMNOPQRSTUVXWYZ"));
	printf("Teste com a string vazia. Se(1)Ok, Se(0) sua funcao falhou = [%d]\n", ft_str_is_uppercase(""));	
}
