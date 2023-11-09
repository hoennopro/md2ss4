#include <stdio.h>

int main() {
    float luongCoBan, ngayCongThucTe, luong, ngayCongDu;
    const int ngayCongTrongThang = 26;
    
    printf("Nhap luong co ban: ");
    scanf("%f", &luongCoBan);
    printf("Nhap so ngay cong thuc te: ");
    scanf("%f", &ngayCongThucTe);

	 ngayCongDu = ngayCongThucTe - ngayCongTrongThang;
    if (ngayCongThucTe <= ngayCongTrongThang) {
        luong = luongCoBan * (ngayCongThucTe / ngayCongTrongThang);
    } else {
        luong = luongCoBan * (ngayCongThucTe / ngayCongTrongThang) + ((luongCoBan * 1.5) * ngayCongDu);
    }

    printf("Luong cua nhan vien: %f\n", luong);

}

