#include <stdio.h>
#include <math.h>

int main() {

    /*zestaw 1.2
    zad 5
    float a;
    scanf("%f",&a);
    printf("%f",a);

    zad 6
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n%d\n%d",a,b,c);

    zad 7
    int a;
    scanf("%d",&a);
    printf("%d",a+1);

    zad 8
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%f",(a+b+c)/3.0);

    zad 9
    float x;
    scanf("%f",&x);
    printf("%.2f",sqrt(x));

    zad 10
    float x;
    scanf("%f",&x);
    printf("%f",fabs(x));

    zad 12
    float a;
    scanf("%f",&a);
    printf("%e",a);








    zestaw 1.3
    zad 1
    int a;
    scanf("%d",&a);
    printf("|%d|=",a);
    if(a<0){
        a=-a;
    }
    printf("%d",a);

    zad 2
    int a, b;
    scanf("%d%d",&a,&b);
    if(a>=b){
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }

    xad 3
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("%d",a);
    }
    else if(b>=c){
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }

    zad 4
    int a, b;
    scanf("%d%d",&a,&b);
    if(fabs(a)>fabs(b)){
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }

    zad 5
    int a;
    float x, y, z, p;
    printf("Wpisz 1 jesli chcesz obliczyc pole za pomoca podstawy i wysokosci lub 2 jesli chcesz obliczyc pole za pomoca wszystkich bokow: ");
    scanf("%d",&a);
    if(a==1){
        printf("podaj dlugosc podstawy: ");
        scanf("%f",&x);
        printf("podaj dlugosc wysokosci: ");
        scanf("%f",&y);
        printf("pole wynosi %f",(x*y)/2);
    }
    else if(a==2){
        printf("podaj dlugosci bokow: ");
        scanf("%f%f%f",&x,&y,&z);
        if(x>y+z||y>x+z||z>x+y){
            printf("to nie sa boki trojkata!");
        }
        p = (x+y+z)/2.0;
        printf("pole wynosi %f",sqrt(p*(p-x)*(p-y)*(p-z)));
    }
    else {
        printf("trzeba bylo podac 1 albo 2");
    }

    zad 7
    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);
    float d;
    d = b * b - 4 * a * c;
    if(d>0){
        float x1, x2;
        x1 = (-b-sqrt(d))/(2 * a);
        x2 = (-b+sqrt(d))/(2 * a);
        printf("Rownanie ma dwa rozwiazania %f oraz %f",x1,x2);
    }
    else if (d==0){
        float x1;
        x1=(-b)/(2*a);
        printf("Rownanie ma jedno rozwiazanie %f",x1);
    }
    else {
        printf("Rownanie nie ma rozwiazan");
    }

    zad 8
    printf("Podaj liczbe: 1 - kwadrat, 2 - prostokat, 3 - trojkat: ");
    int l;
    float a,b,h;
    scanf("%d",&l);
    switch(l){
    case 1:
        printf("Podaj dlugosc boku kwadratu: ");
        scanf("%f",&a);
        printf("Pole kwadratu wynosi: %f",a*a);
        break;
    case 2:
        printf("Podaj dlugosci bokow prostokata: ");
        scanf("%f%f",&a,&b);
        printf("Pole prostokata wynosi: %f",a*b);
        break;
    case 3:
        printf("Podaj bok i wysokosc trojkata: ");
        scanf("%f%f",&a,&h);
        printf("Pole trojkata wynosi: %f",(a*h)/2.0);
        break;
    }

    zad 9
    printf("Podaj liczbe: 1 - dodawanie, 2 - odejmowanie, 3 - mnozenie, 4 - dzielenie: ");
    int l;
    scanf("%d",&l);
    float a, b;
    printf("Podaj dwie liczby: ");
    scanf("%f%f",&a,&b);
    switch(l){
    case 1:
        printf("%f+%f=%f",a,b,a+b);
        break;
    case 2:
        printf("%f-%f=%f",a,b,a-b);
        break;
    case 3:
        printf("%f*%f=%f",a,b,a*b);
        break;
    case 4:
        printf("%f/%f=%f",a,b,a/b);
        break;
    }








    zestaw 1.4
    zad 1
    int n, m;
    scanf("%d%d",&n,&m);
    for(int i=n;i<m;i+=n){
        printf("%d ",i);
    }

    zad 2
    int n, m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i+=1){
        printf("%d ",n*i);
    }

    zad 3
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=m/n*n+n;i<k;i+=n){
        printf("%d ",i);
    }

    zad 4
    int n;
    scanf("%d",&n);
    int s=1;
    for(int i=1;i<=n;i+=1){
        s*=i;
    }
    printf("%d!=%d",n,s);

    zad 5
    int n;
    scanf("%d",&n);
    int s=0;
    for(int i=0;i<=n;i+=1){
        s+=i*i;
        if(i==0){
            printf("%d^2",i);
        }
        else {
            printf("+%d^2",i);
        }
    }
    printf("=%d",s);

    zad 6
    int n;
    scanf("%d",&n);
    int s=1;
    for(int i=2;i<=n;i+=2){
        s*=i;
    }
    printf("%d",s);

    zad 7
    int n, m;
    scanf("%d%d",&n,&m);
    int s=1;
    for(int i=n;i<=m;i+=1){
        s*=i;
    }
    printf("%d",s);

    zad 8
    int n;
    scanf("%d",&n);
    int x=1,y=1,t;
    for(int i=1;i<n;i+=1){
        t=x;
        x=y;
        y=t+y;
    }
    printf("%d",x);

    zad 9
    int n, m, k, min;
    scanf("%d%d",&n,&m);
    if(n<m){
        min = n;
    }
    else {
        min = m;
    }
    for(int i=1;i<min;i+=1){
        if(n%i==0&&m%i==0){
            k=i;
        }
    }
    printf("%d",k);

    zad 10
    float n;
    scanf("%f",&n);
    int i;
    for(i=0;i*i<=n;i+=1){
        continue;
    }
    printf("%d",i-1);

    zad 12
    int n;
    int k;
    scanf("%d",&n);
    for(int i=2;i<n;i+=1){
        for(int j=1;j<=i;j+=1){
            if(n%j==0&&i%j==0){
                k=j;
            }
        }
        if(k==1){
            printf("%d\n",i);
        }
    }

    zad 13
    int n;
    scanf("%d",&n);
    int s=0;
    int k=1;
    for(int i=1;i<=n;i++){
        k*=i;
        s+=k;
    }
    printf("%d",s+1);

    zad 14
    int n;
    scanf("%d",&n);
    for(int a=1;a<n;a++){
        for(int b=1;b<a;b++){
            for(int c=1;c<b;c++){
                if(c*c+b*b==a*a){
                    printf("%d %d %d\n",c,b,a);
                }
            }
        }
    }
    */
}
