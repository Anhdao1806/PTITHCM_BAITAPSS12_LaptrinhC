#include <stdio.h>

int isPrime(int a) {
    if (a <= 1) return 0;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
        return 0;
    }
    return 1;
}
int main() {
    int so1 , so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    if (isPrime(so1)) {
    printf("true\n");
    }
    else {
    printf("false\n");
    }
    if (isPrime(so2)) {
    printf("true\n");
    }
    else {
    printf("false\n");
    }
 return 0;
}
