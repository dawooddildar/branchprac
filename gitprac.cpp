#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2);
void printTravelAdvice(double distance);


int main(){

    double x1, y1, x2, y2 ;

    cout << "Enter x1, y1, x2, y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2 ;

    cout << fixed << setprecision(2);
    cout << "Distance is: " << calculateDistance(x1, y1, x2, y2) << endl;

    double distance ;
    distance = calculateDistance(x1, y1, x2, y2);
    printTravelAdvice(distance);

    return 0;
}

double calculateDistance(double x1, double y1, double x2, double y2){
    return sqrt(pow (x2 - x1, 2) + pow (y2 - y1, 2));}

void printTravelAdvice(double distance){
    if ( distance <= 1.0){
        cout << "Walk " <<endl;
    }
    else if (distance <= 5.0){
        cout << "Use Shuttle" <<endl;
    }
    else{
        cout << "Use other Transport" <<endl;
    }
}
        



