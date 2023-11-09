#include <stdio.h>
int main(){
	int year, month, day;
	printf("nhap nam \n", year);
	printf("nhap thang \n",month);
	scanf("%d %d",&year,&month);
	switch (month) {
		case 1: 
		printf("nam %d thang %d co 31 ngay\n",year,month);
		break;
		case 3: 
		printf("nam %d thang %d co 31 ngay\n",year,month);
		break;
		case 5: 
		printf("nam %d thang %d co 31 ngay",year,month);
		break;
		case 7: 
		printf("nam %d thang %d co 31 ngay",year,month);
		break;
		case 8: 
		printf("nam %d thang %d co 31 ngay",year,month);
		break;
		case 10: 
		printf("nam %d thang %d co 31 ngay",year,month);
		break;
		case 12: 
		printf("nam %d thang %d co 31 ngay",year,month);
		break;
		default :
		printf("nam %d thang %d co 30 ngay",year,month);
			
	}
    if (year%4==0 && year%100) {printf("thang 2 co 29 ngay");
	}else{printf("thang 2 co 28 ngay");};
}
