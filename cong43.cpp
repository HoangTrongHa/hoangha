#include<stdio.h>
		int	main(){
			int	a[4][3], b[4][3] ,i ,j;
		 	  
    			

			 for(i=0;i<4;i++){
			 	for(j=0;j<3;j++){
			 		
			 		printf("nhap a[%d][%d]\n",i,j);
		
			 	scanf("%d",&a[i][j]);
			 	}
			 }
			  for(i=0;i<4;i++){
			 	for(j=0;j<3;j++){
			 		printf("nhap b[%d][%d]\n",i,j);
		
			 	scanf("%d",&b[i][j]);
			 	}
			 }

			 	int tong[4][3];
			 	 for(i=0;i<4;i++){
			 	for(j=0;j<3;j++){

			 	tong[i][j]= a[i][j]+b[i][j];
			 	
			 	}
			 }
			  printf("Ma tran tong: \n");
    for(i=0;i<4;j++)
    {    
        for(j=0;j<3;j++)
        {
            printf("%5d",tong[i][j]);
        }
        printf("\n");
    }
	return	0;
 }