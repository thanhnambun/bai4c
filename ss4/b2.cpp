#include <stdio.h>
int main (){
	int a, b, c;
	printf("nhap 3 canh a, b,c : ");
	scanf("%d %d %d ",&a,&b,&c);
	if (a+b>=c) {printf("la tam giac thuong");}
	 if (a==b || a==c || b==c) {printf("la tam giac can");}
	 if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)  {printf("là tam giac vuong ") ;}
	 if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a && a==b || a==c || b==c) {printf("la tam giac vuong can ");} 
	 if (a==b==c) {printf("là tam giac deu"); }
	 }
	
