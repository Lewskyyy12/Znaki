#include "stdio.h"
#include "ctype.h"


void zadanie1i2(){
    int m=0,d=0,zn=0;
    int c;
    while((c = getchar()) != '\n'){
        if(c>=65 && c<=90) {
            d++;
            putchar(towlower(c));

        }
        if(c>=97 && c<=122) {
            m++;
            putchar(toupper(c));

        }
        if(c>=48 && c<=57){
            zn++;
        }

    }
    printf("\n");
    printf("Male: %d, duze: %d, cyfry: %d \n", m,d,zn);
}

void zadanie3() {

    int c;
    while ((c = getchar()) != EOF) {
        if (c == 9) for (int i = 0; i < 4; i++) putchar(32);

        else
            putchar(c);
    }
}
void zadanie4(){
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
        putchar(c);
    }

}
void zadanie5(){
    int c=0;
    while((c = getchar()) != EOF){
       printf_s("%d ", c);
    }



}
int main(){
    zadanie1i2();
    //zadanie3();
    //zadanie4();
    //zadanie5();

}