#include <iostream>
using namespace std;

// pattern for
//             * * *
//             * * *
//             * * *
//
// code studio link:-  https://bit.ly/3QfK2k3
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3VADLAt
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3CiWV74
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3Gzv70S
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3WXGSDD
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3i06XDu
// leet code link:-  n/a
//
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
// code studio link:- https://bit.ly/3GzvAAa
// leet code link:-  n/a
//
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

// pattern9  for
//
//            * * * * *
//              * * *
//                *
// code studio link:-https://bit.ly/3IqmG9k
// leet code link:-  n/a
//
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

// pattern  for
//
//                *
//              * * *
//            * * * * *
//            * * * * *
//              * * *
//                *
// code studio link:-https://bit.ly/3GyUIHp
// leet code link:-  n/a
//
//

void pattern9(int n)
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

// pattern  for
//
//                *
//                * *
//                * * *
//                * *
//                *
// code studio link:-https://bit.ly/3WZoytT
// leet code link:-  n/a
//
//

void pattern10(int n)
{

    for (int i = 1; i <= (2 * n) - 1; i++)

    {
        int stars = i;

        if (i > n)
            stars = (2 * n) - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// pattern  for
//
//                1
//                0 1
//                1 0 1
//                1 0 1 0
//                1 0 1 0 1
//
// code studio link:- https://bit.ly/3WLiUvW
// leet code link:-  n/a
//
//

void pattern11(int n)
{

    int start = 1;
    for (int i = 1; i <= n; i++)

    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";

            if (start == 1)
                start = 0;
            else
                start = 1;
        }

        cout << endl;
    }
}

// pattern for
//
//            1      1
//            12    21
//            123  321
//            12344321
//
// code studio link:- https://bit.ly/3GzvAAa
// leet code link:-  n/a
//
//

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }

         for (int j = i; j >= 1; j--)
        {
            cout << j;
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
        pattern12(n);
        cout << endl;
    };
    return 0;
}