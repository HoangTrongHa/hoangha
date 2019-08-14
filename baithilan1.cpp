#include<stdio.h> 
#include <math.h>

	int main(){
		int x;
		printf("nhap so: \n");
		scanf("%d",&x);
		int y; 
		printf("nhap so: \n" );
		scanf("%d",&y);

		int tong=0;
		tong = x+y;
		printf("tong 2 so = %d \n",tong);
				

		int hieu = 0;
		hieu = x-y;
		printf("hieu 2 so = %d\n",hieu);

		int tich = 0;
		tich = x*y;
		printf("tich 2 so =%d\n",tich);

		float thuong = 0;
		thuong = x/y;
		printf("thuong 2 so = %f\n",thuong);

		return 0;	
	}