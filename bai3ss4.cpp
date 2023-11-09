#include <stdio.h>

int main() {
    float chiSoCu, chiSoMoi, soDien, tienDien;

    printf("Nhap chi so cu cua dien: ");
    scanf("%f", &chiSoCu);

    printf("Nhap chi so moi cua dien: ");
    scanf("%f", &chiSoMoi);

    

    soDien = chiSoMoi - chiSoCu;

    if (soDien >= 0 && soDien < 50) {
        tienDien = soDien * 10000;
        printf("Tien dien phai tra: %f VND\n", tienDien);
        
    } else if (soDien >= 50 && soDien < 100) {
        tienDien = soDien * 15000;
        printf("Tien dien phai tra: %f VND\n", tienDien);
        
    } else if (soDien >= 100 && soDien < 150) {
        tienDien = soDien * 20000;
        printf("Tien dien phai tra: %f VND\n", tienDien);
        
    } else if (soDien >= 150 && soDien < 200) {
        tienDien = soDien * 25000;
        printf("Tien dien phai tra: %f VND\n", tienDien);
        
    } else if (soDien >= 200) {
        tienDien = soDien * 30000;
        printf("Tien dien phai tra: %f VND\n", tienDien);
        
    }
}
