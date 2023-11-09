#include <stdio.h>
int main(){
    float a,b;
    printf("nhap luong co ban \n nhap so ngay lam thuc te \n");
    scanf("%f %f" , &a, &b);
    if (b>26) b= 26 +(b-26)*1.5;
    float wage = a*(b/26);
    printf("wage %.3f ",wage);
} 
