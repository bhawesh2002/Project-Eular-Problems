/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for (int a = 0; a <= 1000; a++)
    {
        for (int b = 0; b <= 1000; b++)
        {
            for (int c = 0; c <= 1000; c++)
            {
                int calc = (a * a) + (b * b);
                if ((calc == (c * c)) && ((a + b + c) == 1000))
                {
                    cout << (a * b * c) << endl;
                }
            }
        }
    }
}