#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

struct Address{
    string street;
    int doornumber;
    string city;
};

struct People{
    string name;
    int age;
    char gender;
    Address address;
};

void readAddress(Address *address){
    cout << "Escriba la calle: "; cin.ignore(); getline(cin, address->street); cout << endl;
    cout << "Escriba lo numero de la puerta: "; cin >> address->doornumber; cout << endl;
    cout << "Escriba la ciudad: "; cin.ignore(); getline(cin, address->city); cout << endl;
}

void readPeople(People *people){
    cout << "Escriba el nombre: "; getline(cin, people->name); cout << endl;
    cout << "Escriba la edad: "; cin >> people->age; cout << endl;
    cout << "Escriba el genero (M, F o O (otro)): "; cin >> people->gender; cout << endl;
    cout << "Escriba la direccion: ";
    Address a; readAddress(&a);
    people->address = a;
}

void writeAddress(Address &address){
    cout << "Calle: " <<  address.street << endl;
    cout << "Numero de la puerta: " <<  address.doornumber << endl;
    cout << "Ciudad: " <<  address.city << endl;
}

void writePeople(People &people){
    cout << "Nombre: " <<  people.name << endl;
    cout << "Edad: " <<  people.age << endl;
    cout << "Genero: " <<  people.gender << endl;
    cout << "Direccion: " << endl;
    writeAddress(people.address);
}

int main(){
    int n;
    cout << "Numero de personas: "; cin >> n;
    vector<People> p;
    for (int i = 0; i < n; i++){
        People people;
        cin.ignore();
        readPeople(&people);
        p.push_back(people);
    }
    string c;
    cout << "Ciudad: "; getline(cin, c);

    for (int i = 0; i < p.size()-1; i++){
        if (p.at(i).address.city == c && p.at(i).address.city == p.at(i+1).address.city && p.at(i).address.street == p.at(i).address.street){
            cout << p.at(i).name << " y " << p.at(i+1).name << " viven en " << p.at(i).address.street << endl;
        }
    }
}