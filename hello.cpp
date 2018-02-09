//
// Created by Divine on 2/8/2018.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    //std::cout<<"please enter an integer from 0 to 10"<<std::endl;
    cin>>n;

    int x;

    for(x=n/2; x<n; x++)
    {
        if(x>=n/2.0 and x<n)
        {
            cout<<x;
            if(x!=n-1)
            {
                cout<<",";
            }
            ;
        }
    }
    //return 0;
}

