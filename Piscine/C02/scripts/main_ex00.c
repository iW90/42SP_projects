#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entregar/ex00/ft_strcpy.c"

void print_array(const char *frase, char *dest1, int size)
{
	printf("%s:", frase);
	for(int a=0; a < (size-1); a++)
		{
			printf("[%d]", dest1[a]);
		}
	printf("\n");
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void teste_0()
{
// testing size 0
	char src[] =   "AAA";
	char dest1[] = "11111";
	char dest2[] = "11111";

	print_array("buffer_original dest:", dest1, sizeof(dest1));

	strcpy(dest1, src);
	ft_strcpy(dest2, src);

	print_array("   strcpy(dest1, src)", dest1, sizeof(dest1));
	
	print_array("ft_strcpy(dest2, src)", dest2, sizeof(dest2));

	if(dest2[0] == 65  && dest2[1] == 65 && dest2[2] == 65 && dest2[3] == 0  && dest2[4] == 49)
		printf(" 0 OK\n");
	else
		printf(" 0 ERROR\n");
}

int main(void)
{
	printf("\n== testes======\n");
	teste_0();
}
