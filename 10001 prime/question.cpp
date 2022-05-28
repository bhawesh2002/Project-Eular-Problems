/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?*/

#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int prime[10001];
    for (int num = 2; num <= LONG_MAX; num++)
    {
        for (int factor = 2; factor <= num; factor++)
        {
            if (num % factor == 0)           //yields numbers that gives remainder 0 when num % factor.ForEx:- 2,3,2,5,2,3,7etc.
            {
                int check = num / factor;       
                if (check == 1)              //after division if num/factor is 1 then it is a prime number  
                {
                    prime[counter] = factor;
                    cout << prime[counter] << endl;
                    counter++;
                }
                break;
            }
        }
        if (counter == 10001)
        {
            break;
        }
    }
    return 0;
}