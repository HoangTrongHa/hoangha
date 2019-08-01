#include<stdio.h>

	int main(){
		int	n;
		printf("moi bo ha nhap so n:\n");
		scanf("%d",&n);
		int i, ha = 1;
			for( i = 1 ; i <=n ; i++ ){
				for( int j=2 ; j<=i - 1 ; j++ ){
					if (i%j==0){
						ha = 0;
					}
				}
				if(ha == 1){
					printf("%d\t",i);
				}
				ha =1 ;
			}
			return	0;
	}