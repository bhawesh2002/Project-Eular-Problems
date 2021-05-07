/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + .... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + .... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is,
3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <iostream>

long sum_of_square(int max);
long square_of_sum(int max);

using namespace std;

int main(){
    int max = 100;
    long sum_of_square_ = sum_of_square(max);
    long square_of_sum_ = square_of_sum(max);
    long difference = square_of_sum_ - sum_of_square_;
    cout << square_of_sum_ << " - " << sum_of_square_ << " = " << difference << endl;
    return 0;
}

long sum_of_square(int max){
    long sum_of_square = 0;
    for (int i = 0; i <= max; i++)
    {
        sum_of_square += i * i;
    }
    return sum_of_square;    
}

long square_of_sum(int max){
    int sum = 0;
    long square_of_sum = 0;
    for (int i = 0; i <= max; i++)
    {
        sum += i;
    }
    square_of_sum = sum * sum;
    return square_of_sum;    
}