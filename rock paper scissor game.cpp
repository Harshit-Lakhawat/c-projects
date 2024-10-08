#include <iostream>
#include<ctime>
using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main() {
  char player;
  char computer;
  char playAgain;
  srand(time(0));
  do{
    player = getuserchoice();
    cout << "you choose : ";
    showchoice(player);

    computer = getcomputerchoice();
    cout << "computer choose : ";
    showchoice(computer);

    choosewinner(player,computer);

    cout << "play Again? (y/n) : ";
    cin >> playAgain;
  } while(playAgain == 'y');
    return 0;
}
char getuserchoice() {
  char player;
  cout << "ROCK-PAPER-SCISSORS-GAME!!!\n";
  do{
    cout <<"choose one of the following\n";
    cout << "***************************\n";
    cout <<"'r'-for rock\n";
    cout <<"'p'-for paper\n";
    cout <<"'s'-for scissirs\n";
    cin >> player;
  }while(player!='r' && player!='p' && player!='s');
  return player;
}
char getcomputerchoice() {
  srand(time(0));
  int num = rand() %3 + 1;
  switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }
  return ' ';
  
}
void showchoice(char choice) {
  switch(choice){
    case 'r': cout << "rock\n";
    break;
    case 'p': cout << "paper\n";
    break;
    case 's': cout << "scissor\n";
    break;
  }
}
void choosewinner(char player, char computer) {
  switch(player){
    case 'r': if(computer=='r'){
      cout << "it's a tie\n";
              }
              else if(computer=='p'){
                cout << "computer wins you lose\n";
              }
              else{
                cout << "you win\n";
              }
              break;
      case 'p': if(computer=='p'){
        cout << "it's a tie\n";
                }
                else if(computer=='s'){
                  cout << "computer wins you lose\n";
                }
                else{
                  cout << "you win\n";
                }
                break;
      case 's': if(computer=='s'){
        cout << "it's a tie\n";
                }
                else if(computer=='r'){
                  cout << "computer wins you lose\n";
                }
                else{
                  cout << "you win\n";
                }
                break;
    
  }
}
