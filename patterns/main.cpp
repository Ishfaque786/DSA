#include <iostream>
using namespace std;

// pattern for
//             * * *
//             * * *
//             * * *
//
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// pattern for
//
//             *
//             * *
//             * * *
//
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// pattern for
//
//             1
//             1 2
//             1 2 3
//
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

// pattern for
//
//             1
//             2 2
//             3 3 3
//
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

// pattern for
//
//             * * *
//             * *
//             *
//
void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// pattern for
//
//             1 2 3 4 5
//             1 2 3 4
//             1 2 3
//             1 2
//             1
//

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

// pattern for
//
//                *
//              * * *
//            * * * * *
//

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (i + 1) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


// pattern for
//
//            * * * * *
//              * * *
//                *
//

void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int numberOfTest;

    cin >> numberOfTest;

    for (int i = 0; i < numberOfTest; i++)
    {
        int n;
        cin >> n;
        pattern8(n);
        cout << endl;
    };
}