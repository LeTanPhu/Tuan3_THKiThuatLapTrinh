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
int main() {
	int a[100][100];
	int n;
	printf("\n1.Tao va xuat ma tran vuong cap n\n");
	TaoMaTranVuong(a, n);
	XuatMTVuong(a, n);
	printf("\n2.Xuat cac phan tu tren duong cheo chinh\n");
	XuatPTCheoChinh(a, n);
	getch();
}