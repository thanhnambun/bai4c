#include <stdio.h>
int main(){
	int electricitynumber, a, b, electricitybill;
	printf("nhap so dien cu : \n");
	printf("nhap so dien moi : \n");
	scanf("%d %d",&a,&b);
	electricitynumber = b - a;
	printf("so dien thang nay %d",electricitynumber\n);
	if (0<=electricitynumber<50) {printf("so tien dien %d ",electricitynumber*10000\n);};
	if (50<=electricitynumber<100) {printf("so tien dien %d ",electricitynumber*15000\n);};
	if (100<=electricitynumber<150) {printf("so tien dien %d ",electricitynumber*20000\n);};
	if (150<=electricitynumber<200) {printf("so tien dien %d ",electricitynumber*25000\n);};
	if (200<=electricitynumber) {printf("so tien dien %d ",electricitynumber*30000\n);};
}
