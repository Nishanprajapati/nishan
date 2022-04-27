#include <stdio.h>
int main (){
	int i,j,n,count=0;
	printf ("enter a number whose prime number is to be determine =");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		if (n==1){
			printf ("the number is nor prime nor composite");
		}
		if (n % i==0){
			count++;
		}
		
	}
	if (count ==2){
		printf ("%d is a prime number ",n);
	}
	else{
		printf ("%d is not a prime number ",n);
	}
	return 0;
}
