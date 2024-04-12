#include <iostream>

unsigned int padovan(const unsigned int &n);

int main(){

padovan(5);

}

unsigned int padovan(const unsigned int &n){
    
    std::cout<<"In padovan with n = "<<n<<std::endl;

    if ((n==0) || (n==1) || (n==2)){
        std::cout<<"Returning 1 with n = "<<n<<std::endl;
        return 1;
    }

    int p=padovan(n-2)+padovan(n-3);
    std::cout<<"Returning "<<p<<" with n = "<<n<<std::endl;
    return p;
    
}