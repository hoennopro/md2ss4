#include <stdio.h>
int main() {
    int number1, number2, number3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    printf("Nhap so thu ba: ");
    scanf("%d", &number3);
    
    if (number1 >= number2 && number2 >= number3) {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number1, number2, number3);
    } else if (number1 >= number3 && number3 >= number2) {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number1, number3, number2);
    } else if (number2 >= number1 && number1 >= number3) {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number2, number1, number3);
    } else if (number2 >= number3 && number3 >= number1) {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number2, number3, number1);
    } else if (number3 >= number1 && number1 >= number2) {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number3, number1, number2);
    } else {
        printf("Cac so theo thu tu giam dan la: %d, %d, %d", number3, number2, number1);
    }
}

