/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting
with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the
sum of the even-valued terms.*/
//LA SUMA DE LOS PARES
#include<iostream>
using namespace std;

int main(){
    long fib1 = 1;
    long fib2 = 1;
    int sum = 0;
    int result = 0;

    while(result < 4000000){
        if(result % 2 == 0){
            sum += result;
        }
        result=fib1 + fib2;
        fib2 = fib1;
        fib1 = result;
    }
    cout<< sum;
}