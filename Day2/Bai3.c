/*
 * Bai3.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t n;
	printf("Nhap n: ");
	scanf("%u", &n);
	uint32_t mask=(1 << 4)|(1 << 5)|(1 << 6);
	// Xóa bit bằng AND với phủ định của mask
	n = n & ~mask;
	printf("Gia tri sau khi xoa bit 4, 5, 6: %u\n", n);
	getchar(); // Lấy Enter còn sót lại
	getchar(); // Đơi người dùng nhấn phím trước khi thoát
	return 0;
}

