#include <iostream>
using namespace std;

void printDivider();


int main(){

    printDivider();
    cout << "CS110 FUNCTION PRACTICE" <<endl;
    printDivider();
    cout << "Prototype -> Call -> Definition" <<endl;
    printDivider();


    return 0;
}

void printDivider(){
    int i = 1;
    while(i<=30){
        cout << "_";
        i ++ ;

    }
    cout << endl;
}