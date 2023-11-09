#include <stdio.h>

int main() {
    int nam, thang;
    
    printf("Nhap nam: ");
    scanf("%d", &nam);

    printf("Nhap thang: ");
    scanf("%d", &thang);

    switch (thang) {
        case 1:
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break; 
		case 3: 
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
		case 5: 
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
		case 7: 
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
		case 8: 
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
		case 10: 
			printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
		case 12:
            printf("Thang %d nam %d co 31 ngay", thang, nam);
            break;
        case 4: 
			printf("Thang %d nam %d co 30 ngay", thang, nam);
            break;
		case 6: 
			printf("Thang %d nam %d co 30 ngay", thang, nam);
            break; 
		case 9: 
			printf("Thang %d nam %d co 30 ngay", thang, nam);
            break; 
		case 11:
            printf("Thang %d nam %d co 30 ngay", thang, nam);
            break;
        case 2:
            if (nam % 4 == 0 && nam % 100 != 0 ) {
                printf("Thang 2 nam %d co 29 ngay", nam);
            } else {
                printf("Thang 2 nam %d co 28 ngay", nam);
            }
            break;
    }
}
