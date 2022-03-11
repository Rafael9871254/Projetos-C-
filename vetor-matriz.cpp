#include <stdio.h>

int main () {
	/*
	int valor[6];
	int i;
	for(i=0 ; i<6 ; i++) {
		printf("digite um valor: ");
		scanf("%d", &valor[i]);
	}
	
	for(i=0 ; i < 6 ; i++) {
	printf("posicao %d: %d\n", i, valor[i]);
	
}
	
return 0;
	
}
fim Vetor
*/
//inicio matriz, para testar o vetor basta comentar o codigo matriz!
int matriz [2] [2];

int i, j;
for(i = 0 ; i<2 ; i++){
	for(j=0 ; j<2 ; j++){
		printf("digite um valor: ");
		scanf("%d", &matriz[i][j]);
	}
	printf("\n");
}


for(i=0 ; i < 2 ; i++) {
	for(j=0 ; j < 2 ; j++){
		printf("%d", matriz[i][j]);
		
	}
	printf("\n");
}
}
