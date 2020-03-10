#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x,y,*p;
	
	
	y=0;
	p=&y;
	x=*p;
	x=4;
	(*p)++;
	--x;
	(*p)+=x;
	
	printf("%d,%d,%d \n",x,y,*p);

	
	system("pause");
	return 0;
	
	
	
	
}













