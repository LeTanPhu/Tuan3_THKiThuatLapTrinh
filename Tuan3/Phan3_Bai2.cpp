#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>
void TaoMaTranVuong(int a[][100], int& n) {
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
			if (i > j) printf("%d\t", a[i][j]);
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
			if (i < j) {
				if (a[i][j] > max) max = a[i][j];
			}
		}
	}
	printf("\nPhan tu max thuoc tam giac tren cua duong cheo chinh la %d", max);
}
void DoiCho(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void SXZicZac(int a[][100], int n) {
	int index = 0;
	int j = n - 2;
	int q = 1;
	int m = (3 * n) - 2;
	int b[100];
	for (int i = 0; i < n; i++)
	{
		b[index] = a[0][i];
		index++;
	}
	while (j>0 && q<n-1)
	{
		b[index] = a[q][j];
		j--;
		q++;
		index++;
	}
	for (int k = 0; k < n; k++)
	{
		b[index] = a[n - 1][k];
		index++;
	}
	for (int i = 0; i < m-1; i++)
	{
		for (int e=i+1; e < m; e++) {
			if (b[i] > b[e]) DoiCho(b[i], b[e]);
		}
	}
	index = 0;
	q = 1;
	j = n - 2;
	for (int i = 0; i < n; i++)
	{
		a[0][i]=b[index];
		index++;
	}
	while (j > 0 && q < n - 1)
	{
		a[q][j]=b[index];
		j--;
		q++;
		index++;
	}
	for (int k = 0; k < n; k++)
	{
		a[n - 1][k]=b[index];
		index++;
	}
}
void SapXepDCC(int a[][100], int n) {
	int b = 0, c = n - 1;
	int d = 0, e = 1;;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++) {
			if (a[i][i] > a[j][j]) {
				DoiCho(a[i][i], a[j][j]);
			}
		}
	}
}
int main() {
	int a[100][100],b[100][100],c[100][100];
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
	printf("\n5.Sap xep theo kieu Zic Zac\n");
	TaoMaTranVuong(b, n);
	SXZicZac(b, n);
	XuatMTVuong(b, n);
	printf("\n6.Sap xep duong cheo chinh tang dan tu tren xuong duoi\n");
	TaoMaTranVuong(c, n);
	SapXepDCC(c, n);
	XuatMTVuong(c, n);
	getch();
}
