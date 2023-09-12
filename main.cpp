#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 23; i++)
    {
        for (int j = 1; j <= 40; j++)
        {
            if (i >= 1 && i <= 11)
            {
                if (i == 1 && j >= 11 && j <= 30)
                {
                    cout << "-";
                }
                else if (i > 1 && (12 - i) == j)
                {
                    cout << "/";
                }
                else if (i > 1 && (29 + i) == j)
                {
                    cout << "\\";
                }
                else if (i <= 11 && (10 + i) == j)
                {
                    cout << "\\";
                }
                else if ((12 - i) <= j && (10 + i) >= j)
                {
                    cout << "X";
                }
                else if ((10 + i) <= j && (29 + i) >= j)
                {
                    cout << "Z";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (i <= 16)
            {
                if (j == 1 || j == 21 || j == 40)
                {
                    cout << "|";
                }
                else
                {
                    cout << "%";
                }
            }
            else
            {
                if (j == 1 || j == 21 || j == 40)
                {
                    cout << "|";
                }
                else if (j <= 6 || (j >= 15 && j <= 21))
                {
                    cout << "*";
                }
                else if (j == 7 || j == 14)
                {
                    cout << "|";
                }
                else if (j == 22 || j == 39)
                {
                    cout << "*";
                }
                else if (i <= 20)
                {
                    if (j == 23 || j == 38)
                    {
                        cout << "|";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    if (j >= 23 && j <= 38)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
        cout << std::endl;
    }
    return 0;
}
