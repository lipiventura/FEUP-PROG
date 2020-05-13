#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

bool sequenceSearch(const string &s, int nc, char c){
    vector<int> v;
    int counter = 0;
    for (int i = 0; i < s.size(); i++){
        if(s.at(i) == c){
            counter += 1;
        }
        else{
            v.push_back(counter);
            counter = 0;
        }
    }
    for (int i = 0; i < v.size(); i++){
        if(v.at(i) == nc){
            cout << "true";
            return true;
        }
    }
    cout << "false";
    return false;
}

bool sequenceSearch2(const string &s, int nc, char c){
    string seq(nc, c);
    // s(int i, char 'n')-> i vezes o char n na string s
    return s.find(seq) != -1;
}

int main(){
    cout << sequenceSearch("abcddeedddf", 3, 'd');
    cout << sequenceSearch("abcddeedddf", 4, 'd');
    cout << sequenceSearch2("abcddeedddf", 4, 'd');
}