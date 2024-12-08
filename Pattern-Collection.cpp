/*

 * This program contains 30 different loop patterns, which cover a variety of star, number, and alphabet patterns.


 * The user is prompted to choose a pattern by entering a number (1 to 30), and the program will display the corresponding pattern.


 * Each pattern is implemented using nested loops to control the arrangement of characters.

*/

#include <iostream>
using namespace std;

// Star Patterns (1 - 14)
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= 2 * n - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j < 2 * i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j <= 2 * n + 1 - (2 * i + 1); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * n + 1 - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        cout << endl;
    }
}

void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j <= 2 * n + 1 - (2 * i + 1); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 1; j < 2 * i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Number Patterns (15 - 24)
void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << i - 1;
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}

void pattern22(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void pattern23(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

void pattern24(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {

            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;

            cout << (n - min(min(top, bottom), min(left, right))) << " ";
        }

        cout << endl;
    }
}

// Alphabet Patterns (25 - 30)
void pattern25(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern26(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern27(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern28(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern29(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;

        for (char j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << endl;
    }
}

void pattern30(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n, choice;

    cout << "Choose A Pattern (1 - 30): ";
    cin >> choice;

    cout << "Enter The Value Of N: ";
    cin >> n;

    switch (choice)
    {
    // Star Patterns (1 - 14)
    case 1:
        pattern1(n);
        break;
    case 2:
        pattern2(n);
        break;
    case 3:
        pattern3(n);
        break;
    case 4:
        pattern4(n);
        break;
    case 5:
        pattern5(n);
        break;
    case 6:
        pattern6(n);
        break;
    case 7:
        pattern7(n);
        break;
    case 8:
        pattern8(n);
        break;
    case 9:
        pattern9(n);
        break;
    case 10:
        pattern10(n);
        break;
    case 11:
        pattern11(n);
        break;
    case 12:
        pattern12(n);
        break;
    case 13:
        pattern13(n);
        break;
    case 14:
        pattern14(n);
        break;

    // Number Patterns (15 - 24)   
    case 15:
        pattern15(n);
        break;
    case 16:
        pattern16(n);
        break;
    case 17:
        pattern17(n);
        break;
    case 18:
        pattern18(n);
        break;
    case 19:
        pattern19(n);
        break;
    case 20:
        pattern20(n);
        break;
    case 21:
        pattern21(n);
        break;
    case 22:
        pattern22(n);
        break;
    case 23:
        pattern23(n);
        break;
    case 24:
        pattern24(n);
        break;

    // Alphabet Patterns (25 - 30)
    case 25:
        pattern25(n);
        break;
    case 26:
        pattern26(n);
        break;
    case 27:
        pattern27(n);
        break;
    case 28:
        pattern28(n);
        break;
    case 29:
        pattern29(n);
        break;
    case 30:
        pattern30(n);
        break;
    default:
        cout << "Invalid Choice" << endl << "Choose A Pattern (1 - 30)";
    }
    return 0;
}