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

//PERGUNTA 1.a
/*bool isHydroxide_a(char compound[]){
    int a = strlen(compound);
    if (compound[a-1] == 'H' && compound[a-2] == 'O'){
        return true;
    }
    return false;
}
int um_a(){
    char arr[10] = "MgOH";
    cout << isHydroxide_a(arr);
}*/

//PERGUNTA 1.b
/*bool isHydroxide_b(string compound){
    int a = compound.length();
    if (compound[a-1] == 'H' && compound[a-2] == 'O'){
        return true;
    }
    return false;
}
int um_b(){
    string arr = "MgO";
    cout << isHydroxide_b(arr);
}*/
//Ou seja, p array podemos usar strlen(), p string s.length()

//PERGUNTA 2
/*bool sequenceSearch(string s, int nc, char c){
    int len = s.length();
    int a = 0;
    for (int i = 0; i < len; i++){
        if (a == nc){
            return true;
        }
        if (s[i] == c){
            a++;
        }
        else{
            a = 0;
        }
    }
    return false;
}
int dois(){
    cout << sequenceSearch("aadfgaart", 3, 'a');
}*/

//PERGUNTA 3
/*void decompose(string compound){
    char a = compound[0];
    string s(1, a);
    for (int i = 1; i < compound.length(); i++){
        if (int(compound[i]) < 65 || int(compound[i]) > 122){
            continue;
        }
        if (isupper(compound[i])){
            cout << s << '\n';
            s = compound[i];
        }
        else {
            s += compound[i];
        }
    }
    cout << s << '\n';
}
int tres(){
    decompose("H2O");
}*/

//PERGUNTA 4
/*string normalizeName(string name){
    bool spaces = true;
    string result;
    for(int i = 0; i < name.length(); i++){
        if (spaces && name[i] == ' '){
            //se estiver no inicio nao conta o espaço
            continue;
        }
        else if (int(name[i]) >= 97 && int(name[i]) <= 122){
            spaces = false;
            result += char(int(name[i] - 32));
        }
        else if(name[i] == ' '){
            spaces = true;
            result += ' ';
            // se houver um espaço a seguir não o conta
        }
        else{
            result += name[i];
        }
    }

    result += ' ';

    vector<string> v1;
    int a=0;
    for(int i = 0; i < result.length(); i++){
        if (result[i] == ' '){
            v1.push_back(result.substr(a, i-a));
            a = i+1;
        }
    }
    result = "";
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] == "DE" || v1[i] == "DA" || v1[i] == "DO" || v1[i] == "DAS" || v1[i] == "DOS" || v1[i] == "E") {
            continue;
        }
        else {
            result += v1[i] + ' ';
        }
    }
    result = result.substr(0, result.length() - 1);
    return result;
}

int quatro(){
    cout << normalizeName("Joao De    Miguel    ");
}*/

//PERGUNTA 5
/*struct Fraction {
    int numerator;
    int denominador;
};
Fraction readFracc(){
    Fraction frac1;
    char sep;
    cin >> frac1.numerator >> sep >> frac1.denominador;
    if (frac1.denominador == 0){
        cout << "Impossible";
    }
}
Fraction reduceFracc(Fraction f){
    int t = 0, mdc;
    while(f.denominador != 0){
        t = f.numerator;
        f.numerator = f.denominador;
        f.denominador = t % f.denominador;
    }
    mdc = f.numerator;
    f.numerator = f.numerator/mdc;
    f.denominador = f.denominador/mdc;
}

int cinco(){
    Fraction f;
    f.numerator = 20;
    f.denominador = 40;
    readFracc();
    reduceFracc(f);
}*/

//PERGUNTA 6
/*void readIntArray(int a[], int nElem){
    for (int i = 0; i < nElem; i++){
        cout << i << " ";
        cin >> a[i];
    }
}
int searchMultValueInIntArray(const int a[], int nElem, int value, int index[]){
    int j = 0, result = 0;
    for (int i = 0; i < nElem; i++){
        if (a[i] == value){
            index[j] = i;
            j++;
            result++;
        }
    }
    return result;
}
void showIntArray(int a[], int nElem){
    for (int i = 0; i < nElem; i++){
        cout << a[i] << endl;
    }
}

int seis(){
    int nElem = 5;
    int a[nElem];
    int idx[nElem];
    readIntArray(a, nElem);
    cout << searchMultValueInIntArray(a,nElem,2,idx)<< endl;
    showIntArray(idx, nElem);
}*/

//PERGUNTA 7
/*vector<int> readIntVector(int nElem){
    vector<int> v;
    for (int i = 0; i < nElem; i++){
        int valor;
        cout << i << " ";
        cin >> valor;
        v.push_back(valor);
    }
}
vector<int> searchMultValueInIntVector(const vector<int> &v, int value){
    vector<int> index;
    for (size_t i = 0; v.size(); i++){
        if (v[i] == value){
            index.push_back(i);
        }
    }
    return index;
}
void showIntVector(vector<int> a) {
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
}

int sete(){
    int nElem = 5;
    vector<int> v, index;
    v = readIntVector(nElem);
    index = searchMultValueInIntVector(v,2);
    showIntVector(index);
}*/

//PERGUNTA 8
/*void bubblesort(vector<string> &v){
    for(int j = 0; j<v.size(); j++){
        string temp;
        for (int i = 0; i < (v.size()-j-1); i++){
            if (v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
}
int oito(){
    vector<string> v = {"Rui", "Eva", "Luis", "Ze", "Amelia"};
    bubblesort(v);
    for (int i= 0; i<v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
};*/

//PERGUNTA 9
/*int binarySearch(const vector<string> &v, string value){
    int bottom = 0, top = v.size()-1, middle;
    bool found = false;
    while(bottom <= top && found == false){
        middle = (top+bottom)/2;
        if (v[middle] == value){
            found = true;
        }
        else if (v[middle] < value){
            bottom = middle + 1;
        }
        else{
            top = middle - 1;
        }
    }
    if (found){
        return middle;
    }
    else{
        return -1;
    }
}
int nove(){
    vector<string> v = {"A", "B", "C", "D", "E", "F"};
    cout << binarySearch(v, "B");
}*/

//PERGUNTA 10
/*void apagar(vector<int> &v, int index){
    int temp;
    for (int i = index; i < v.size() - 1; i++){
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
    }
    v.resize(v.size() - 1);
}
void removeDuplicates(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            if (v[i] == v[j]){
                apagar(v,j);
            }
        }
    }
}
int dez(){
    vector<int> v = { 1,1,5,9,8,5,7,9 };
    removeDuplicates(v);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}*/

//PERGUNTA 11
/*void apagar(vector<int> &v, int index){
    int temp;
    for (int i = index; i < v.size() - 1; i++){
        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
    }
    v.resize(v.size() - 1);
}
void removeDuplicates(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            if (v[i] == v[j]){
                apagar(v,j);
            }
        }
    }
}
void bubblesort(vector<int> &v){
    for(int j = 0; j<v.size(); j++){
        int temp;
        for (int i = 0; i < (v.size()-j-1); i++){
            if (v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
}
vector<int> uniao(const vector<int> &v1, const vector<int> &v2){
    vector<int> result;
    for (int i = 0; i< v1.size(); i++){
        result.push_back(v1[i]);
    }
    for (int i = 0; i< v2.size(); i++){
        result.push_back(v2[i]);
    }
    bubblesort(result);
    removeDuplicates(result);
    return result;
}
vector<int> intersection(const vector<int> &v1, const vector<int> &v2){
    vector<int> result;
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            if (v1[i] == v2[j]){
                result.push_back(v1[i]);
            }
        }
    }
    return result;
}
int onze(){
    vector<int> v1 = { 1,2,3,5,6,8 };
    vector<int> v2 = { 1,4,3,5,6,9 };
    vector<int> result;
    result = uniao(v1, v2);
    for (int i = 0; i < result.size(); i++) {

        cout << result[i] << ' ';
    }
}*/

//PERGUNTA 12
/*double executeOperation(string op){
    istringstream instr(op);
    double n1, n2;
    char sig;
    instr >> n1 >> sig >> n2;
    switch (sig){
        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '/':
            return (double)n1 / (double)n2;
        case '*':
            return n1 * n2;
        default:
            break;
    }
}
int doze(){
    string a = "12 + 4";
    cout << executeOperation(a);
}*/

int main() {
    //um_a();
    //um_b();
    //dois();
    //tres();
    //quatro();
    //cinco();
    //seis();
    //sete();
    //oito();
    //nove();
    //dez();
    //onze();
    //doze();
}
