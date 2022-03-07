#include <stdio.h>

main (void){

// Primeiro definimos nossas variáveis.
float av1, av2, media;

//Depois processamos a entrada
//Primeiro com a informação para o usuário
printf("Informe a nota da AV1 \n");
//Depois com o comando de leitura.
scanf("%f", &av1);

//Repetimos para a segunda nota.
printf("Informe a nota da AV2 \n");
scanf("%f", &av2);

//Calculamos agora a média aritmética.
media = (av1 + av2)/2;

if(media >=7)
	
printf("Aluno aprovado!\n", media);

else 

printf("Aluno reprovado! \n", media);



}
