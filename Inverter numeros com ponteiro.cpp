#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1,num2,aux;
	int *pnum1 = &num1;
	int *pnum2 = &num2;
	int *paux = &aux;
	
	printf("digite o 1 num:");
	scanf("%d",&num1);
	printf("digite o 1 num:");
	scanf("%d",&num2);
	
	printf("Num orig \n");
	printf("%d \n",num1);
	printf("%d \n",num2);
	
	*paux = num1;
	*pnum1 = num2;
	*pnum2 = aux;
	
	printf("Num trocados \n");
	printf("%d \n",*pnum1);
	printf("%d \n",*pnum2);
	
	system ("pause");
	return 0;
	
}
