#include<stdio.h>

void verifica(int a){
    if(a<=8000){
            printf("Inseto!\n");
    }
    else{
            printf("Mais de 8000!\n");
    }
}
int main(){
    long int N;
    int C;
    scanf("%d",&C);

    while(C>0){
        scanf("%ld",&N);
        verifica(N);
    C--;
    }

return 0;
}
