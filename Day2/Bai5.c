/*
 * Bai5.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t age;

	while(1)
	{
		// Nhập độ tuổi từ người dùng
		printf("Nhap tuoi cua ban: ");
		scanf("%u", &age);

		// Kiểm tra điều kiện
		if (age >= 18)
		{
			printf("Ban du dieu kien de bo phieu. \n");
		} else {
			printf("Ban chua du dieu kien de bo phieu. \n");

		}
	}
	getchar();
	getchar();
	return 0;
}

