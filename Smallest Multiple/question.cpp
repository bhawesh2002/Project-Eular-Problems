/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <iostream>

using namespace std;

int main(){
    int num = 1;
    int divisible = 1;
    int evenly_divisible;
    while(divisible  <= 20)
    {
        if(num % divisible == 0)
        {
            evenly_divisible = num;
            divisible++;
        }else{
            num++;
            divisible = 1;
        }        
    }
    cout << evenly_divisible << endl;   
    
    return 0;        
}