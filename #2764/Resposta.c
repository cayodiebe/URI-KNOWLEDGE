#include <stdio.h>
#include <stdlib.h>

void number(char vet[]) {
	int i;

	for(i = 0; i < 8; i++) {
		if(vet[i] == '/') printf("/");
		else if(vet[i] == '-') printf("-");
		else if(vet[i] == '1') printf("%d", 1);
		else if(vet[i] == '2') printf("%d", 2);
		else if(vet[i] == '3') printf("%d", 3);
		else if(vet[i] == '4') printf("%d", 4);
		else if(vet[i] == '5') printf("%d", 5);
		else if(vet[i] == '6') printf("%d", 6);
		else if(vet[i] == '7') printf("%d", 7);
		else if(vet[i] == '8') printf("%d", 8);
		else if(vet[i] == '9') printf("%d", 9);
		else if(vet[i] == '0') printf("%d", 0);
	}
	printf("\n");
}

int main(void) {
	int i;
	char vet[9], N, vet2[9];

	for(i = 0; i < 8; i++) {
		scanf("%c", &N);
		vet[i] = N;
	}
	vet[i] = '\0';
	vet2[0] = vet[3], vet2[1] = vet[4], vet2[2] = '/', 
	vet2[3] = vet[0], vet2[4] = vet[1], vet2[5] = '/', 
	vet2[6] = vet[6], vet2[7] = vet[7];
	number(vet2);

	vet2[0] = vet[6], vet2[1] = vet[7], vet2[2] = '/', 
	vet2[3] = vet[3], vet2[4] = vet[4], vet2[5] = '/', 
	vet2[6] = vet[0], vet2[7] = vet[1];
	number(vet2);
	vet2[0] = vet[0], vet2[1] = vet[1], vet2[2] = '-', 
	vet2[3] = vet[3], vet2[4] = vet[4], vet2[5] = '-', 
	vet2[6] = vet[6], vet2[7] = vet[7];
	number(vet2);
	return 0;
}