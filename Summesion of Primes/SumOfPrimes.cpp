/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include <iostream>

using namespace std;

int main()
{
    int counter = 2000000;
    int prime;
    int sum = 0;
    for (int num = 2; num < counter; num++)
    {
        for (int factor = 2; factor <= num; factor++)
        {
            if (num % factor == 0) // yields numbers that gives remainder 0 when num % factor.ForEx:- 2,3,2,5,2,3,7etc.
            {
                int check = num / factor;
                if (check == 1) // after division if num/factor is 1 then it is a prime number
                {
                    prime = factor;
                    sum = sum + prime;
                }
                break;
            }
        }
    }
    cout << sum << endl;
}