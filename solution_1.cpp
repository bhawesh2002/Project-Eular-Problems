/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

#include <iostream>

using namespace std;

int main(){
    long long num = 600851475143;
    long long a;
    long long lpf;
    for (a = 2;num > lpf; a++)
    {
        if (num % a == 0)
        {
            num = num / a;
            lpf = a;
            a++;
            cout << "num: " << num << "  Prime Factor: " << lpf <<  endl; 
        }                        
    }    
    cout << "The largest prime factor of 600851475143 is " << lpf << endl;
    return 0;
}