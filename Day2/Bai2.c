/*
 * Bai2.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t num;
    printf("Nhap mot so nguyen: ");
    scanf("%u", &num);
    num = num | (1 << 4) | (1 << 7);
    printf("Gia tri sau khi bat bit thu 4 va 7: %d\n", num);
    getchar();
    getchar();
    return 0;
}


