#include<stdio.h>

  int main(int argc,  char * argv[])
  {
    int a,b,c;
    cout<<"nhap ba so nguyen:";
    cin>>a>>b>>c;
    cout<<"gia tri lon nhat=";
    cout<<"gia tri nho nhat=";
    cout<<"\n"; 
  }
     

    int giatrimax( int a, int b, int c){
     if(a>b){
       if(a>c)  return(a);
       else return(c);}
      else if(b>c) return(b);
      else return(c)
     }
    int giatrimin( int a, int b, int c){
     if(a<b){
       if(a<c)  return(a);
         else  return(c);}
       else  if(b<c)  return(b)
       else  return(c)
     }
    return 0
    }
    