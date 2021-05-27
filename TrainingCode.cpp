#include <stdio.h>



int tinhTong(int soThuNhat, int soThuHai) {
	int ketQua = 0;
	ketQua = soThuNhat + soThuHai;
	return ketQua;
}




void main() {
	int thungChua = 0;
	thungChua = tinhTong(10, 7);
	printf_s("ket qua cua ban la: %d", thungChua);
}