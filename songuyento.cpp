#include <stdio.h>

int main() {
     int n;
     printf("nhap so n = ");
     scanf("%d",&n);

     int tong_so_luong_uoc =0;



     for( int i = 1; i <=n; ++i){
      if( n % i == 0 ) {
          tong_so_luong_uoc++;

        }
      }
     if( tong_so_luong_uoc == n){
         printf(" n la so hoan hao \n");

     }else{
         printf(" n khong phai la so hoan hao\n");
     }

    return 0;
}