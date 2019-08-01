#include<stdio.h>

	int main(){
		int	n;
		printf("moi bo nhap so n= ");
		scanf("%d",&n);


		int f0 =1;
		int	f1 =1;
		int	fn	=1;
		
			for( int i= 2 ; i<=n ; i++) {

			
			fn = f0 + f1 ;
			f0 = f1;
			f1 = fn;
		}
			printf("so fibonacci thu n = %d ", fn );

	return	0;
	}