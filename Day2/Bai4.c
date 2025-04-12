/*
 * Bai4.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0x4F63; // Số ban đầu
    uint32_t mask_clear = ~(0x07E0); // Mask để xóa bit 10-5
    uint32_t new_value = (0x3E << 5); // Giá trị 0x3E dịch trái 5 bit

    num = (num & mask_clear) | new_value; // Xóa rồi set bit mới

    printf("Gia tri sau khi set bit [10:5] thanh 0x3E: 0x%X\n", num);
    getchar();
    getchar();
    return 0;
}

