
#include <stdio.h>
main (void) {
	
    int nmr1, nmr2, op;
    
    printf("digite 1 para somar ou 2 subtracao, 3 multiplicacao ou 4 divisao: \n");
    scanf("%d", &op);
    
    printf("digite o primeiro numero:\n");
    scanf("%d", &nmr1);
    
    printf("digite o primeiro numero:\n");
    scanf("%d", &nmr2);
    
    if (op == 1){
    	
    	nmr1 = nmr1 + nmr2;
    	
    	printf("o resultado da soma e: %d", nmr1);
	}
	if (op == 2){
		nmr1 = nmr1 - nmr2;
		
		printf("o resultado da subtracao e: %d", nmr1);
		
	}
	 if (op == 3){
    	
    	nmr1 = nmr1 * nmr2;
    	
    	printf("o resultado da multiplicacao e: %d", nmr1);
	}
	if (op == 4){
		nmr1 = nmr1 / nmr2;
		
		printf("o resultado da divisao e: %d.4", nmr1);
		
	}
    return 0;
}
