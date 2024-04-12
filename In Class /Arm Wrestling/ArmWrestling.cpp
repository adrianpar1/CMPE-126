#include <iostream>
void printSchedule(int n);

int main(){
/*Rules:
-Every player must play every other player
-The person with the most wins is the champion
-Ties are resolved using time to win*/

printSchedule(10);


return 0;
}

void printSchedule(int n){
    
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){    //This prevents doubling, since player 1 vs player 1 can't exist, (player 1 vs player 9) and (player 9 vs player 1) are the same
            std::cout<<"Player "<<i<<" vs Player "<<j<<std::endl;
        }
    }

  

}