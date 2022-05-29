/*The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.*/

#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int largest_terms;
    int num = 1;
    int starting;
    while (num <= 13)
    {
        if (num % 2 == 0)
        {
            cout << num;
            num = num / 2;
            counter++;
        }
        else if (num % 2 != 0)
        {
            cout << num;
            num = (3 * num) + 1;
            counter++;
        }
        cout << " + ";
        if (num <= 1)
        {
            cout << num;
            counter = 1;
            if (counter > largest_terms)
            {
                largest_terms = counter;
            }
        }
    }
    cout << "\nLargest Terms = " << largest_terms << endl;
    cout << num << endl;
    return 0;
}