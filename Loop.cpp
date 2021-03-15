// a.    for
// Viết chương trình tính tổng các số từ 2 đến n. với n nhập từ bàn phím
// Viết chương trình tính tích các số từ 1 đến n với n nhập từ bàn phím
// b.    while
// Viết chương trình tính tổng các số từ 4 đến n với n nhập từ bàn phím. Sử dụng while
// c.    do…while
// Viết chương trình nhập vào mật khẩu, kiểm tra đến khi đúng thì dừng lại và in ra “Đã truy cập vào hệ thống”, sai thì báo lỗi.
#include <stdio.h>
#define MAX 50
#include <string.h>
void enter (int &n);
void enter(char matkhau[15]);
int tong2(int n);
int tong4(int n);
int tich(int n );
int main (){
    int n;
    char matkhau[15];
    enter(n);
    printf ("Tong tu 2 den n = %d",tong2(n));
    printf ("\nTong tu 4 den n = %d",tong4(n));
    printf ("\nTich tu 1 den n = %d",tich(n));
    enter(matkhau);
    return 0;
}
void enter (int &n){
    do{
    printf ("Enter n: ");
    scanf("%d",&n);
    if (n <= 0 || n > MAX){
        printf ("Enter n again: ");
        scanf("%d",&n);
    }
    }while((n <= 0 || n > MAX));
}
//2 đến n
int tong2(int n){
    int sum = 0;
    for (int i = 2; i <= n; i++){
        sum += i;
    }
    return sum;
}
//1 đến n
int tich(int n ){
    int a = 1;
    for (int i = 1; i <= n; i++){
        a *= i;
    }
    return a;
}
//4 đến n
int tong4(int n){
    int sum = 0;
    int i = 4;
    while (i <= n){
        sum += i;
        i++;
    }
    return sum ;
}
void enter(char matkhau[15]){
    fflush(stdin);
    do{
        printf ("\nNhap mat khau: ");
        gets(matkhau);
        if(strcmp(matkhau, "aibiet") != 0){
            printf("LOI =))");
        }else {
                printf ("Da Truy Cap Vao He Thong!!!");
        }
    }while(strcmp(matkhau, "aibiet") != 0);
}
