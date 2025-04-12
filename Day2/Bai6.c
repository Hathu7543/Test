/*
 * Bai6.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t n1, n2;
	while(1)
	{
		// Nhập hai số nguyên
		printf("Nhap so thu nhat: ");
		scanf("%u", &n1);
		printf("Nhap so thu hai: ");
		scanf("%u", &n2);
		// So sánh hại số và in kết quả
		if (n1 > n2)
		{
			printf("So lon hon la: %u\n", n1);
		}
		else if (n1 < n2)
		{
			printf("So lon hon la: %u\n", n2);
		}
		else
		{
			printf("Ca 2 so deu bang nhau. \n");
		}
	}
	getchar(); // Lấy Enter còn sót lại
	getchar(); // Đơi người dùng nhấn phím trước khi thoát
	return 0;
}
