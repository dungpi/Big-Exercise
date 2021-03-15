// Bài 4: Viết hàm
// -    Nhập 1 số, nhập 2 số, nhập một mảng 1 chiều
// -    Xuất tổng, xuất hiệu 2 số
#include <stdio.h>
#define MAX 50
void enter (int &a);
void enter (int &b,int &c);
void printsum (int b,int c);
void enter (int *array,int &n);

int main (){
    int a,b,c,n,*array;
    enter (a);
    enter(b,c);
    printsum (b,c);
    do {
        printf ("Nhap n so nguyen: ");
        scanf ("%d",&n);
        if (n <= 0||n > MAX){
            printf ("Nhap lai n: ");
            scanf ("%d",&n);
        }
    }while(n <= 0 || n > MAX);
    enter(array,n);
    return 0;
}
void enter (int &a){
    printf ("Nhap 1 so: ");
    scanf ("%d",&a);
}
void enter (int &b,int &c){
    printf ("====Nhap 2 so====\n");
    printf ("Nhap so dau: ");
    scanf ("%d",&b);
    printf ("Nhap so cuoi: ");
    scanf ("%d",&c);
}
void printsum (int b,int c){
    printf ("Tong 2 so: %d\n",b+c);
    printf ("Hieu 2 so: %d\n",b-c);
}
void enter (int *array,int &n){
    printf ("====Nhap cac phan tu====");
    for (int i = 0;i < n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",array+i);
    }
}
