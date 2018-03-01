//
// Created by obhat on 2/28/2018.
//

#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "please enter a grade" << endl;
    cin >> x ;

    switch(x)
    {
        case 90 ... 100:
            cout << "A"<< endl;
            break;
        case 80 ... 89:
            cout << "B" << endl;
            break;
        case 70 ... 79:
            cout << "C" << endl;
            break;
        case 60 ... 69:
            cout << "D" << endl;
            cout << "Would you like to enter another grade ? Y/ N" << endl;
            break;
        default:
            cout << "you fail the class" << endl;

    }



    return 0;
}