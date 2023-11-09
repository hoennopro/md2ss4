#include <stdio.h>
int main() {
    int day, month, year, max;
    
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (year > 0 && month >= 1 && month <= 12) {

        switch (month) {
            case 4: case 6: case 9: case 11:
                max = 30;
                break;
            case 2:
                if (year % 4 == 0 && year % 100 != 0)
                    max = 29;
                else
                    max = 28;
                break;
            default:
                max = 31;
        }

        if (day > 0 && day <= max) {
            printf("Ngay thang nam nhap vao hop le.");
        } else {
            printf("Ngay khong hop le.");
        }
    } if (month > 12 || month < 1){
    	printf("Thang ko hop le");
}
	
    }

