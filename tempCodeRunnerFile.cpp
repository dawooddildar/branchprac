#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void printStudentCard( string name, int semester) ;

int main() {

    

    printStudentCard( "name", 7) ;

   
    return 0;
}

void printStudentCard( string name, int semester) {
    cout << "Name is: "<< name << endl << "Semester is: " << semester << endl ;
}
