#include <iostream>
#include <string>
using namespace std;



int readNumber(string msg)
{
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

void printInvertedPattern(int num)
{
        cout << "\n";
    for (int i = 1; i <= num; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            cout << i;
        }
        cout << "\n";
    }
        cout << "\n";
}

int main()
{
    printInvertedPattern(readNumber("Please enter number?"));

    return main();
}