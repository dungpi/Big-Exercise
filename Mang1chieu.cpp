// Bài 5: mảng 1 chiều
// -    Nhập xuất mảng 1 chiều
// -    Tìm giá trị max trong mảng một chiều
// -    Tìm vị trí max trong mảng một chiều
// -    tìm top n cac phan tu, với n nhap từ bàn phím
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void enter (int *array,int &n);
void positionMax (int *array,int n);
void print (int *array, int n);
void sapXepGiam (int *array,int n);
void printtop (int *array,int n);
int main (){
    int *array,n;
    array = (int *) malloc(sizeof(int));
    do {
        printf ("Nhap n so nguyen: ");
        scanf ("%d",&n);
        if (n <= 0||n > MAX){
            printf ("Nhap lai n: ");
            scanf ("%d",&n);
        }
    }while(n <= 0 || n > MAX);
    enter(array,n);
    print(array,n);
    printf("\n===========MAX===========");
    positionMax(array,n);
    sapXepGiam(array,n);
    printtop (array,n);
    return 0;
}
void enter (int *array,int &n){
    printf ("====Nhap cac phan tu====\n");
    for (int i = 0;i < n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&*(array+i));
    }
}
void print (int *array, int n){
    printf("===Cac Phan Tu Da Nhap===");
    for (int i = 0;i < n;i++){
         printf("\na[%d] = %d\t",i,*(array+i));
    }
}
void positionMax (int *array,int n){
    int pos;
    int max = *(array+0);
    for (int i = 0;i < n;i++){
        if (*(array+i)> max){
            max = *(array+i);
            pos = i;
        }
    }
    printf("\nGia tri Max: %d,Vi tri:%d\n",max,pos);
}
void sapXepGiam (int *array,int n){
	int temp;
	for (int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if (*(array+i) < *(array+j)){
				temp = *(array+i);
				*(array+i) = *(array+j);
				*(array+j) = temp;
			}
		}
	}	
}
void printtop (int *array,int n){
    printf("\n===========TOP===========");
    for (int i = 0;i < n;i++){
         printf("\nTop %d = %d\t",i+1,*(array+i));
    }
}
