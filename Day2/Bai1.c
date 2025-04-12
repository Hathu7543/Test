#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t number;

    while (1) {  // Lặp vô hạn, nhấn Ctrl+C để dừng
        printf("Nhap so can xet (Nhap -1 de thoat): ");
        scanf("%d", &number);

        if (number == -1) {  // Thoát nếu nhập -1
            break;
        }

        if (number & 1)
        {
            printf("Number even\n");
        } else {
            printf("Number odd\n");
        }
    }

    return 0;
}
