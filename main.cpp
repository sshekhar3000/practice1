#include <iostream>

using namespace std;

int main()
{
    int p;
    cin>>p;
    cout<< "here is the table for the no. "<<p<<endl;

    for(int x=1; x<=10; x++){
        cout<< p << "*" <<x<< " = "<<p*x<<endl;
    }
}
