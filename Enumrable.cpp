// Viết menu với các lựa chọn:
// 1.    Gà rán
// 2.    Bò kho
// 3.    Cơm chiên
// 4.    Vịt Quay
// In ra lựa chọn sau khi chọn.
#include <stdio.h>
#include <conio.h>
void menu (int &choise);
int main (){
    int choise;
    menu (choise);
    return 0;
}
void menu (int &choise){
    char k,c;
    do{
    printf ("\n1.    Ga ran\n");
    printf ("2.    Bo kho\n");
    printf ("3.    Com chien\n");
    printf ("4.    Vit quay\n");
    printf ("Your choise: ");
    scanf ("%d",&choise);
    printf ("Ban da chon:");
    switch (choise){
        case 1: printf ("\n1.Ga ran");
            break;
        case 2: printf ("2.Bo kho");
            break;
        case 3: printf ("3.Com chien");
            break;
        case 4: printf ("4.Vit quay");
            break;
        default: printf ("Khong co trong thuc don!!!");
    }
    printf ("\nDo you want to exit?(esc)");
        k = getch();
        c = k;
    }while(c != 27);
}
