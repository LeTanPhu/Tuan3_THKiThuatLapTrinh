#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void TaoMaTranVuong(int a[][100], int &n) {
	printf("Nhap cap cua ma tran vuong:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 100;
		}
	}
}
void XuatMTVuong(int a[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void XuatPTCheoChinh(int a[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (i == j) printf("%d\t", a[i][j]);
		}
	}
}
void XuatPTSongSongCheoChinh(int a[][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (i>j) printf("%d\t", a[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (i < j) printf("%d\t", a[i][j]);
		}
	}
}
void TimMaxTamGiacTren(int a[][100], int n) {
	int max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (i < j ) {
				if (a[i][j]>max) max = a[i][j];
			}
		}
	}
	printf("\nPhan tu max thuoc tam giac tren cua duong cheo chinh la %d", max);
}
int main() {
	int a[100][100];
	int n;
	printf("\n1.Tao va xuat ma tran vuong cap n\n");
	TaoMaTranVuong(a, n);
	XuatMTVuong(a, n);
	printf("\n2.Xuat cac phan tu tren duong cheo chinh\n");
	XuatPTCheoChinh(a, n);
	printf("\n3.Xuat cac phan tu thuoc duong cheo song song voi duong cheo chinh\n");
	XuatPTSongSongCheoChinh(a, n);
	printf("\n4.Phan tu max thuoc tam giac tren cua duong cheo chinh");
	TimMaxTamGiacTren(a, n);
	getch();
}
