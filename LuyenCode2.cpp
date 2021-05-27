#include <stdio.h>



float TinhHieu(float soThuNhat, float soThuHai) {
	float ketQua = 0;
	ketQua = soThuNhat - soThuHai;
	return ketQua ;

}



void main() {
	float ThungChua = 0;
	ThungChua = TinhHieu(10.2, 3.5);
	printf_s("ket qua cua ban la: %f", ThungChua);




}