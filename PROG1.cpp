#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>


int um();
int dois();
int tres();
int quatro();
int cinco();

using namespace std;

int main()
{
/*int a = um();*/
/*int b = dois();*/
/*int c = tres();*/
/*int d = quatro();*/
/*int e = cinco();*/

}

int um()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);
    return 0;
}

int dois()
{
    float a,b,c;
    cout << "Insert: ";
    cin >> a >> b >> c;
    float m = (a+b+c)/3;
    cout << "Mean Value: " << m << "\nA Mean: " << (a-m) << "\nB Mean: " << (b-m) << "\nC Mean: " << (c-m);
    return 0;
}

int tres()
{
    float p,r;
    cout << "Insert p and r: ";
    cin >> p >> r;
    float M = (4*p*M_PI*pow(r,3)/3);
    cout << M;
    return 0;
}

int quatro()
{
    float a,b,c,d,e,f;
    cout << "Insert the numbers: ";
    cin >> a >> b >> c >> d >> e >> f;
    float x = (c*e-b*f)/(a*e-b*d);
    float y = (a*f-c*d)/(a*e-b*d);
    cout << x << "\n" << y;
    return 0;

}

int cinco()
{
    int h1,m1,s1,h2,m2,s2;
    cout << "Time 1";
    cin >> h1 >> m1 >> s1;
    cout << "Time 2";
    cin >> h2 >> m2 >> s2;
    int s = (s1+s2)%60;
    int m = (m1+m2+(s1+s2)/60)%60;
    int h = (h1+h2+(m1+m2+(s1+s2)/60)/60)%24;
    int d = (h1+h2+(m1+m2+(s1+s2)/60)/60)/24;
    cout << d << ":" << h << ":" << m << ":" << s;
    return 0;
}
