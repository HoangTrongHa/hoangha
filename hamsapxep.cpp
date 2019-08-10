#include<stdio.h>
	
	void in_mang(int a[], int n)
		{ printf("%d\n",a[]);
  			
  	for(int i=0;i<n;i++)
  		{ printf(" phan tu thu %d :",i);
    	scanf("%d",&a[i]);
  }
}
	

// test git 
		void sap_xep_tang(int a[],int n)
{
 	for(int i=0;i<n-1;i++){
  		for(int j=0;j<n-i;j++)
   		{
    	if(a[i]<a[j]) 
     	{
       	int temp=a[i];
       	a[i]=a[j];
       	a[j]=temp;
     }
 }
   }
		 printf(" mang sap xep giam la: "); 
	 
}

	int main(){
		 int a[10]={2,4,5,6,7,8,9,36,74,89};
 		in_mang(a,10);
 		
 			return 0;

	

	}
