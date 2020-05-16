#include <stdio.h>

void main ()
{
	unsigned short qts;
	unsigned short i;
	char band[100];
  //Entrada
	scanf("%hu", &qts);

	for (i = 0; i < qts; i++)
	{
		scanf(" %[^\n]", band);
		printf("Y\n");
	}
}
