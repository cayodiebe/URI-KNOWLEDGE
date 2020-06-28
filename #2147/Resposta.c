#include <stdio.h>

int main()
{
    int i, galopeira;
    char frase[10100];

    scanf("%d", &i);


    while(i--)
    {
        scanf("%s", frase);
        galopeira = strlen(frase);
        printf("%.2lf\n", galopeira*.01);
    }
    return 0;
}