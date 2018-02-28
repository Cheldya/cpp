#include <iostream>
using namespace std;

int main() {

    int m;

    cout << "please enter a grade" << endl;

    cin >> m;

    if(m>=90)
    {
        cout <<" A"<< endl ;
    } else if (m >= 80) {
        cout << " B" << endl;
    } else if (m >= 70) {
        cout << " C" << endl;
    } else if (m >=60){

        cout <<" D" << endl;
    } else if (m < 60) {
        cout << "F" <<endl;
        cout << " sorry, you fail the class!" << endl;

    }

    return 0;
}