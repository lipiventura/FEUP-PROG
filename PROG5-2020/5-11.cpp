#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    //Parte 1: Ler do ficheiro
    string s, ss = "../"; //necessario estas cenas p abrir file
    vector<string> vnomes;
    cout << "Insert name of file "; cin >> s;
    ss.append(s); //junta ../ c o nome do file tipo persons.txt
    ifstream file;
    file.open(ss);
    string line; //Linha
    while(getline(file, line)){ //Vai ter linha por linha
        vnomes.push_back(line.c_str());
    }
    file.close();

    //Parte 2: Fazer sort
    bool teste = true;
    while(teste) {
        teste = false;
        for (int i = 0; i < vnomes.size() - 1; i++) {
            if (vnomes.at(i) > vnomes.at(i + 1)) {
                string aux = vnomes.at(i);
                vnomes.at(i) = vnomes.at(i + 1);
                vnomes.at(i + 1) = aux;
                teste = true;
            } // so fiz por ordem alfabetica
        }
    }

    //Parte 3: Escrever no ficheiro
    int i = s.find(".");
    string snovo = s.substr(0, i); snovo.append("_sorted.txt");
    snovo.insert(0, "../");
    ofstream newfile;
    newfile.open(snovo);
    for(int i = 0; i < vnomes.size(); i++){
        newfile << vnomes.at(i) << endl;
    }
    newfile.close();

    return 0;
}
