/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    string num;
    cout << "Enter a number: ";
    cin >> num;
    string in_words;
    for (int i = 0; i < num.length(); i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 9; j++)
            {
                if (j == num[i])
                {
                    /* code */
                }
            }
        }
    }

    return 0;
}