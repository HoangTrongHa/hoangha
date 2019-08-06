#include<stdio.h>

int	 main(){
    int a[4][4];

    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("moi bo nhap a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<4;i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%5d ",a[i][j]);

        }
        printf("\n");
        int tbc = 0;
        tbc =((a[0][0])+(a[1][1])+(a[2][2])+(a[3][3]))/4 ;
        printf("tbc duong cheo = %d ",tbc);
    }
        return	0;
    }