// Viết chương trình xếp loại sinh viên theo điểm
// + sử dụng if…else if…else
// + sử dụng switch…case
#include <stdio.h>
#include<stdlib.h>
struct SinhVien {
    char Ten[30];
    int Diem;
    int Masosinhvien;

};
void enter (SinhVien *sinhvien);
void enter (SinhVien *sinhvien, int &sosinhvien);
void sapxep (SinhVien *sinhvien,int sosinhvien);
void print (SinhVien *sinhvien);

int main (){
    SinhVien *sinhvien;
    int sosinhvien;
    sinhvien = (SinhVien *) malloc(sizeof(SinhVien));
    enter(sinhvien,sosinhvien);
    sapxep (sinhvien,sosinhvien);
    return 0;
}
void enter (SinhVien *sinhvien){
    printf("Nhap ma sinh vien: ");
    scanf("%d",&sinhvien->Masosinhvien);
    fflush(stdin);
    printf("Nhap ten sinh vien: ");
    gets(sinhvien->Ten);
    printf ("Nhap diem: ");
    scanf ("%d",&sinhvien->Diem);
}
void enter (SinhVien *sinhvien, int &sosinhvien){
    fflush(stdin);
    printf ("Nhap So Luong Sinh Vien: ");
    scanf("%d",&sosinhvien);
    sinhvien = (SinhVien*)realloc(sinhvien,(sosinhvien)*sizeof(SinhVien));
    for (int i = 0; i < sosinhvien; i++){
        printf ("\n--------------------------------");
        printf ("\nNhap thong tin Sinh Vien %d\n",i+1);
        enter(&*(sinhvien+1));
    }
}
void sapxep (SinhVien *sinhvien,int sosinhvien){
    for (int i = 0; i < sosinhvien;i++){
        if (sinhvien->Diem < 5){
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem kem co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten);
        }
        if (sinhvien->Diem > 5 || sinhvien->Diem < 6){
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem yeu co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten); 
        }
        if (sinhvien->Diem > 6 || sinhvien->Diem < 7){
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem trung binh co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten);
        }
        if  (sinhvien->Diem > 7 || sinhvien->Diem < 8){
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem kha co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten);
        }
        if  (sinhvien->Diem > 8 || sinhvien->Diem < 9){
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem gioi co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten);
        }
        else {
            printf("Sinh vien co diem :%d",sinhvien->Diem);
            printf("Sinh vien diem xuat sac co ma so sinh vien %d,ten: %s",sinhvien->Masosinhvien,sinhvien->Ten);
        };
    }
}

