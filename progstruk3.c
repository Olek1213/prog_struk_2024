#include <stdio.h>
/*
int odejmij(int* x){
    *x+=1;
    return *x;
}
*/

int zad3_1(int *a, int *b){
    if(*a>=*b){
        return *b;
    }
    else {
        return *a;
    }
}


int * zad3_2(int * a, int * b){
    if(*a>=*b){
        return b;
    }
    else {
        return a;
    }
}


void zad3_3(int * a, int * b){
    int x;
    x = *a;
    *a = *b;
    *b = x;
}


void zad3_4(int * a, int * b){
    if(*b<*a){
        int x;
        x = *a;
        *a = *b;
        *b = x;
    }
}


int zad3_5(const int * a, const int * b){
    return *a+*b;
}


void zad3_6(int n, int * w){
    *w = n;
}
int main(){
    /*
    int n=505;
    printf("%d\n",&n);
    int *wskaznik = &n;
    printf("%d",*wskaznik);
    int a=7;
    printf("%d\n",odejmij(&a));
    printf("%d",a);
    */
    int a, b;
    scanf("%d%d",&a,&b);
    printf("%d",zad3_2(&a,&b));
}
