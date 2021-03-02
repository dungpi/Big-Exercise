
#include<stdio.h>
#include<math.h>
#include<conio.h>
void menu(int a,int b);
void input(int &a,int &b);
int main (){
    int a,b;
    input(a,b);
    menu(a,b);
    return 0;
}
void input(int &a,int &b){
    printf("enter number1:");
    scanf("%d",&a);
    printf("enter number2:");
    scanf("%d",&b);
}
void menu(int a,int b){
    char choise;
    char k,c ;
    do {
        printf("===Phep Tinh===\n");
        printf ("\n+:Cong");
        printf ("\n-:Tru");
        printf ("\n*:Nhan");
        printf ("\n/:Chia");
        printf ("\nYour choise:");
        scanf("%c", &choise);
        switch (choise){
            case '+': printf ("%d\t+\t%d\t=%d",a,b,a+b);
                break;
            case '-': printf ("%d\t-\t%d\t=%d",a,b,a-b);
                break;
            case '*': printf ("%d\t*\t%d\t=%d",a,b,a*b);
                break;
            case '/': printf ("%d\t/\t%d\t=%d",a,b,a/b);
                break;
            default : printf ("\nEnter your choise again!");
                break;
        }
        printf("\nDo you want to exit?(esc)");
        k = getch();
        c = k;
    }while(c != 27);
}
