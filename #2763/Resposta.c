/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_substring(char str[], int start, int end);

int main()
{
    char cpf[100];
    
    scanf("%s", &cpf);
    printf("%s\n", string_substring(cpf,0,3));
    printf("%s\n", string_substring(cpf,4,7));
    printf("%s\n", string_substring(cpf,8,11));
    printf("%s\n", string_substring(cpf,12,14));
    return 0;
}

char* string_substring(char str[], int start, int end) {
    int i, j;
    char *sub; 
     
    if(start >= end || end > strlen(str)) {
        return NULL;
    }
     
    // Aloca memória para a substring
    sub = (char *) malloc(sizeof(char) * (end - start + 1));
     
    // Copia a substring para a variável
    for(i = start, j = 0; i < end; i++, j++) {
        sub[j] = str[i];
    }
     
    // Terminador de string
    sub[j];
     
    return sub;
}