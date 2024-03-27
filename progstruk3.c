#include <stdio.h>
#include <stdbool.h>
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


int * zad3_9(){
    return malloc(sizeof(int));
}


double * zad3_10(){
    return malloc(sizeof(double));
}



int * zad3_11(int n){
    return malloc(n*sizeof(int));
}


double * zad3_12(int n){
    return malloc(n*sizeof(double));
}


double zad3_13(double (*fun)(int x), int y){
    return fun(y);
}


double testowa(int x) {
    return x*x;
}


bool zad3_14(int (*fun1)(int x),int (*fun2)(int y), unsigned int n){
    for(int i=0;i<=n;i++){
        if(!(fun1(i)==fun2(i))){
            return false;
        }
    }
    return true;
}


void zad3_15(const int * x, int * y){
    *y = *x;
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

    double (*wskaznikdofunkcji)(int);
    wskaznikdofunkcji = &testowa;
    printf("%f",zad3_13(wskaznikdofunkcji,8));
    */
    int a, b;
    scanf("%d%d",&a,&b);
    zad3_15(&a,&b);
    printf("%d\n%d",a,b);
}
