#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char encryptChar(char c, int key){
    int nc;
    if (int(c) > 64 && int(c) < 91){
        nc = (int(c) - 64 + key) % 26 + 64;
    }
    else if (int(c) > 96 && int(c) < 123){
        nc = (int(c) - 96 + key) % 26 + 96;
    }
    else{
        nc = int (c);
    }
    return nc;
}

string encryptString(string c, int key){
    string s;
    for (int i = 0; i < c.size(); i++){
        s += encryptChar(c.at(i), key);
    }
    return s;
}

// Aparentemente c string é vetor (?) mas i guess que vamos ter de fazer

void encryptCString(char s[], int key){
    for (int i = 0; i < strlen(s); i++){
        s[i] = encryptChar(s[i], key);
    }
}

//Para cstring-> strlen, s[i]; para string-> s.size(), s.at(i)

int main() {
    cout << encryptChar('z', 2) << endl;
    cout << encryptString("Filipe", 1) << endl;
    char str[50]; int key;
    cout << "String: "; cin.getline(str, 50);
    // IMPORTANTE: getline para string com espaços
    cout << "Key: "; cin >> key;
    encryptCString(str, key);
    cout << str;
    return 0;
}
