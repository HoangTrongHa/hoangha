#include<stdio.h>
int main()
{
    
   char name[30];
    printf("Nhap ten của ban: ");
    scanf("%s", name);

    int ngay;
    printf("moi ban nhap ngay ");
    scanf("%d", &ngay);
    int thang;
    printf("moi ban nhap thang ");
    scanf("%d", &thang);
    int nam;
    printf("moi ban nhap  nam");
    scanf("%d", &nam);

    if (ngay <= 31 && thang <= 12) {
        printf(" Ten hoc vien  ngay sinh %s,%d,%d,%d",name,ngay,thang,nam);
    } else {
        printf("loi ngay sinh moi nhap lai");

    }
    return 0;
}



