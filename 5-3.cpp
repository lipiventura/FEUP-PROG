#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int cmpr(const void *a,const void *b){
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;
    return strcmp(pa, pb);
}

int main(){
    const char *arr[] = {"L", "I", "P", "I"};
    qsort(arr, sizeof(arr)/sizeof(const char *), sizeof(const char *), cmpr);
    for (int i = 0; i < sizeof(arr)/sizeof(const char *); i++){
        cout << arr[i] << " ";
    }
    //size = sizeof(arr)/sizeof(const car *)
}

