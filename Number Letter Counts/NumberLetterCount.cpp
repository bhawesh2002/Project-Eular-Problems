/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num_to_letter[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    string str = to_string(num);
}