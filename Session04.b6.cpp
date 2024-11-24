#include<stdio.h>
 int main () {
   float electricityNumber;
     printf("Moi ban nhap so dien ban da dung trong thang nay : ");
     scanf("%f",&electricityNumber);
      if( 0 <= electricityNumber && electricityNumber < 50 ) {
	   printf("So tien thang nay ban phai nop la : 10.000 \n");
	}else if(50<= electricityNumber && electricityNumber < 100) {
	  	printf("So tien thang nay ban phai tra la : 15.000\n");
    }else if(100 <= electricityNumber && electricityNumber < 150) {
        printf("So tien thang nay ban phai tra la : 20.000\n");
    }else if(150 <= electricityNumber && electricityNumber < 200) {
        printf("So tien thang nay ban phai tra la : 25.000\n"); 
	  }else if(200 <= electricityNumber ) {
        printf("So tien thang nay ban phai tra la : 30.000\n"); 
      }    
	   	}
