#include <stdio.h>
#define MAX 100
//PhamTienDung-211A010371-buoi14-bai1
void nhapmang(int a[][MAX],int &dong,int &cot){
	printf("Nhap so phan tu dong:");
	scanf("%d",&dong);
	printf("Nhap so phan tu cot:");
	scanf("%d",&cot);
	printf("Nhap Phan tu cua mang:\n");
	for(int i =0;i<dong;i++){
		for(int j =0;j<cot;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[][MAX],int dong, int cot){
	printf("mang vua nhap la:\n");
	for(int i =0;i<dong;i++){
		for(int j =0;j<cot;j++){
		printf("%d\t",a[i][j]);
		}printf("\n");
	}
}
int main()
{	int a[MAX][MAX],dong,cot;
	nhapmang(a,dong,cot);
	xuatmang(a,dong,cot);
}
