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

class collatz
{
    int starting = 1;
    int num;
    int counter = 1;
    int largest_sequence;

public:
    collatz()
    {
        num = starting;
    }

    void print_values()
    {
        cout << starting << endl;
        cout << num << endl;
    }
    void set_value();
    void sequence();
};

void collatz::set_value()
{
    starting++;
    num = starting;
}
void collatz::sequence()
{

    while (starting <= 13)
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
            num = (num * 3) + 1;
            counter++;
        }
        cout << " + ";
        if (num <= 1)
        {
            cout << num << endl;
            counter = 1;
            set_value();
        }
    }
}
int main()
{
    int largest_terms;
    collatz c1;
    c1.set_value();
    c1.sequence();
    return 0;
}
