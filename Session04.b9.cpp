#include <stdio.h>
int main() {
   int a,b,c;
   printf("Moi ban nhap ngay thang nam  :\n ");
    scanf("%d %d %d",&a,&b,&c);
    if (1 <= a && a <= 30 && 1 <= b && b <= 12 && 1<=c && c < 2025) {
	
     printf("Hom nay la %d/%d/%d",a,b,c);
    }else{
     printf("Khong hop le");
	}
    
}
