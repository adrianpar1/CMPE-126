#include <iostream>

int pow(int x, int n);

int main(){

std::cout<<pow(2,2);


    return 0;
}

int pow(int x, int n)
{
    if (n==1){
        return x;
    }

    return x*pow(x,n-1);
}