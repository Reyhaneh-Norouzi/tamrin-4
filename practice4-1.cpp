#include <iostream>

using namespace std;

int main() {

    int n, m;
    cout << "enter the n :" << endl;
    cin >> n;
    cout << "enter the m :" << endl;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++) {

            if (j % 2 == 0)
                cout << "*";
            else
                cout << "#";

        }
        cout << endl;
    }

    return 0;
}