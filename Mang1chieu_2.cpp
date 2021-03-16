// Bài 1: 
// - nhập xuất mảng 1 chiều
// - tìm phần tử lớn nhất, nhỏ nhất
// - tìm top n phần tử lớn nhất. Với n nhập từ bàn phím
// - tìm tổng của các số chẵn có trong mảng
//TODO: add- đếm số cặp số liền kề nhau mà trong mảng thỏa mãn: số sau > số trước 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 50
void enter (int *array,int &n);
void print (int *array, int n);
void findMax (int *array,int n);
void findMin (int *array,int n);
void tongChan (int *array,int n);
void count (int *array,int n);
void sapXepGiam (int *array,int n);
void printtop (int *array,int n);
void menu (int *array,int n);
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
    menu (array,n);
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
void findMax (int *array,int n){
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
void findMin (int *array,int n){
    int pos;
    int min = *(array+0);
    for (int i = 0;i < n;i++){
        if (*(array+i) < min){
            min = *(array+i);
            pos = i;
        }
    }
    printf("Gia tri Min: %d,Vi tri:%d\n",min,pos);
}
void tongChan (int *array,int n){
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (*(array+i) % 2 == 0){
            sum += *(array+i);
            count ++;
        }
    }
    if (count == 0){
        printf("Khong co gia tri chan trong mang!!!");
    }
    else{
        printf("Mang co %d so chan tong gia tri la: %d",count,sum);
    }
}
void count (int *array,int n){

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
void menu (int *array,int n){
    int choise ;
    char k,c ;
    do{
        printf("\n===========MENU==========\n");
        printf("0.Xuat gia tri da nhap\n");
        printf("1.Gia tri lon nhat\n");
        printf("2.Gia tri nho nhat\n");
        printf("3.Tinh tong so chan\n");
        printf("4.Top n phan tu\n");
        printf("Your choise:");
        scanf("%d",&choise);
        switch (choise){
            case 0: print(array,n);
                break;
            case 1:findMax(array,n);
                break;
            case 2:findMin(array,n);
                break;
            case 3:tongChan(array,n);
                break;
            case 4:sapXepGiam(array,n);
                    printtop(array,n);
                break;
        }
        printf("\nDo you want to exit ?(esc)");
        k = getch();
        c = k;
    }while(c != 27);
}
