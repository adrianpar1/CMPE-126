#include <iostream>

bool check_palindrome(const int &n);

int main(){

    if (check_palindrome(1234321)){
        std::cout<<"Is a palindrome";
    }
    else std::cout<<"Is not a palindrome";

}

bool check_palindrome(const int &n) {

    //BASE CASES
    if (n>=0 && n<10){
        return true;
    }

    if (n%10==0 && n!=0){
        return false;
    }

    //Getting the length of the integer
    int temp=n;
    int length = 0;
    while (temp>0){
        temp = temp/10;
        length++;
    }

    //Getting a divisor to properly get the first digit to compare to the last digit
    int divisor = 1;
    for(int i=1; i<length; i++){
        divisor = divisor*10;
    };

    int first=n/divisor;
    int last =n%10;
    if (first!=last){
        return false;
    }

    //Removing the first and last digit, then using recursion to check the rest of the number
    int newNumber=(n%divisor)/10;
    return check_palindrome(newNumber);
}

//Is a palindrome%  
