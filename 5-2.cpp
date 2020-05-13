#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void bubbleSort(vector<string> &v, char order){
    bool bb = true;
    while(bb) {
        bb = false;
        for (int i = 0; i < v.size() - 1; i++) {
            if (order == 'a') {
                if (v.at(i) > v.at(i+1)) {
                    string aux = v.at(i);
                    v.at(i) = v.at(i+1);
                    v.at(i+1) = aux;
                    bb = true;
                }
                continue;
            } else if (order == 'd') {
                if (v.at(i) < v.at(i+1)) {
                    string aux = v.at(i);
                    v.at(i) = v.at(i+1);
                    v.at(i+1) = aux;
                    bb = true;
                }
                continue;
            }
        }
    }
}

int main(){
    vector<string> v1 = {"L", "I", "P", "I"};
    bubbleSort(v1, 'a');
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    bubbleSort(v1, 'd');
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    return 0;
}

