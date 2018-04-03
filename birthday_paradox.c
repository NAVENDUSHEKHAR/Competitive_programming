#include <iostream>
using namespace std;
int main(){
    float num=365 , den= 365 ;
    float p = 1;
    int count=1;
    
    while(p>0.5)
    { 
        num--;
       p*=num/den;
       
       count++;
    
        
    }
    
    cout<<"the max number of people needed to have 50% of chance of having same birthday is "<<count;
}
