#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand (time(0));
    int u,r;

    r= rand()% 15;
    cout << "Guess a number from 0 to 15\n" ;

    cin>>u;

    while ( u != r )
    {
        cout<< ( u > r ? "\nGenerated number is smaller. Try again\n" : "\nGenerated number is larger. Try again\n");
        cin>> u;

    }
     cout<< "\nYou guessed the generated number. Congrats!" ;


    return 0;
}
