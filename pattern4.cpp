#include <stdio.h>
int main (){
	int a, b ,c ,d=1 ,num;
	
	for (a=1;a<=5;a++){
		for (b=1;b<=3;b++){
			printf (" %d\t",d);
		    d++;
		}
		num=d-1;
		for (c=1;c<=2;c++){
			printf (" %d\t",--num);
		}
		printf ("\n");
	}
	return 0;
}
