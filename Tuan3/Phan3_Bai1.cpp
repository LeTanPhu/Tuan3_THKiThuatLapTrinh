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
void XuatPTMaxTungCot(int a[][100], int n, int m) {
	for (int j = 0; j < n; j++)
	{
		int max = 0;
		for (int i = 0; i < m; i++) {
			if (a[i][j]>max) max = a[i][j];
		}
		printf("\nPhan tu lon nhat tren cot %d la %d",j,max);
	}
}
void XuatDongChiChuaChan(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++)
	{
		int dem = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 == 0)  dem++;
		}
		if (dem == m) printf("%d\t", a[i][m]); else printf("\nDong %d khong chua toan so chan", i);
	}
}
void XuatPTCacDuongBien(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i][0]);
	}
	printf("\n");
	for (int i = 0; i < m; i++)
	{
		printf("%d\t", a[0][i]);
	}
	printf("\n");
	for (int i = 0; i < m; i++)
	{
		printf("%d\t", a[n-1][i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", a[i][m-1]);
	}
}
void XuatCacPTCucDai(int a[][100], int n,int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (a[i][j]>a[i + 1][j] && a[i][j]>a[i][j + 1] && a[i][j] >a[i - 1][j] && a[i][j] > a[i][j - 1]) {
				printf("%d\t", a[i][j]);
			}
		}
	}
}
void SapXepMangATang(int a[][100], int n, int m) {
	int c=0;
	while (c<n)
	{
		for (int i = 0; i < m - 1; i++) {
			for (int j = i + 1; j<m; j++) {
				if (a[c][i]>a[c][j]) {
					int temp = a[c][i];
					a[c][i] = a[c][j];
					a[c][j] = temp;
				}
			}
		}
		c++;
	}
}

int main() { 
	int a[100][100];
	int b[100][100];
	int n,m;
	printf("\n1.Tao mang 2 chieu va xuat mang 2 chieu\n");
	TaoM2C(a, n,m);
	XuatM2C(a, n,m);
	printf("\n2.Tinh va xuat tong gia tri tung dong");
	TinhTongTungDong(a, n,m);
	printf("\n3.Xuat phan tu lon nhat tren tung cot");
	XuatPTMaxTungCot(a,n,m);
	printf("\n4.Xuat cac phan tu thuoc cac duong bien\n");
	XuatPTCacDuongBien(a, n, m);
	printf("\n5.Xuat cac so cuc dai\n");
	XuatCacPTCucDai(a, n, m);
	printf("\n6.Xuat dong chi chua so chan");
	XuatDongChiChuaChan(a, n, m);
	printf("\n7.Sap xep mang tang theo tung dong\n");
	SapXepMangATang(a, n, m);
	XuatM2C(a, n, m);
	getch();
}
