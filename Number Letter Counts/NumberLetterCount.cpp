/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num_to_letter[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tenth_place[9] = {"ten", "twenty", "thrity", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    string thousand = "thousand";
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    int last;
    int counter = 0;
    while (num != 0)
    {
        last = num % 10;
        num = num / 10;
        cout << last;
        counter++;
    }
    cout << "\nNo of digits: " << counter;
}