#include <stdio.h>

int main()
{
    int dist;
    
    scanf("%d", &dist);
    
    if(dist <= 800) printf("1\n");
    else if(dist <= 1400 && dist > 800 ) printf("2\n");
    else if(dist <= 2000 && dist > 1400 ) printf("3\n");
}