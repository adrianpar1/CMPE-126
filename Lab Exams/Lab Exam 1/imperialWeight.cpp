#include <iostream>
#include "imperialWeight.h"

using namespace std;

imperialWeight::imperialWeight() : pounds(0), ounces(0){
}

imperialWeight::imperialWeight(int pounds, int ounces) : pounds(pounds), ounces(ounces){
    if (pounds<0){
        throw out_of_range("POUNDS MUST BE POSITIVE");
    }
    if (ounces<0 || ounces >15){
        throw out_of_range("OUNCES MUST BE POSITIVE AND LESS THAN 15");
    }
}

void imperialWeight::setPounds(int pounds){
    this->pounds=pounds;
}

void imperialWeight::setOunces(int ounces){
    this->ounces=ounces;
}

int imperialWeight::getPounds(){
    return pounds;
}

int imperialWeight::getOunces(){
    return ounces;
}

ostream& operator<<(ostream& out, imperialWeight& weight){
    out<<weight.pounds<<"lbs, "<<weight.ounces<<"oz";
    return out;
}

bool operator<(const imperialWeight& weight1,const imperialWeight& weight2){
    if (weight1.pounds<weight2.pounds){
        return true;
    }
    else if (weight1.pounds==weight2.pounds){
        if (weight1.ounces<weight2.ounces){
            return true;
        }
    }
    return false;
}

bool operator>(const imperialWeight& weight1,const imperialWeight& weight2){
        if (weight1.pounds>weight2.pounds){
        return true;
    }
    else if (weight1.pounds==weight2.pounds){
        if (weight1.ounces>weight2.ounces){
            return true;
        }
    }
    return false;
}

bool operator<=(const imperialWeight& weight1,const imperialWeight& weight2){
        if (weight1.pounds<=weight2.pounds){
        return true;
    }
    else if (weight1.pounds==weight2.pounds){
        if (weight1.ounces<=weight2.ounces){
            return true;
        }
    }
    return false;

}
bool operator>=(const imperialWeight& weight1,const imperialWeight& weight2){
        if (weight1.pounds>=weight2.pounds){
        return true;
    }
    else if (weight1.pounds==weight2.pounds){
        if (weight1.ounces>=weight2.ounces){
            return true;
        }
    }
    return false;
}

imperialWeight operator+(const imperialWeight& weight1,const imperialWeight& weight2){
    imperialWeight newWeight;
    newWeight.pounds=weight1.pounds+weight2.pounds;

        if(weight1.ounces+weight2.ounces>=15){
            newWeight.pounds=newWeight.pounds+1;
            newWeight.ounces=(weight1.ounces+weight2.ounces)-15;
        }
        else{
            newWeight.ounces=weight1.ounces+weight2.ounces;
        }

    return newWeight;
}

