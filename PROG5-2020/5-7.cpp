#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

struct Date {
    unsigned int year, month, day;
};

void readDate(Date *d){
    cout << "dd/mm/yyyy: ";
    cin >> d->day; cin >> d->month; cin >> d->year;
}

void writeDate(const Date *d){
    cout << setfill('0');
    //Espaço não ocupado é preenchido por 0
    cout << setw(4) << d->year << '/' << setw(2) << d->month << '/' << setw(2) << d->day << endl;
    //Espaço que deve ser preenchido
}

int compareDates(const Date *d1, const Date *d2){
    if (d1->year > d2->year){
        return 1;
    }
    else if (d1->year < d2->year){
        return -1;
    }
    else{
        if (d1->month > d2->month){
            return 1;
        }
        else if (d1->month < d2->month){
            return -1;
        }
        else{
            if (d1->day > d2->day){
                return 1;
            }
            else if (d1->day < d2->day){
                return -1;
            }
            else{
                return 0;
            }
        }
    }
}

void sortDates(Date *d1, Date *d2){
    if (compareDates(d1,d2) == 1){
        Date temp = *d1;
        *d1 = *d2;
        *d2 = temp;
    }
}

int main(){
    Date *d1 = new Date;
    Date *d2 = new Date;
    readDate(d1); readDate(d2);
    writeDate(d1); writeDate(d2);
    cout << compareDates(d1, d2) << endl;
    writeDate(d1); writeDate(d2);
}