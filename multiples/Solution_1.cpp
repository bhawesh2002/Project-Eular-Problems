/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
<This is the second solution to the problem>*/

#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    int sum3 = 0;
    int sum5 = 0;
    int common_multiple = 0;
    for (int i = 0; i < num; i++)
    {
        if (i % 3 == 0)
        {
            sum3 += i;
        }
        if (i % 5 == 0)
        {
            sum5 += i;
        }
        if (i % 15 == 0)
        {
            common_multiple += i;
        }             
    }
    int total = (sum3 + sum5) - common_multiple;
    cout << "The sum of numbers below " << num << " which are the multiples of 3 & 5 is " << total << endl;

    return 0;  
}
