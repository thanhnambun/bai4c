#include <stdio.h>
int main (){
	int number;
	printf ("nhap so tu nhien : ");
	scanf ("%d",&number);
	if (number%3==0 && number%5==0) {printf(" number%d la so chia het cho 3 va 5 ");}
	else{printf("number  %d la so lhong chia het cho 3 va 5 ");}
}
