#include <stdio.h>
int main(){
	int year, month, day;
	printf("nhap nam thang ngay : ",year,month,day);
	scanf("%d %d %d\n",&year,&month,&day);
	if (year>0) {printf("nam %d",year);}
	if (0<month<12) {printf("thang %d",month);}
	if (1<day<30) {printf("ngay %d",day);}
}
 
 
