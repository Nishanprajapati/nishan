#include <stdio.h>
int main (){
	char a[50],temp;
	int b,c,d,e,A=65;
	
	printf ("enter the character in capital ");
	for(b=0;b<=4;b++){
		scanf (" %c",&a[b]);
	}
	printf ("\n\nthe marks are ");
	for(b=0;b<=4;b++){
		printf (" %c\t",a[b]);
	}
	
	for (c=0;c<=4-2;c++){
		for (d=0;d<=4-1-c;d++){
			if (a[d]>a[d+1]){
				temp=a[d];
				a[d]=a[d+1];
				a[d+1]=temp;
			}
			
		}
	}
	printf ("\n\nthe marks in ascending order is ");
	for(b=0;b<=4;b++){
		
		printf (" %c\t",a[b]);
	}
	printf("\n\nthe marks in decending order is ");
	for(b=4;b>=0;b--){
		
		printf (" %c\t",a[b]);
	}
	return 0;
	
}
