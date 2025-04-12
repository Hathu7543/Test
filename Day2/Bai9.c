/*
 * Bai9.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t n = 1;
	while(n <= 10){
	printf("So: %u. \n", n);
	n ++;

	}

	getchar(); // Lấy Enter còn sót lai
	getchar(); // Đơi người dùng nhấn phím trước khi thoát
	return 0;
}
