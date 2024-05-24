#include <iostream>
using namespace std;
int main()
{
    int n1,n2,x;
    cout<< "Enter 1st integer for arithmetic operation:";
    cin>>n1;
    cout<< "Enter 2nd integer for arithmetic operation:";
    cin>>n2;
    cout<< "Select:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n";
    cin>>x;
    if (x == 1)
    {
        cout<< n1+n2;
    }
    else if (x == 2)
    {
        cout<< n1-n2;
    }else if (x == 3)
    {
        cout<< n1*n2;
    }
    else
    {
        cout<< n1/n2;
    }

    return 0;
}
