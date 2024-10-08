#include <iostream>
using namespace std;
int main(){
  int num;
  int guess;
  int tries=0;
  srand(time(NULL));
  num=(rand()%100)+1;
  cout<<"**********NO. GUESSING GAME**********\n";
  do{
    cout<<"enter a guess no. between (1-100):";
    cin>>guess;
    tries++;
    if(guess>num){
      cout<<"too high\n";
    }
    else if(guess<num){
      cout<<"too low\n";
    }
    else{
      cout<<"CORRECT!!!   no. of tries;  "<< tries<<"\n";
    }
  }while(guess!=num);
    
   cout<<"*************************************\n";
  
  return 0;

  }
