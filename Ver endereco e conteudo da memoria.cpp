#include <stdio.h>
#include <stdlib.h>

int  main (){
	int x = 2, y = 3;
	int z = x + y;
	
	printf("os endere�os das variaveis s�o: \n");
	printf("x = %d\n", &x);
	printf("y = %d\n", &y);
	printf("z = %d\n", &z);
	printf("\n");	 
	
	printf("os valores das variaveis s�o: \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	printf("\n");	 
	
	int *px = &x;
	int *py = &y;
	int *pz = &z;
	
	
	printf("os endere�os dos ponteiros s�o: \n");
	printf("&px = %d\n", &px);
	printf("&py = %d\n", &py);
	printf("&pz = %d\n", &pz);
	printf("\n");
	
	printf("os valores dos ponteiros s�o: \n");
	printf("px = %d\n", px);
	printf("py = %d\n", py);
	printf("pz = %d\n", pz);
	printf("\n");
	
	
	printf("os valores apontados pelo ponteiros s�o: \n");
	printf("*px = %d\n", *px);
	printf("*py = %d\n", *py);
	printf("*pz = %d\n", *pz);
	printf("\n");
	
	system ("pause");
	return 0;
}
