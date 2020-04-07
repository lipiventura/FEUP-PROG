#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int um()
{
       float a,b,c,d,e,f;
       cout << "Insert the numbers: ";
       cin >> a >> b >> c >> d >> e >> f;
       float num_x = (c*e-b*f);
       float num_y = (a*f-c*d);
       float det = (a*e-b*d);
       if ((num_x == 0 || num_y == 0) && det == 0)
           cout << "Sistema Indeterminado";
       else if (det == 0)
           cout << "Sistema Impossível";
       else {
           float x = num_x / det;
           float y = num_y / det;
           cout << x << "\n" << y;
       }
       return 0;
}

int dois()
{
    float a, b, c;
    float max, middle, min;
    cout << "Write three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        max = a;
        if (b > c) {
            min = c;
            middle = b;
        } else {
            min = b;
            middle = c;
        }
    }
    else if (b > a && b > c) {
        max = b;
        if (a > c) {
            min = c;
            middle = a;
        } else {
            min = a;
            middle = c;
        }
    }
    else if (c > b && c > a) {
        max = c;
        if (b > a) {
            min = a;
            middle = b;
        } else {
            min = b;
            middle = a;
        }
    }
    cout << max << " > " << middle << " > " << min;

}

int tres()
{
    int a,b;
    cout << "Numbers: ";
    cin >> a >> b;
    int result = a + b;
    if (result > a && result > b){
        cout << "Sum Overflow";
    }
    else if (result < a && result < b){
        cout << "Sum Underflow";
    }
    else{
        cout << result;
    }

    

}

int cinco(){
    float A, B, C;
    cout << "Insert the coefficients";
    cin >> A >> B >> C;
    float raiz = pow(B,2) - 4*A*C;
    if (raiz < 0){
        float rac = -B/(2*A);
        float im = sqrt(-raiz)/(2*A);
        cout << "Two complex roots: "<< rac << "+" << im << "i and " << rac << "-" << im << "i";
    }
    else if (raiz == 0){
        float rac = -B/(2*A);
        cout << "Two equal real roots: " << rac;
    }
    else{
        float rac1 = -B/(2*A) + sqrt(raiz)/(2*A);
        float rac2 = -B/(2*A) - sqrt(raiz)/(2*A);
        cout << "Two real roots: " << rac1 << " and " << rac2;

    }

}

int sete(){
    int n;
    cout << "Insert Number ";
    cin >> n;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            cout << "The number is not prime";

    else
        cout << "The number is prime";
        break;
    }
}

int oito(){
    float lim;
    cout << "Insert limit: ";
    cin >> lim;
    cout << fixed << setprecision(6) << setw(5) << "ang";
    cout << setw(10) << "sen";
    cout << setw(10) << "cos";
    cout << setw(10) << "tan" << endl;
    for (int ang = 0; ang <= 90; ang = ang + lim){
        float rad = (ang/180)*M_PI;
        cout << setw(5) << ang;
        cout << setw(10) << sin(rad);
        cout << setw(10) << cos(rad);
        if (ang == 90){
            cout << setw(10) << "infinito" << endl;
        }
        else{
            cout << setw(10) << tan(rad) << endl;
        }
    }

};


int main() {
    /*um();*/
    /*dois();*/
    /*tres();*/
    /*cinco();*/
    /*sete();*/
    /*oito();*/



}
