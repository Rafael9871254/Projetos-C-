#include <stdio.h>

int main()

{

float cont, nota1, nota2, nota3, media, maior;
maior=0;

for (cont=1;cont<=40;cont++)
{

printf (" nota 1 = ");
scanf ("%f", &nota1);

printf (" nota 2 = ");
scanf ("%f", &nota2);

printf (" nota 3 = ");
scanf ("%f", &nota3);

media = (nota1+nota2+nota3)/3;
printf(" media = %.2f\n\n", media);

if (media>=7) printf ("Aluno aprovado! \n\n");
else printf (" Aluno Reprovado ! \n\n");
}
}
