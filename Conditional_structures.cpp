// Viết chương trình xếp loại sinh viên theo điểm
// + sử dụng if…else if…else
// + sử dụng switch…case
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
struct SinhVien {
    char Ten[30];
    int Diem;
    int Masosinhvien;

};
void enter (SinhVien *sinhvien);
void enter (SinhVien *sinhvien, int &sosinhvien);
void sapxep (SinhVien *sinhvien,int sosinhvien);
void print (SinhVien *sinhvien,int sosinhvien);
void menu (SinhVien *sinhvien,int sosinhvien);
int main (){
    SinhVien *sinhvien;
    int sosinhvien;
    sinhvien = (SinhVien *) malloc(sizeof(SinhVien));
    menu(sinhvien,sosinhvien);
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
        enter(&*(sinhvien+i));// sinh viên +1
    }
}
void sapxep(SinhVien *sinhvien,int sosinhvien){
    for (int i = 0; i < sosinhvien;i++){
        if((sinhvien+i)->Diem < 5){
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem kem co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten);
        }else if((sinhvien+i)->Diem >= 5 && (sinhvien+i)->Diem < 6){
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem yeu co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten); 
        }else if((sinhvien+i)->Diem >= 6 && (sinhvien+i)->Diem < 7){
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem trung binh co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten);
        }else if((sinhvien+i)->Diem >= 7 && (sinhvien+i)->Diem < 8){
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem kha co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten);
        }else if((sinhvien+i)->Diem >= 8 && (sinhvien+i)->Diem < 9){
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem gioi co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten);
        }else{
            printf("Sinh vien co diem :%d\n",(sinhvien+i)->Diem);
            printf("Sinh vien diem xuat sac co ma so sinh vien %d,ten: %s\n",(sinhvien+i)->Masosinhvien,(sinhvien+i)->Ten);
        }
    }
}
void print (SinhVien *sinhvien,int sosinhvien){
    for (int i = 0; i < sosinhvien;i++){
        printf("Sinh vien %d Ten:%-10s Ma So:%d\n",i+1,(sinhvien+i)->Ten,(sinhvien+i)->Masosinhvien);
    }
}
void menu (SinhVien *sinhvien,int sosinhvien){
    int choise;
    char k,c;
    do {
        printf("\n==============================\n");
        printf("\n1.Nhap thong tin !!!");
        printf("\n2.Thu Hang");
        printf("\n3.Thong ke");
        printf("\nYour choise:");
        scanf("%d",&choise);
        switch (choise){
            case 1: enter(sinhvien,sosinhvien);
            break;
            case 2: sapxep(sinhvien,sosinhvien);
            break;
            case 3: print(sinhvien,sosinhvien);
            break;
            default: printf ("\nEnter again!!!\n");
            break;
        }
        printf ("\nDo you want to exit?(esc)");
        k = getch();
        c = k;
    }while(c != 27);
}
