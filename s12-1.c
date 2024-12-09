#include <stdio.h>

void tinh_tong(int a, int b) {
    int tong = a + b; 
    printf("Tong cua %d + %d = %d\n", a, b, tong);  
}
int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    tinh_tong(x, y);

    return 0;
}
