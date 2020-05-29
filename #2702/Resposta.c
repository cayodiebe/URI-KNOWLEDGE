#include <stdio.h>

int main()
{
    int v1,v2,v3,v4,v5,v6,total = 0;
    
    scanf("%d%d%d", &v1, &v2, &v3);
    
    scanf("%d%d%d", &v4, &v5, &v6);
    
    if (v4>v1)  
        total = total + (v4 - v1);
     if (v5>v2)
        total = total + (v5 - v2);
     if (v6>v3)
        total = total + (v6 - v3);
    
    printf("%d\n", total);
    
    return 0;
}