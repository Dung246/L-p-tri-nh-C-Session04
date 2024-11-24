#include<stdio.h>
 int main () {
   int a,b,c;
    printf("Moi ban nhap 3 so nguyen : \n");
    scanf("%d %d %d",&a,&b,&c);
     if( a > c || b > c) {
       printf("%d la so nam giua hai so a vs c\n",c);
    }else {
    	printf("%d khong la so nam giua a va b\n",c);
	}
    
       
 }
