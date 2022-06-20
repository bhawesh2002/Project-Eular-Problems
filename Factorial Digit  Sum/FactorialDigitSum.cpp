/*n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!*/

#include <iostream>

using namespace std;

int main()
{
    int result = 1;
    for (int i = 90; i <= 100; i++)
    {
        result = result * i;
    }
    cout << result << endl;
    return 0;
}