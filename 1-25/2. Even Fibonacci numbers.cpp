/*Project Euler Problem 2: Even Fibonacci numbers
 *Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 *1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *By considering the terms in the Fibonaci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<long> fib;
    fib.push_back(1);
    fib.push_back(2);
    int n;
    long next,sum=0;
    while(1)
    {
        n=fib.size();
        next=fib[n-1]+fib[n-2];
        if(next>4000000)
        {
            break;
        }
        else
        {
            fib.push_back(next);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(fib[i]%2==0)
        {
            sum+=fib[i];
        }
    }
    cout<<sum<<endl;
return 0;
}
