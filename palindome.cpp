#include <stdio.h>
int main (){
	int num, number, reverse=0,rem;
	printf ("enter the number =");
	scanf ("%d",&number);
    num = number;
	while (num != 0){
		rem = num %10 ;
		reverse = reverse * 10 + rem;
		num = num / 10;
	}
	printf ("\nthe number is %d",reverse);
	if (reverse == number ){
		printf ("\nthe number is palindrome");
	}
	else {
		printf ("\nthe number is not palindrome");
	}
	return 0;
}
