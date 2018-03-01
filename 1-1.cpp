//
// Created by obhat on 2/28/2018.
//

#include <iostream>
using namespace std;

int main() {

    int p=1;
    int x;
    /*while(x<10){
        p*=x;
        x+=1;
    }
    cout << "p =" << p << "x =" << x << endl;*/
    for( x =1; x < 10; x++ )
    {
        p*=x;
    }
     cout << "p =" << p << "x =" << x << endl;
    return 0;
}