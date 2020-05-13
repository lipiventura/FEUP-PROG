#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

struct Fraction{
    int numerator;
    int denominator;
};
bool readFreaction(Fraction &fraction){
    if (fraction.denominator == 0){
        return false;
    }
    return true;
}
int main(){
    Fraction fraction;
    cout << "Escreve o num: "; cin >> fraction.numerator; cout << endl;
    cout << "Escreve o den: "; cin >> fraction.denominator; cout << endl;
    cout << readFreaction(fraction);
}
//Ja la estava a repetir tudo andamento proximo