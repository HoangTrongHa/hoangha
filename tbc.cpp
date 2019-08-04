#include<stdio.h>

	int	main(){
	
	int	a[10];
	
		for( int i=0 ; i<10; i++){
			printf("nhap phan tu ");
	scanf("%d",&a[i]); 

		}
		float s=0;
			float tb =1;
				for(int i =0; i<10 ;i++){
				s+=a[i];
				tb= s/10;
				printf("trung binh cong day so = %f ",tb);
}
	return	0;
	}