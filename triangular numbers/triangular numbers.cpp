#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int sum = 0;
    for (int i = 1; i <= LONG_MAX; i++)
    {
        sum += i;
        for (int j = 1; j < sum; j++)
        {
            if (sum % j == 0)
            {
                counter++;
            }
        }
        cout << "Total : " << counter << endl;
        if (counter > 500)
        {
            cout << sum << endl;
            break;
        }
        else
        {
            counter = 0;
        }
    }

    return 0;
}