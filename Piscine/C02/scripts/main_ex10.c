#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entregar/ex10/ft_strlcpy.c"

void print_array(int print_retorno, int retorno, char *dest1, int size)
{
	if(print_retorno == 1)
		printf("retorno: (%d), array: ", retorno);
	for(int a=0; a < size; a++)
		{
			printf("[%d]", dest1[a]);
		}
	printf("\n");
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int teste0(int size)
{
	char src[6]   = {'A','B','C','D','E','\0'};
	char dest1[4] = {1,1,1,1};
	char dest2[4] = {1,1,1,1};

	printf("sizeof src   [%lu],            ", sizeof(src));
	print_array(0,-1, src ,  sizeof(src));
	
	printf("sizeof dest1 [%lu] dest1 antes:", sizeof(dest1)); 
	print_array(0,-1, dest1, sizeof(dest1));


	size_t retorno_strlcpy    =    strlcpy(dest1, src, size);
	int    retorno_ft_strlcpy = ft_strlcpy(dest2, src, size);
	printf("---\n");	
	printf("dest1 depois:    strlcpy(dest1, src, %d)\n", size);	
	print_array(1, (int)retorno_strlcpy, dest1, sizeof(dest1));	
	printf("---\n");
	printf("dest2 depois: ft_strlcpy(dest2, src, %d)\n", size);
	print_array(1, retorno_ft_strlcpy  , dest2, sizeof(dest2)); 

	int is_ok = 1;
	for(int a=0; a < 4; a++)
	{
		if(dest1[a] != dest2[a]){
			is_ok = 0;
			break;
		}
	}

	if(is_ok)
		printf("RESULT >>>>> OK");
	else
		printf("RESULT >>>>> ERROR");

	printf("\n\n=====\n");
	return 0;
}
int main(void)
{
	printf("\n");
	teste0(0);
	teste0(1);
	teste0(2);
	teste0(3);
	teste0(4);
}
