#include <stdio.h>
#include <math.h>

void wypisz(unsigned int n, int * tab){
    for(int i=0;i<n;i++){
        printf("%d\t",tab[i]);
    }
    printf("\n");
}


void zad4_1a(unsigned int n, int * tab){
    for(int i=0;i<n;i++){
        tab[i]=0;
    }
}


void zad4_1b(unsigned int n, int * tab){
    for(int i=0;i<n;i++){
        tab[i]=i;
    }
}


void zad4_1c(unsigned int n, int * tab){
    for(int i=0;i<n;i++){
        tab[i]*=2;
    }
}


void zad4_1d(unsigned int n, int * tab){
    for(int i=0;i<n;i++){
        if(tab[i]<0){
            tab[i]*=-1;
        }
    }
}


float zad4_2a(unsigned int n, int * tab){
    float suma = 0.0;
    for(int i=0;i<n;i++){
        suma+=tab[i];
    }
    return suma/n;
}


int zad4_2b(unsigned int n, int * tab){
    int suma = 0;
    for(int i=0;i<n;i++){
        suma+=tab[i];
    }
    return suma;
}


int zad4_2c(unsigned int n, int * tab){
    int suma = 0;
    for(int i=0;i<n;i++){
        suma+=tab[i]*tab[i];
    }
    return suma;
}


float zad4_3(unsigned int n, const int * tab){
    float suma = 0.0;
    for(int i=0;i<n;i++){
        suma+=tab[i];
    }
    return suma/n;
}


float zad4_4(unsigned int n, unsigned int * tab){
    float iloczyn = 1.0;
    for(int i=0;i<n;i++){
        iloczyn*=tab[i];
    }
    return pow(iloczyn,1./n);
}


void zad4_6a(unsigned int n, int * tab1, int * tab2){
    for(int i=0;i<n;i++){
        tab2[i]=tab1[i];
    }
}


void zad4_6b(unsigned int n, int * tab1, int * tab2){
    for(int i=0;i<n;i++){
        tab2[i]=tab1[n-1-i];
    }
}


int main(){
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6; tab[1]=2; tab[2]=5; tab[3]=8;
    printf("%f",zad4_4(rozmiar,tab));
}
