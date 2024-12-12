
#include<stdio.h>
int main(){
	int  type;
	float DoiTien ,Chon ;
	double usd_to_vnd = 23500, 
	      eur_to_vnd = 25000,
	      gbp_to_vnd = 28000, 
	    jby_to_vnd = 180;
	     printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf ("7. VND to GBP\n");
	printf ("8. VND to JPY\n");
	printf ("Hay chon don vi can chuyen doi tu 1 den 8: ");
	scanf("%d",&type);
printf("moi ban nhap vao so tien can doi: ");
scanf("%f",&Chon);
	switch (type ) {
		case 1:
			DoiTien= Chon* usd_to_vnd;
			printf("%.2f USD = %.2f vnd", Chon, DoiTien );
			break;
		case 2:
				DoiTien= Chon* eur_to_vnd;
						printf("%.2f eur = %.2f vnd", Chon,DoiTien );
			break;
		case 3:
				DoiTien= Chon*gbp_to_vnd;
						printf("%.2f gbd = %.2f vnd", Chon,DoiTien );
			break;
		case 4:
						DoiTien= Chon* jby_to_vnd;
								printf("%.2f jby = %.2f vnd", Chon,DoiTien );
					break;
	    case 5:
					DoiTien= Chon/usd_to_vnd ;
							printf(" %.2f vnd = %.2f UDS", Chon, DoiTien );
				break;
		case 6:
							DoiTien= Chon/eur_to_vnd ;
									printf(" %.2f vnd = %.2f eur", Chon, DoiTien );
							break;	
		case 7:
					DoiTien= Chon/gbp_to_vnd ;
							printf(" %.2f vnd = %.2f gbp", Chon, DoiTien );
				break;
		case 8:
							DoiTien= Chon/jby_to_vnd ;
									printf(" %.2f vnd = %.2f jby", Chon, DoiTien );
							break;					
		default:
			printf ("Lua chon ko hop le! Yeu cai nhap lai! ");
			break;
	}
  return 0;	
}


