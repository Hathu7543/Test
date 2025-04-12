/*
 * Bai8.c
 *
 *  Created on: 31 thg 3, 2025
 *      Author: ADMIN
 */
#include <stdio.h>
#include <math.h>
int main()
{
	char choice;
	double area;
	// Hiển thị menu
	printf("Chon hinh de tinh dien tich: \n");
	printf(" 't' - Hinh tam giac\n");
	printf(" 'z' - Hinh thang\n");
	printf(" 'c' - Hinh tron\n");
	printf(" 's' - Hinh vuong\n");
	printf(" 'r' - Hinh chu nhat\n");
	printf("Nhap ma hinh: ");
	scanf(" %c", &choice); // Lưu ý khoảng trắng trước %c để tránh lỗi nhập
	// Tính diện tích theo lựa chọn
	switch (choice)
	{
		case 't':
		{
			double base, height;
			printf("Nhap chieu dai da-: ");
			scanf("%lf", &base);
			printf("Nhap chieu cao: ");
			scanf("%lf", &height);
			area = (base * height) / 2;
			printf("Dien tich tam giac: %.2lf\n", area);
			break;
		}
		case 'z':
		{
			double base1, base2, height;
			printf("Nhap da- nho: ");
			scanf("%lf", &base1);
			printf("Nhap da- lon: ");
			scanf("%lf", &base2);
			printf("Nhap chieu cao: ");
			scanf("%lf", &height);

			area = ((base1 + base2) * height) / 2;
			printf("Dien tich hinh thang: %.2lf\n", area);
			break;
		}
		case 'c':
		{
			double radius;
			printf("Nhap ban kinh: ");
			scanf("%lf", &radius);
			area = M_PI * radius * radius; // M_PI từ math.h
			printf("Dien tich hinh tron: %.2lf\n", area);
			break;
		}
		case 's':
		{
			double side;
			printf("Nhap canh hinh vuong: ");
			scanf("%lf", &side);
			area = side * side;
			printf("Dien tich hinh vuong: %.2lf\n", area);
			break;
		}
		case 'r':
		{
			double length, width;
			printf("Nhap chieu dai: ");
			scanf("%lf", &length);
			printf("Nhap chieu rong: ");
			scanf("%lf", &width);
			area = length * width;
			printf("Dien tich hinh chu nhat: %.2lf\n", area);
			break;
		}
		default:
		printf("Ma nhap khong hop le!\n");
	}
	getchar();
	getchar();
	return 0;
}

