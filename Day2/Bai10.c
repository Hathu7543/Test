/*
 * Bai10.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <stdint.h>

int main()
{

uint32_t count = 0;

printf("Cac so chan tu 0 den 100:\n");
for (uint32_t i = 0; i <= 100; i += 2) {
printf("%u ", i);
count++; // Đếm số chẵn
}
printf("\nTong so luong cac so chan: %u\n", count);

getchar();
getchar();
return 0;
}

