#include <iostream>

int Fibonacci(int n);

std::string decimalToBinary(int n);

int main(){

std::cout<<decimalToBinary(15);


    return 0;
}

int Fibonacci(int n){
    if (n==1 || n==2){
        return 1;
    }

   return Fibonacci(n-1)+Fibonacci(n-2);
}



std::string decimalToBinary(int n){
    if (n==0){
        return "0";
    }

    if (n==1){
        return "1";
    }

    return (decimalToBinary(n/2)+std::to_string(n%2));

}