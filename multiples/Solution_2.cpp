/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
<This is the first solution of the above problem>*/

#include <iostream>

using namespace std;

int main(){
    int count;
    cout << "Enter Any number : ";
    cin >> count;
    int list[count];                         //used list to store all the values (optional)
    int j = 0;
    int k = 0;
    int common;
    int sum3 = 0;
    int sum5 = 0;
    int sum15 = 0;
    for (int  i = 0; i < count; i++)
    {
        list[i] = i;
        double formula3 = list[i]/double(3);                    //can use i in place of list[1]
        double formula5 = list[i]/double(5);                    //can use i in place of list[1]
        double formula15 = list[i]/double(15);                  //can use i in place of list[1]
        
        if (formula3 == j)
        {
            j++;
            sum3 += list[i];                                     //can use i in place of list[1]
        }
        if (formula5 == k)
        {
            k++;
            sum5 += list[i];                                     //can use i in place of list[1] 
        }
        if (formula15 == common)
        {
            common++;
            sum15 += list[i];                                     //can use i in place of list[1]
        }
        

    }
    cout << sum15 << endl;
    int total = (sum3 + sum5) - sum15;
    cout << "Sum of multiples of 3 and 5 under " <<  count <<" is " << total << endl;
    return 0;
    
}