#include <stdio.h>
int main (){
	int a, num, number, sum=0;
	printf ("enter a number =");
	scanf ("%d",&num);
	a = num ;
	do{
		number = num % 10;
		sum = sum +number*number*number;
		num =num / 10;
	}while ( num != 0);
	
	if ( a == sum){
		printf ("the number is armstong");
	}
	else {
		printf ("the number is not armstrong");
	}
	return 0;
}
