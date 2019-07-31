#include <stdio.h>

int main() {
     int n;
     printf("nhap so n = ");
     scanf("%d",&n);

     int tong_so_luong_uoc =0;



     for( int i = 1; i <=n/2; i++){
      if( n % i == 0 ) {
          tong_so_luong_uoc++;

        }
      }
     if( tong_so_luong_uoc != n){
         printf(" %d la  so hoan hao \n",n);

     }else{
         printf(" %d  khong so hoan hao\n",n);
     }

    return 0; 
}