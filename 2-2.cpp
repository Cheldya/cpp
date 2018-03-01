#include <iostream>
using namespace std;

int main() {


        int x;


        cout << "please enter a value" << endl;
        cin >> x;

        do {

            cout << " m = " << x << endl ;
                x  = x -1 ;
               // cout << "m = " << x << endl;

        } while ( x != 0);


        return 0;

    
}