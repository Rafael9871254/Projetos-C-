#include <stdio.h>

main (void){

// Primeiro definimos nossas vari�veis.
float av1, av2, media;

//Depois processamos a entrada
//Primeiro com a informa��o para o usu�rio
printf("Informe a nota da AV1 \n");
//Depois com o comando de leitura.
scanf("%f", &av1);

//Repetimos para a segunda nota.
printf("Informe a nota da AV2 \n");
scanf("%f", &av2);

//Calculamos agora a m�dia aritm�tica.
media = (av1 + av2)/2;

if(media >=7)
	
printf("Aluno aprovado!\n", media);

else 

printf("Aluno reprovado! \n", media);



}
