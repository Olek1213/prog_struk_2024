#include <stdio.h>
#include <math.h>

//zad2.1
int modul(int a) {
    if(a<0){
        return -a;
    }
    return a;
}

//zad2.2
int factorial(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        m*=i;
    }
    return m;
}


//zad2.3
int dzielnik(int n){
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            return i;
        }
    }
}


void pierwsze(){
    printf("{11");
    for(int i=12;i<100;i++){
        if(dzielnik(i)==1){
            printf(",%d",i);
        }
    }
    printf("}");
}


int nta_pierwsza(int n){
    int i=1;
    int s=0;
    while(1==1){
        if(dzielnik(i)==1){
            s++;
            if(s==n){
                return i;
            }
        }
        i++;
    }
}


void najwieksza_pierwsza(int n){
    for(int i=n;i>1;i--){
        if(dzielnik(i)==1){
            printf("%d",i);
            break;
        }
    }
}


void pierwsze_pomiedzy(int a, int b){
    int max, min;
    if(a>b){
        max = a;
        min=b;
    }
    else {
        max=b;
        min=a;
    }
    for(int i=min;i<=max;i++){
        if(dzielnik(i)==1){
            printf("%d\n",i);
        }
    }
}

//zad2.4
int potega(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=2;
    }
    return s;
}

//zad2.5
float potega2(int n){
    float s=1;
    if(n<0){
        for(int i=-1;i>=n;i--){
            s*=1/2.0;
        }
    }
    if(n>=0){
        for(int i=1;i<=n;i++){
            s*=2.0;
        }
    }
    return s;
}

//zad2.6
int potega3(int n, int m){
    int s=1;
    for(int i=1;i<=m;i++){
        s*=n;
    }
    return s;
}

//zad2.7
float potega4(int n,int m){
    float s=1;
    if(m<0){
        for(int i=-1;i>=m;i--){
            s*=1.0/n;
        }
    }
    if(m>=0){
        for(int i=1;i<=m;i++){
            s*=n;
        }
    }
    return s;
}

//zad2.8
int zad2_8(float n){
    int i;
    for(i=0;i*i<=n;i++){
        continue;
    }
    return i-1;
}

//zad2.9 Dom
int zad2_9(float n,int m){
    int i;
    for(i=0;potega4(i,m)<=n;i++){
        continue;
    }
    return i-1;
}
//zad2.10
int nwd(int a, int b) {
    while(a*b!=0){
        if(a>b){
            a=a%b;
        }
        else {
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
}
int zad2_10(n){
    int suma = 0;
    for(int i=2;i<n;i++){
        if(nwd(n,i)==1){
            suma += i;
        }
    }
    return suma;
}

//zad2.11
int zad2_11(n){
    int suma=0;
    for(int i=0;i<=n;i++){
        suma+=zad2_8(i);
    }
    return suma;
}

//zad2.12
int zad2_12(n,m){
    int suma=0;
    for(int i=0;i<=n;i++){
        suma+=zad2_9(i,m);
    }
    return suma;
}

//zad2.13
void zad2_13a(n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(potega4(i,2)+potega4(j,2)==n){
                printf("%d^2+%d^2\n",i,j);
            }
        }
    }
}
void zad2_13b(n){
    for(int i=1;i<sqrt(n);i++){
        for(int j=1;j<=i;j++){
            if(potega4(i,2)+potega4(j,2)==n){
                printf("%d^2+%d^2\n",i,j);
            }
        }
    }
}

//zad2.17
void zad2_17(){
    static int liczba=0;
    liczba++;
    printf("Funkcja zostala wywolana %d razy\n",liczba);
}

//zad2.19
int zad2_19(){
    int n;
    scanf("%d",&n);
    static int suma=0;
    suma+=n;
    printf("Suma wczytanych liczb wynosi %d\n",suma);
    return n;
}

//zad2.20
int zad2_20(n){
    if(n==0){
        return 1;
    }
    else {
        return n*zad2_20(n-1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",zad2_20(n));
}
