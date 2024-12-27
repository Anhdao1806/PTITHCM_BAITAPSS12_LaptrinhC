#include <stdio.h>
int tinhTong(int a, int b) {
    return a + b;
}
int main() {
    int so1, so2, tong;

printf("Nhap so thu 1: ");
scanf("%d", &so1);
printf("Nhap so thu 2: ");
scanf("%d", &so2);
tong = tinhTong(so1, so2);
printf(" %d + %d = %d\n", so1, so2, tong);

    return 0;
}

