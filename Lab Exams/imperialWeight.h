#ifndef IMPERIAL_WEIGHT_H_
#define IMPERIAL_WEIGHT_H_

#include <iostream>
using namespace std;


class imperialWeight{
    protected: 
    int pounds;
    int ounces;

    public:
    imperialWeight ();
    imperialWeight (int, int);
    void setPounds(int);
    void setOunces(int);
    int getPounds();
    int getOunces();
    friend ostream& operator<<(ostream& out, imperialWeight&);
    friend bool operator<(const imperialWeight&,const imperialWeight&);
    friend bool operator>(const imperialWeight&,const imperialWeight&);
    friend bool operator<=(const imperialWeight&,const imperialWeight&);
    friend bool operator>=(const imperialWeight&,const imperialWeight&);
    friend imperialWeight operator+(const imperialWeight&,const imperialWeight&);

}; 




#endif //IMPERIAL_WEIGHT_H