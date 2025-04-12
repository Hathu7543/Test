#include <stdio.h>
#include <stdint.h>

int main()
{
float thu_nhap, thue_phai_nop = 0;
while(1){
	printf("Nhap tong thu nhap ca nhan (VND/nam): ");
	scanf("%f", &thu_nhap);

	if(thu_nhap <= 5000000){
	thue_phai_nop = thu_nhap * 0;
	}else if(thu_nhap <= 15000000){
	thue_phai_nop = thu_nhap * 0.05;
	}else if(thu_nhap <= 20000000){
	thue_phai_nop = thu_nhap * 0.1;
	}else{
	thue_phai_nop - thu_nhap * 0.15;
	}
	printf("Thue thu nhap ca nhan phai nop la: %.2f VND.\n", thue_phai_nop);
	printf("-----------------------------------------------------\n");
	}
	getchar(); // Lấy Enter còn sót lại
	getchar(); // Đợi người dùng nhãn phím trước khi thoát
	return 0;
}
