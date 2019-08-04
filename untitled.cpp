#include<stdio.h>

int main(){
	int n;
	printf("moi bo ha nhap so ");
	scanf("%d",&n);
		int a[n];
		int i;
		for( i = 0; i < n;i++){
			printf("nhap a[%d] ",i);
		scanf("%d",&a[i])	;	
		} 
			for(int j = 0;j < i ;j++){

			if(a[i]==a[j]){ 
		break;
		}
int a_j,a_i;
		if(a_j != a_i){
		
	printf("ket qua \n");
	}else{
		printf("nhap lai \n");
	}
	
}
	
	return	0;
}