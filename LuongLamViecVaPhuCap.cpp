#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
 int Lcb,GioLam,Tien;
 float TongTien,PhuCap;
 int TienPhuCap;
 printf("Hay nhap so gio lam trong thang: ");
 scanf("%d",&GioLam);
 printf("Hay nhap muc luong theo gio: ");
 scanf("%d",&Tien) ;
  Lcb=Tien*GioLam; 
  
 if(GioLam<160) 
 {
 	TongTien=Lcb;
 }
 else 
 {
 	PhuCap=0.1;
 	TienPhuCap=Lcb*PhuCap; 
	 TongTien=TienPhuCap+Lcb; 
 }
 printf("Luong co ban: %d VND \n",Lcb);
 printf("Tien Phu cap: %d VND \n",TienPhuCap);
 printf("Tong tien luong: %.1f VND \n",TongTien) ;

  
	return 0;
 } 
