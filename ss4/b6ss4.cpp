#include <stdio.h>
int main(){
	int a, b, c;
	printf("a b c : "); 
	scanf("%d %d %d",&a,&b,&c);
	if (a<b) {int temp=a;
	          a=b;
			  b=temp;
			  };
	if (a<c) { int temp1=a;
	          a=c;
			  c=temp1;
			  };
	if (b<c) {int temp2=b;
	         b=c;
			 c=temp2;
			 printf("\na=%d \nb=%d \nc=%d",a,b,c);}		    
} 			  
