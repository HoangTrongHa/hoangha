#include <stdio.h>
#include <math.h>
int main() {
    int x,y,z;


    printf("nhap x = \n");
    scanf("%d",&x);

    printf("nhap y = \n");
    scanf("%d",&y);

    printf("nhap z = \n");
    scanf("%d",&z);

    if(x<=y+z && z<=y+x && y<=x+z){
        if( x*x == y*y + z*z || y*y == x*x + z*z || z*z == x*x + y*y){
            printf("day la tam giac vuong\n");
            }else{
                if( x==y==z){
                    printf("day la tam giac deu\n");
                    }else {
                        if(x * x > y * y + z * z || y * y > x * x + z * z || z * z > x * x + y * y){
                        printf("day la tam giac tu\n");
                            } else {
                        printf("day la tam giac nhon\n");
                    }

                }
        }

    }else{
        printf("day khong phai la tam giac moi nhap lai\n");
    }




  return 0;
}