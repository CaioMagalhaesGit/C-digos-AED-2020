#include <stdio.h>
#include <stdlib.h>

int  main (){
	int x = 2, y = 3;
	int z = x + y;
	
	printf("os endereços das variaveis são: \n");
	printf("x = %d\n", &x);
	printf("y = %d\n", &y);
	printf("z = %d\n", &z);
	printf("\n");	 
	
	printf("os valores das variaveis são: \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	printf("\n");	 
	
	int *px = &x;
	int *py = &y;
	int *pz = &z;
	
	
	printf("os endereços dos ponteiros são: \n");
	printf("&px = %d\n", &px);
	printf("&py = %d\n", &py);
	printf("&pz = %d\n", &pz);
	printf("\n");
	
	printf("os valores dos ponteiros são: \n");
	printf("px = %d\n", px);
	printf("py = %d\n", py);
	printf("pz = %d\n", pz);
	printf("\n");
	
	
	printf("os valores apontados pelo ponteiros são: \n");
	printf("*px = %d\n", *px);
	printf("*py = %d\n", *py);
	printf("*pz = %d\n", *pz);
	printf("\n");
	
	system ("pause");
	return 0;
}
