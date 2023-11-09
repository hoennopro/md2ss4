#include <stdio.h>
int main(){
	float a, b ,c;
	
	printf("nhap vao canh 1: ");
	scanf("%f", &a);
	
	printf("nhap vao canh 2: ");
	scanf("%f", &b);
	
	printf("nhap vao canh 3: ");
	scanf("%f", &c);
	
	 if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c && a==c){
            printf("Day la tam giac deu");
        } else if (a == b || a == c || b == c){
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
                printf("Day la tam giac vuong can");
            } else {
                printf("Day la tam giac can");
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
            printf("Day la tam giac vuong");
        } else {
            printf("Day la tam giac thuong");
        }
    } else {
        printf("Ba canh vua nhap khong tao thanh tam giac");
    }
}
	

