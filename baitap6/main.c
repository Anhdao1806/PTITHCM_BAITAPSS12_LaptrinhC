#include <stdio.h>
int isPerfect(int a) {
    if (a <= 0) return 0;
    int tong = 0;
    for (int i = 1; i <= a / 2; i++) {
    if (a % i == 0) tong += i;
    }
    return (tong == a);
}
int main() {
    int so1, so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu 2: ");
    scanf("%d", &so2);
    if (isPerfect(so1)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    if (isPerfect(so2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}

