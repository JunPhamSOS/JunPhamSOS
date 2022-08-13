#include <stdio.h>
#include <math.h>
#define MAX 100
//PhamTienDung-211A010371
const long MIN = -1000000000;
void nhapmang(int a[][MAX],int &n,int &m){
	printf("Nhap so phan tu dong:");
	scanf("%d",&n);
	printf("Nhap so phan tu cot:");
	scanf("%d",&m);
	printf("Nhap Phan tu cua mang:\n");
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[][MAX],int n, int m){
	printf("mang vua nhap la:\n");
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
		printf("%d\t",a[i][j]);
		}printf("\n");
	}
}
//a
void Phantulonnhat(int a[][MAX],int n, int m){
	int s=a[0][0];
	for(int i =0;i<n;i++)
		for(int j =0;j<m;j++)
			if(a[i][j]>s)
			s=a[i][j];
		printf("\nPhan tu co gia tri lon nhat la: %d",s);			
}
void Phantunhonhat(int a[][MAX],int n, int m){
	int s=a[0][0];
	for(int i =0;i<n;i++)
		for(int j =0;j<m;j++)
			if(a[i][j]<s)
			s=a[i][j];
		printf("\nPhan tu co gia tri nho nhat la: %d",s);			
}
//b
void KiemTraDongTang(int a[][MAX],int n,int m)
{
        int co=0,i;
        printf("\nvui long nhap dong: ");
        scanf("%d",&i);
        for(int j=0;j<m-1;j++)
         {
         if(a[i][j] > a[i][j+1]) co=1;
         } 
        if(co==1) 
			printf("dong %d khong tang",i);
        else printf("dong %d tang ",i);
     
}
//c
void kiemtradoixung(int a[MAX][MAX],int m,int n)
{
  int i,j;
  int flag=1;
  for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
    if(a[i][j]!=a[j][i])
        flag=0;break;
    }
}
  	if(flag==0)
      printf("\nKHONG DOI XUNG");
  	else
      printf("\nDOI XUNG");
}
//d
bool checkNT(int n,int m) {
    if (n <= 1&&m<=1) return false;
    for (int i = 2; i <(n); i++)
    for (int j = 2; j <= sqrt(m); i++)
        if(n%i==0&&n%j==0)
            return false;
    return true;
}
int Fun(int a[][MAX], int n,int m) {
    long max = MIN;
    for (int i = 0; i < n; i++){
	for (int j = 0; j< m; j++) {
        if (a[i][j] > max && checkNT(n,m) )
            max = a[i][j];
    }}
    if( max == MIN )
        return 0;
    else
        return max;
}
//e
int Tongtamgiactren(int a[][MAX], int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(i<=j)
				sum=sum+a[i][j];
	return sum;
}
int main()
{	int a[MAX][MAX],n,m;
	nhapmang(a,n,m);
	xuatmang(a,n,m);
	Phantulonnhat(a,n,m);
	Phantunhonhat(a,n,m);
	KiemTraDongTang(a,n,m);
	kiemtradoixung(a,n,m);
    if (Fun(a,n,m) == 0)
        printf("\nMang khong ton tai so nguyen to") ;
    else
        printf("\nSo nguyen to lon nhat trong mang la: ",Fun(a,n,m)) ;
	printf("\ntong tam giac trong mang la:%d\n",Tongtamgiactren(a,n,m));
}
