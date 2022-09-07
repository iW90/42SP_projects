#include <stdio.h>
#include <stdlib.h>
#include "entregar/ex04/ft_str_is_lowercase.c"

int	ft_str_is_lowercase(char *str);

int main(void)
{
	printf("Teste com a alfabeto em minusculo. Se(1)Ok, Se(0) sua funcao falhou = [%d]\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvxwyz"));
	printf("Teste com a alfabeto em minusculo e uma letra em maiusculo. Se(0)Ok, Se(1) sua funcao falhou = [%d]\n", ft_str_is_lowercase("abcdEfghijklmnopqrstuvxwyz"));
	printf("Teste com a string vazia. Se(1)Ok, Se(0) sua funcao falhou = [%d]\n", ft_str_is_lowercase(""));	
}
