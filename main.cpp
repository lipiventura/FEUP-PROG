#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <climits>
using namespace std;

//PERGUNTA 1
/*double distance(double x1, double y1, double x2, double y2){
    double d = sqrt(pow((x2-x1),2) + pow(y2-y1,2));
    return d;
}
double area(double x1, double y1, double x2, double y2, double x3, double y3){
    double a = distance(x1,y1,x2,y2);
    double b = distance(x2,y2,x3,y3);
    double c = distance(x3,y3,x1,y1);
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int um(){
    cout << area(0,0,3,3,0,6);
}*/

//PERGUNTA 2
/*int isPrime(int n){
    for (int i = 2; i <=sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int dois(){
    int n = 7;
    if (isPrime(n)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}*/

//PERGUNTA 3
/*int root(double n, double precision, double max_no_it){
    float dif, rq = 1, rqn;
    int i=1;
    dif = n;
    while (i<max_no_it && precision<dif) {

        rqn = (float)((float)rq + n / rq) / 2;
        dif = sqrt(pow(n - pow(rqn, 2),2));
        i++;
        rq = rqn;

    }
    return rqn;
}
int tres(){
    cout << root(2,1.2,5);
}*/

//PERGUNTA 4
/*double round(double x, unsigned n){
    double a = floor(x*pow(10,n)+0.5)/pow(10,n);
    return a;
}
int quatro(){
    cout << round(2.09343,3);
}*/

//PERGUNTA 5 FIM
/*int euclid(int x, int y){
    if (x==y){
        return x;
    }
    else if (x == 0 || y == 0){
        if (x == 0){
            return y;
        }
        else{
            return x;
        }
    }
    else {
        while (x != y){
            if (x > y){
                x = x - y;
            }
            else{
                y = y - x;
            }
        }
        return x;
    }
}*/
/*int cincoFIM(){
    cout << euclid(60, 24);
};*/

//PERGUNTA 5.a
/*bool readFracc(int &num, int &den){
    char bar;
    cout << "num barrinha den: ";
    cin >> num >> bar >> den;
    if (!cin.fail() && den != 0 && bar == '/'){
        return true;
    }
    else{
        num = 0;    //limpa num
        den = 0;    //limpa den
        return false;
    }
}
int cinco_a(){
    int a = 0, b = 1;
    cout << readFracc(a, b);
}*/

//PERGUNTA 5.b
/*void writeFracc(int num, int den){
    cout << "Num, Den ";
    cin >> num >> den;
    if (!cin.fail() && den!= 0){
        cout << num << "/" << den;
    }
    else{
        cout << "IMPOSIBLE";
    }
}
int cinco_b(){
    writeFracc(0, 1);
}*/

//PERGUNTA 5.c
/*void reduceFracc(int &num, int &den){
    int mdc = euclid(num, den);
    num = num/mdc;
    den = den/mdc;
    cout << num << "/" << den;
}
int cinco_c(){
    int a = 5, b = 10;
    reduceFracc(a,b);
}*/

//PERGUNTA 6
/*bool bisext(int year){
    if ((year%4 == 0 && year%100!=0) || year%400==0){
        return true;
    }
    else{
        return false;
    }
}

int seis(int mes, int ano){
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        return 31;
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11){
        return 30;
    }
    else if (bisext(ano)){
        return 29;
    }
    else{
        return 28;
    }
}
int qualquer_dia(int ano, int mes, int dia) {
    int s, a, c, ds;
    s = ano / 100;
    a = ano % 100;
    if ((mes == 1 && bisext(ano)) || mes == 4 || mes == 7) {
        c = 6;
    }
    else if ((mes == 2 && bisext(ano)) || mes == 2) {
        c = 2;
    }
    else if (mes == 2 || mes == 3 || mes == 11) {
        c = 3;
    }
    else if (mes == 5) {
        c = 1;
    }
    else if (mes == 6) {
        c = 4;
    }
    else if (mes == 9 || mes == 12) {
        c = 5;
    }
    else {
        c = 0;
    }
    ds = (5 * a / 4 + c + dia - 2 * (s % 4) + 7) % 7;
    return ds;
}*/

//PERGUNTA 7
/*long factorial_ite(int n){
    int i = 1;
    long fact = 1;
    int maximo = 12;
    if (n > maximo){
        cout << "OVERFLOW" << endl;
    }
    else {
        while (i <= n && fact < LONG_MAX/i) {
            fact = fact * i;
            i++;
        }
        cout << fact;
    }
}

long factorial_rec(int n){
    if (n == 1){
        return 1;
    }
    else {
        return n*factorial_rec(n-1);
    }
}
int sete(int n){
    factorial_ite(n);
    cout << endl;
    cout << factorial_rec(n);
}*/

//PERGUNTA 8
/*int euclides_rec(int m, int n){
    if (m%n==0){
        return n;
    }
    else{
        return euclides_rec(n, m%n);
    }
}
int oito(){
    cout << euclides_rec(18,12);
}*/

//PERGUNTA 9
double f(double x) {
    return sqrt(4-pow(x,2));
}
double integrateTR(double f(double), double a, double b, int n) {
    double area = 0, h = (double)(b - a) / n;
    for (int i = 1; i <= n; i++) {
        area = area + ((double)h / 2)*(f(a + (i - 1)*h) + f(a + i * h));
    }
    return area;
}
int nove(){
    integrateTR(f, 2, 4, 2);
}

int main() {
    //um();
    //dois();
    //tres();
    //quatro();
    //cincoFIM();
    //cinco_a();
    //cinco_b();
    //cinco_c();
    //seis(2,2100);
    //sete(4);
    //oito();
    nove();
}
