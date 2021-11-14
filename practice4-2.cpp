#include<iostream>
#include<conio.h>

using namespace std;

main()
{
    int fact = 1, n, i;

    cout << "please enter a number: ";
    cin >> n;

    for (int i = 1; fact <= n; i++)
    {

        fact *= i;

        if (n == fact) {

            cout << "Yes" << endl;
        }

        else if (n != fact) {

            cout << "No" << endl;


        }
    }

    getch();

}
