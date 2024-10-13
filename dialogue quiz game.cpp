#include <iostream>

using namespace std;
int main(){
  string questions[] = {"1. just let go!!! ",
                        "2. why do we fall bruce? to pick ourself up",
                        "3. in there last moments people show who they are",
                        "4. feel pain, know pain, accept pain"};

string options[][4]= {{"A. nagato", "B. tyler", "C. alford", "D. joker"},
                     {"A. nagato", "B. tyler", "C. alford", "D. joker"},
                     {"A. nagato", "B. tyler", "C. alford", "D. joker"},
                     {"A. nagato", "B. tyler", "C. alford", "D. joker"},
                    };
char answerkey[] = {'B','C','D','A'};

int size =sizeof(questions)/sizeof(questions[0]);
char guess;
int score=0;

for(int i=0; i<size; i++){
  cout << "**************************************\n";
  cout << questions[i] << '\n';
  cout << "**************************************\n";

  for(int j=0; j< sizeof(options[i])/sizeof(options[i][0]); j++){
    cout << options[i][j] << '\n';
    
  }
  cin>>guess;
  guess=toupper(guess);

  if(guess==answerkey[i]){
    cout << "CORRECT\n";
    score++;
    
  }
  else{
    cout << "WRONG\n";
    cout << "ANSWER :"<< answerkey[i]<<'\n';
  }
  
}

cout << "*********************************************\n";
cout << "                  RESULT                     \n";
cout << "*********************************************\n";
cout << "CORRECT GUESSES: "<< score<<'\n';
cout << "QUESTIONS:"<< size<<'\n';
cout << "SCORE: "<< (score/(double)size)*100<<'%';
  return 0;
  
}
