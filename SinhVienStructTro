// thuộc tính:  họ tên, giới tính, điểm toán, lí, hóa
// a. nhập xuất 1 sinh viên
// b. tính điểm trung bình của sinh viên đó
// yêu cầu:
// - lập trình hàm
// - nếu sử dụng con trỏ thì càng tốt
// - lưu vào file: sinhvien.cpp
#include <stdio.h>
#include <stdlib.h>
struct Diem {
    float Toan;
    float Ly;
    float Hoa;
    float average;
};
struct SinhVien {
    char Ten[30];
    char GioiTinh [30];
    Diem *diem;
};
void enter (Diem *diem);
void print (Diem *diem);
void enter (SinhVien *sinhvien);
void print (SinhVien *sinhvien);
float average (Diem *diem);
int main (){
    Diem *diem;
    SinhVien *sinhvien;
    sinhvien = (SinhVien *) malloc(1*sizeof(sinhvien));
    diem = (Diem *) malloc(1*sizeof(Diem));
    enter(sinhvien);
    enter(diem);
    print(sinhvien);
    print(diem);
    return 0;
}
void enter (Diem *diem){
    do {
    printf("\nNhap diem Toan: ");
    scanf("%f",&diem->Toan);
    }while(diem->Toan < 0 || diem->Toan >10.0);
    do{
    printf("Nhap diem Ly: ");
    scanf("%f",&diem->Ly);
    }while(diem->Ly < 0 || diem->Ly >10.0);
    do {
    printf("Nhap diem Hoa: ");
    scanf("%f",&diem->Hoa);
    }while(diem->Hoa < 0 || diem->Hoa >10.0);
}
void print (Diem *diem){
    printf("\nToan: %.2f||Ly: %.2f||Hoa: %.2f",diem->Toan,diem->Ly,diem->Hoa);
    printf("\nAverage: %.2f",average(diem));
    printf("\n---------------------------------\n");
}
void enter (SinhVien *sinhvien){
    fflush(stdin);
    printf("\nNhap Ho Ten: ");
    gets(sinhvien->Ten);
    printf("Nhap Gioi Tinh: ");
    gets(sinhvien->GioiTinh);
}
void print (SinhVien *sinhvien){
    printf("\n------------Bang Diem------------");
    printf("\nSinh Vien Ten: %s",sinhvien->Ten);
    printf("\nGioi Tinh: %s",sinhvien->GioiTinh);
}
float average (Diem *diem){
    float sum = 0;
    sum += (diem->Toan+ diem->Ly+ diem->Hoa)/3;
    return sum;
}
