#include <stdio.h>
int main (){
	int a, num = 1;
	printf ("enter a number =");
	scanf ("%d",&a);
	
	while ( a!= 0){
		num = num * a;
		a= a-1;
	}
	printf ("the factorial of number is %d",num);
	return 0;
}
