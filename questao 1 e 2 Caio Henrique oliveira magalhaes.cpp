/*

01- E uma funcao para resolver uma operacao matematica fazendo a soma de dois numeros
e depois fazendo a potencia do x elevado a 2 e somando os resultados.



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float calcula (float x, float y, float z)
{
	return (pow(x,2)+(y+z));
}

main(){

printf("Resultado: %3.2f \n", calcula(2,3,4));
printf("\n\n");
system("pause");
return (0);
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float calcula (float x, float y, float z ,float b)
{
	b=(x+y+z);
	return (pow(b,2));
}

main ()
{
	
float x,y,z,b;
	
printf("Digite o 1 valor:");
scanf("%f",&x);
printf("Digite o 2 valor:");
scanf("%f",&y);
printf("Digite o 3 valor:");
scanf("%f",&z);	

printf("O Resultado e: %3.2f\n", calcula(x,y,z,b));
	
system ("pause");
return 0;
	
}






