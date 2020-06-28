#include <stdio.h>

int main()
{
    int first, second;
    
    scanf("%d", &first);
    scanf("%d", &second);
    
    if((first + second) % 2)
        printf("0\n");
    else 
        printf("1\n");
   
}
