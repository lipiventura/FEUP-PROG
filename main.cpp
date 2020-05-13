#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <climits>
#include <vector>
#include <string>
# include <sstream>
#include <fstream>
using namespace std;

//PERGUNTA 4.1
/*void readArray(int a[], size_t nElem){
    for (int i= 0; i < nElem; i++){
        cout << i << ": ";
        cin >> a[i]; //Importante
    }
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1 = 0, size_t pos2 = -1){
    //pos2 = -1 pq é o final QUANTO TEMPO TIVE A PROCURA DISSO
    for (int i = pos1; i < nElem && i < pos2; i++){
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]){
    int sum = 0;
    for (int i = pos1; i<nElem && i< pos2; i++){
        if (a[i] == value){
            index[sum] = i;
            sum ++;
        }
    }
    return sum;
}

int test1(){
    int arr[4];
    size_t i[4]; //Importante size_t em vez de int
    readArray(arr, 4);
    cout << findValueInArray(arr, 4, 20) << endl;
    cout<<findMultValuesInArray(arr, 4, 10, 0, 4, i) << endl;
}*/

//PERGUNTA 4.2
/*vector<int> readVector(vector <int> &v){
    int i = 0;
    int a;
    cout << i << ": ";
    while(cin >> a){ //Para ser válido
        v.push_back(a);
        i++;
        cout << i << ": ";
    }
    return v;
}
size_t findValueInVector(const vector<int> &v, int value, size_t pos1, size_t pos2){
    for (int i = pos1; i < pos2; i++){
        if (v.at(i) == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInVector(const vector<int> &v, int value, size_t pos1, size_t pos2, vector<size_t> &index) {
    int sum = 0;
    for (int i = pos1; i < pos2; i++) {
        if (v.at(i) == value) {
            index.push_back(i);
            sum++;
        }
    }
    return sum;
}

int test2(){
    *vector <int> v;
    vector <size_t> i;
    readVector(v);
    for (int i : v){
        cout << i << '\t';
    }
    cout << findValueInVector(v, 10, 0, 4) << endl;
    cout <<findMultValuesInVector(v, 10, 0, 3, i) << endl;
}*/

//PERGUNTA 4.3
/*void hacer_uno_vector(vector<int> &v){
    int a;
    for(int i = 0; i < 7; i ++){
        cin >> a;
        v.push_back(a);
    }
}
void bubbleSort(vector<int> &v, bool f(int x, int y)){
    //OMG SUPER IMPORTANTE PARA VETORES É SIZE() E NAO SIZEOF()!!!!!!
    bool porquinhapepa = true;
    while(porquinhapepa){
        porquinhapepa = false;
        for (int i = 1; i < v.size(); i++) {
            if (f(v.at(i - 1),v.at(i))) {
                int a = v.at(i - 1);
                int b = v.at(i);
                v.at(i - 1) = b;
                v.at(i) = a;
                porquinhapepa = true;
            }
        }
    }
}
bool ascending(int x, int y){
    if (x>y){
        return true;
    }
}
bool descending(int x, int y){
    if (x<y){
        return true;
    }
}
int test3(){
    vector<int> v;
    hacer_uno_vector(v);
    //Por alguma razão no meu mac ctrl+D acaba o programa td logo n posso usar while(cin>>a)
    bubbleSort(v, ascending);
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << ", ";
    }
}*/

//PERGUNTA 4.4
/*void hacer_otro_vector(vector<int> &v){
    int a;
    for(int i = 0; i < 7; i ++){
        cin >> a;
        v.push_back(a);
    }
}
int binarySearch(const vector<int> &v, int value){
    bool found = false;
    int init = 0; int end = v.size(); int m;
    while(!found){
        m = (init+end)/2;
        if (v.at(m) == value){
            found = true;
        }
        else if (v.at(m) < value){
            init = m +1;
        }
        else{
            end = m - 1;
        }
        if (init > end){
            return -1;
        }
    }
    return m;
}
int test4() {
    vector<int> v;
    hacer_otro_vector(v);
    cout << binarySearch(v, 12);
}*/

//PERGUNTA 4.5
/*void hacer_mas_otro_vector(vector<int> &v){
    int a;
    for(int i = 0; i < 7; i ++){
        cin >> a;
        v.push_back(a);
    }
}
void removeDuplicates(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            if (v.at(i) == v.at(j)){
                for (int k = j+1; k < v.size(); k++) {
                    v.at(k-1)=v.at(k);
                }
                v.resize(v.size()-1);
                j --; //Podem haver mais repetidos do que só um
            }
        }
    }
}
int test5(){
    vector<int> v;
    hacer_mas_otro_vector(v);
    removeDuplicates(v);
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << ", ";
    }
}*/

//PERGUNTA 4.6
/*void removeDuplicates(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            if (v.at(i) == v.at(j)){
                for (int k = j+1; k < v.size(); k++) {
                    v.at(k-1)=v.at(k);
                }
                v.resize(v.size()-1);
                j --;
            }}}}
void bubbleSort(vector<int> &v){
    bool porquinhapepa = true;
    while(porquinhapepa){
        porquinhapepa = false;
        for (int i = 1; i < v.size(); i++) {
            if (v.at(i - 1) > v.at(i)) {
                int a = v.at(i - 1);
                int b = v.at(i);
                v.at(i - 1) = b;
                v.at(i) = a;
                porquinhapepa = true;
            }}}}
void vectorIntersection(const vector<int> &v1, const vector<int> &v2, vector<int> &v3){
    for (int i = 0; i < v2.size(); i++){
        for(int j = 0; j < v1.size(); j++){
            if(v2.at(i) == v1.at(j)){
                v3.push_back(v1.at(j));
            }}}
    bubbleSort(v3);
    removeDuplicates(v3);
}
void vectorUnion(const vector<int> &v1, const vector<int> &v2, vector<int> &v3){
    for(int i = 0; i < v1.size(); i++){
        v3.push_back(v1.at(i));
    }
    for(int i = 0; i < v2.size(); i++){
        v3.push_back(v2.at(i));
    }
    bubbleSort(v3);
    removeDuplicates(v3);
}
int test6(){
    vector<int> v1, v2, v3;
    v1.push_back(20);v1.push_back(1);v1.push_back(5);v1.push_back(10);v1.push_back(10);v1.push_back(50);v1.push_back(10);
    v2.push_back(50);v2.push_back(20);v2.push_back(3);v2.push_back(15);v2.push_back(50);
    //Podia ter feito só v1={x,y,z} but a b!tch be dumb asf
    vectorIntersection(v1,v2, v3);
    for(int i = 0; i < v3.size(); i++){
        cout << v3.at(i) << ", ";
    }
}*/

//PERGUNTA 4.7
/*const int NE = 5;
void localMax(const int a[] [NE]){
    vector<vector<int>> results;
    for (int i = 0; i < NE; i++){
        for (int j = 0; j < NE; j++){
            vector<int> coords = {};
            if (i-1 >= 0 && i + 1 < NE && j - 1 >= 0 && j + 1 < NE){
                int c = a[i][j];
                if(c > a[i][j-1] && c > a[i][j+1]){
                    int c = a[i][j];
                    if(c > a[i][j] &&  c > a[i][j] && c > a[i-1][j] && c > a[i+1][j] && c > a[i-1][j-1] && c > a[i-1][j+1] && c > a[i+1][j-1] && c > a[i+1][j+1]){
                        coords.push_back(i);
                        coords.push_back(j);
                        results.push_back(coords);
                    }}}}}}
int test7(){
    
}*/

//PERGUNTA 4.12
void readArray(int *a, size_t nElem){
    for (int i= 0; i < nElem; i++){
        cout << i << ": ";
        cin >> a[i]; //Importante
    }
}

int findValueInArray(const int *a, size_t nElem, int value, size_t pos1 = 0, size_t pos2 = -1){
    //pos2 = -1 pq é o final QUANTO TEMPO TIVE A PROCURA DISSO
    for (int i = pos1; i < nElem && i < pos2; i++){
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInArray(const int *a, size_t nElem, int value, size_t pos1, size_t pos2, size_t *index){
    int sum = 0;
    for (int i = pos1; i<nElem && i< pos2; i++){
        if (a[i] == value){
            index[sum] = i;
            sum ++;
        }
    }
    return sum;
}

int test11(){
    int max = 4;
    int m = 4;
    int *arr;
    arr = new int [max];
    size_t *i; //Importante size_t em vez de int
    i = new size_t [m];
    readArray(arr, 4);
    cout << findValueInArray(arr, 4, 20) << endl;
    cout<<findMultValuesInArray(arr, 4, 10, 0, 4, i) << endl;
}

int main(){
    //PERGUNTA 4.1
    //test1();

    //PERGUNTA 4.2
    //test2()

    //PERGUNTA 4.3
    //test3();

    //PERGUNTA 4.4
    //test4();

    //PERGUNTA 4.5
    //test5();

    //PERGUNTA 4.6
    //test6();

    //PERGUNTA 4.7

    /*int x = 1, y = 2;
    int &ref_x = x, &ref_y = y;
    ref_x = ref_y;
    // referencia de x = referencia de y logo x = y
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ref_x = " << ref_x << "; ref_y = " << ref_y << endl;*/


    /*int x = 1, y = 2;
    int *ptr_x = &x, *ptr_y = &y;
    ptr_x = ptr_y;
    // Muda apontador e endereço mas não valor acho
    cout << "x = " << x << "; y = " << y << endl;
    cout << "ptr_x = " << ptr_x << "; ptr_y = " << ptr_y << endl; cout << "*ptr_x = " << *ptr_x << "; *ptr_y = " << *ptr_y << endl;*/

    /* Pointer tem memory address de outra variavel, usando-se *, apontador de zona de mem
     * Reference faz store do address de algo, referencia p endereço de mem */

    /*
    int values[] = { 2, 3, 5, 7, 11, 13 };
    int *p = values + 1;
    cout << values[1] << endl;
    cout << values + 1 << endl;
    cout << *p << endl;
    cout << *(values + 3) << endl;
    cout << p+1 << endl;
    cout << p[1] << endl;
    cout << p-values << endl;

    * -> valor
    nada -> endereço

    values[1] is the value stored at index 1 of the array values
    values + 1 is the address of the value at index 1 of the array values
    *p is the value stored 4 bytes after the the base address of the array values
    *(values + 3) is the value stored 12 bytes after the base address of the array values
    p + 1 is the address where the element at index 2 of the array values is stored
    p[1] is the value stored 4 bytes after the value stored on the address given by p + 1, which in this case is the 5
    p - values is the index in the array of the value stored 4 bytes after the base address
    */

    // *(int *) number -> (int *) usa-se para ler uma int daí e *(int*) é o valor

    //PERGUNTA 11
    test11();
    return 0;
}