#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapbac(int &n);
void nhapdathuc(int a[], int n);
void xuat(int a[], int n);
void nhapan(int &x);
float tinh(int a[], int x, int n);
void xuattong(int a[], int x, int n);
int main()
{
    int a[MAX], b[MAX],n, m, x1, x2;
    nhapbac(n);
    nhapdathuc(a,n);
    nhapbac(m);
    nhapdathuc(b, m);
    printf("\nDa thuc 1 ban dau:");
    xuat(a,n);
    printf("Da thuc 2 ban dau:");
    xuat(b, m);
    nhapan(x1);
    nhapan(x2);
    printf("\n-----Da Thuc-----");
    printf("\nDa thuc 1:");
    xuattong(a, x1, n);
    printf("Da thuc 2:");
    xuattong(b, x2, m);
    printf("-----------------\n");
    printf("\n---------------TINH DA THUC----------------");
    printf("\nTong cua 2 da thuc la: %.2f",tinh(a,x1,n)+tinh(b,x2,m));
    printf("\nHieu cua 2 da thuc la: %.2f",tinh(a,x1,n)-tinh(b,x2,m));
    printf("\nTich cua 2 da thuc la: %.2f",tinh(a,x1,n)*tinh(b,x2,m));
    printf("\nThuong cua 2 da thuc la: %.2f\n",tinh(a,x1,n)/tinh(b,x2,m));
    printf("-------------------------------------------");
    return 0;
}
void nhapbac(int &n){
    printf("Nhap bac cua da thuc: ");
    scanf("%d", &n);
}
void nhapdathuc(int a[], int n){
    for(int i=0;i<=n;i++){
        printf("Nhap gia tri x^%d:",i);
        scanf("%d",&a[i]); 
    }
}
void xuat(int a[], int n){
    for(int i=n; i>=0; i--){
        if(i>0){
            printf("%dx^%d+", a[i], i);
        }else{
            printf("%dx^%d=", a[i], i);
        }
    }
    printf("0");
    printf("\n");
}
void nhapan(int &x){
    printf("Nhap x: ");
    scanf("%d", &x);
}
float tinh(int a[], int x, int n){
    float sum = 0;
    for(int i= 0;i<=n;i++){
        sum+=a[i]*pow(x,i);
    }
    return sum;
}
void xuattong(int a[], int x, int n){
    for(int i=n; i>=0; i--){
        if(i>0){
            printf("%dx^%d+", a[i], i);
        }else{
            printf("%dx^%d=", a[i], i);
        }
    }
    printf("%.2f",tinh(a,x,n));
    printf("\n");
}
