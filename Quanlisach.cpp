#include <stdio.h>
#include <stdlib.h>
struct DateTime{
    int day;
    int month;
    int year;
};
struct Tacgia{
    char matacgia[30];
    char tentacgia[30];
    DateTime *ngaysinh;   
};
struct Nhaxuatban{
    char manhaxuatban [30];
    char tennhaxuatban [30];
    DateTime *namxuatbanx;
};
struct Sach{
    char masach [30];
    char ten[30];
    Tacgia *tacgia;
    Nhaxuatban *nhaxuatban;
    int soluong;
    float gia;
};
struct Nguoimuon{
    char manguoimuon[30];
    Sach *sach;
};
void enter (DateTime *time );
void enter (Nhaxuatban *nhaxuatban);
void enter (Tacgia *tacgia);
void print (DateTime *time);
void print (Nhaxuatban *nhaxuatban);
bool validDay(DateTime *time);
bool leapYear(DateTime *time);
int main (){
    DateTime *time;
    Nhaxuatban *nhaxuatban;
    Tacgia *tacgia;

    time = (DateTime *)malloc(sizeof(DateTime));
    nhaxuatban = (Nhaxuatban *)malloc(sizeof(Nhaxuatban));
    tacgia= (Tacgia*)malloc(sizeof(Tacgia));

    enter(nhaxuatban);
    print(nhaxuatban);
    enter(time);
    print(time);
    return 0;
}
void enter (DateTime *time ){
    do{
    printf ("\nNhap Ngay: ");
    scanf ("%d",&time -> day);
    printf ("Nhap Thang: ");
    scanf ("%d",&time -> month);
    printf ("Nhap Nam: ");
    scanf ("%d",&time -> year);
    }while(!validDay(time));
}
bool validDay(DateTime *time){ //kiểm tra ngày tháng
    bool validDay = true;
    if (time->month < 0 || time->month > 12){
        validDay = false;
    }
    else{
        switch (time->month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (time->day < 1 || time->day > 31){
                validDay = false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (time->day < 1 || time->day > 30){
                validDay = false;
            }
            break;
        case 2:
            if (leapYear(time) && (time->day < 1 || time->day > 29)){
                validDay = false;
            }
            break;
        }
    }
    return validDay;
}
bool leapYear(DateTime *time){
    return time->year % 4 == 0;
}
void print (DateTime *time){
    printf("Ngay Thang Nam xuat ban:%.2d/%.2d/%.4d",time->day,time->month,time->year);
}
void enter(Nhaxuatban *nhaxuatban){
    printf("Nhap ma nha xuat ban:");
    gets(nhaxuatban->manhaxuatban);
    printf("Nhap ten nha xuat ban:");
    gets(nhaxuatban->tennhaxuatban);
}
void print(Nhaxuatban *nhaxuatban){
    printf("Thong tin nha xuat ban: %s %s",nhaxuatban->manhaxuatban,nhaxuatban->tennhaxuatban);
}
void enter (Tacgia *tacgia){
    printf("\nNhap Ten Tac Gia: ");
    gets (tacgia->tentacgia);
    printf("Nhap Ma Tac Gia: ");
    gets (tacgia->matacgia);
    enter (tacgia->ngaysinh);
}
