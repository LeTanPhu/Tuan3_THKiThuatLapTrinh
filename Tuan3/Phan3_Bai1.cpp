#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void TaoM2C(int a[][100], int &n,int &m) {
	printf("Moi ban nhap so dong:");
	scanf("%d", &n);
	printf("Moi ban nhap so cot:");
	scanf("%d", &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 100;
		}
	}
}
void XuatM2C(int a[][100], int n,int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void TinhTongTungDong(int a[][100], int n,int m) {
	for (int i = 0; i < n; i++)
	{
		int tong = 0;
		for (int j = 0; j < m; j++) {
			tong = tong + a[i][j];
		}
		printf("\nTong cua dong %d la:%d", i, tong);
	}
}
int main() {
	int a[100][100];
	int n,m;
	TaoM2C(a, n,m);
	XuatM2C(a, n,m);
	TinhTongTungDong(a, n,m);
	getch();
}