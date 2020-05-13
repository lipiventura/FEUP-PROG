#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

string normalizeName(const string &name){
    string uname;
    vector<string> v = {"DE", "DO", "DA", "DOS", "DAS", "E"};
    bool space = true;
    for (int i = 0; i < name.length(); i++){
        if (space && name.at(i) == ' '){
            continue;
        }
        else if (int(name.at(i))>64 || int(name.at(i))<123){
            uname += toupper(name.at(i));
            space = false;
        }
        else if (uname.at(i) == ' '){
            uname += ' ';
            space = true;
        }
    }
    vector<string> nome;
    int b = 0;
    for (int i = 0; i< uname.length(); i++){
        if (uname[i] == ' '){
            nome.push_back(uname.substr(b, i-b));
            b = i+1;
        }
    }
    string Final;
    for (int i = 0; i < nome.size(); i++){
        string a = nome.at(i);
        bool check = true;
        for (int j = 0; j < v.size(); j++){
            if (v.at(j) == nome.at(i)){
                check = false;
            }
        }
        if(check){
            Final += a + " ";
        }
    }
    return Final;
}

int main(){
    cout << normalizeName(" Maria da Felicidade dos Reis e Passos Dias de Aguiar ");
}