#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entregar/ex01/ft_strncpy.c"

void print_array(const char *frase, char *dest1, int size)
{
	printf("%s:", frase);
	for(int a=0; a < size; a++)
		{
			printf("[%d]", dest1[a]);
		}
	printf("\n");
}


char	*ft_strncpy(char *dest, char *src, unsigned int n);

void teste_0()
{
// testing size 0
	char src[] =   {'A','A','A','\0'};
	char dest1[] = {'1','1','1','1','1'};
	char dest2[] = {'1','1','1','1','1'};

	print_array("buffer_original          ", dest1, sizeof(dest1));

	strncpy(dest1, src, 0);
	ft_strncpy(dest2, src, 0);

	print_array("   strncpy(dest1, src, 0)", dest1, sizeof(dest1));
	
	print_array("ft_strncpy(dest2, src, 0)", dest2, sizeof(dest2));

	if(dest2[0] == 49 && dest2[1] == 49 && dest2[2] == 49 && dest2[3] == 49  && dest2[4] == 49)
		printf(" 0 OK\n");
	else
		printf(" 0 ERROR\n");
}

void teste_1()
{
// testing size 1
	char src[] =   "AAA";
	char dest1[] = "11111";
	char dest2[] = "11111";

	print_array("dest:                    ", dest1, sizeof(dest1));

	strncpy(dest1, src, 1);
	ft_strncpy(dest2, src, 1);

	print_array("   strncpy(dest1, src, 1)", dest1, sizeof(dest1));
	print_array("ft_strncpy(dest2, src, 1)", dest2, sizeof(dest2));
	if(dest2[0] == 65  && dest2[1] == 49 && dest2[2] == 49 && dest2[3] == 49 && dest2[4] == 49)
		printf(" 0 OK\n");
	else
		printf(" 0 ERROR\n");

}

void teste_2()
{
// testing size 4
	char src[] =   "AAA";
	char dest1[] = "11111";
	char dest2[] = "11111";

	print_array("dest:                    ", dest1, sizeof(dest1));

	strncpy(dest1, src, 4);
	ft_strncpy(dest2, src, 4);

	print_array("   strncpy(dest1, src, 4)", dest1, sizeof(dest1));
	print_array("ft_strncpy(dest2, src, 4)", dest2, sizeof(dest2));

	if(dest2[0] == 65  && dest2[1] == 65 && dest2[2] == 65 && dest2[3] == 0  && dest2[4] == 49)
		printf(" 0 OK\n");
	else
		printf(" 0 ERROR\n");
}
void teste_3()
{
// testing size 4
	char src[] =   "AAA";
	char dest1[] = "11111";
	char dest2[] = "11111";

	print_array("dest:                    ", dest1, sizeof(dest1));

	strncpy(dest1, src, 5);
	ft_strncpy(dest2, src, 5);

	print_array("   strncpy(dest1, src, 5)", dest1, sizeof(dest1));
	print_array("ft_strncpy(dest2, src, 5)", dest2, sizeof(dest2));

	if(dest2[0] == 65  && dest2[1] == 65 && dest2[2] == 65 && dest2[3] == 0  && dest2[4] == 0)
		printf(" 0 OK\n");
	else
		printf(" 0 ERROR\n");
}

int main(void)
{
	printf("\n== testes======\n");
	teste_0();
	printf("=======\n");
	teste_1();
	printf("=======\n");
	teste_2();
	printf("=======\n");
	teste_3();
	
}
