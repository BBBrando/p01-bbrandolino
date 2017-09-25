//Brendon Brandolino
#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {

  srand ( time(NULL) );
  int randomNumber;
  int difNum; // used to tell rand what difficulty
  char diff; // set difficulty
  char toPlay;
  int guess;

cout<<"Shall we play a game?"<<endl;
cout<<"(Y)es or (N)o"<<endl;
cin>>toPlay;

  if (toPlay=='y') {  //fix issue with lowercase y
    toPlay='Y';
  }

      if (toPlay != 'Y' && 'y') {
          cout<<"Goodbye"<<endl;
          return 0;
        }

usleep(250000) ;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
usleep(250000) ;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
usleep(250000) ;
cout<<"L"<<endl;
usleep(500000) ;
cout<<"O"<<endl;
usleep(500000) ;
cout<<"A"<<endl;
usleep(500000) ;
cout<<"D"<<endl;
usleep(500000) ;
cout<<"I"<<endl;
usleep(500000) ;
cout<<"N"<<endl;
usleep(500000) ;
cout<<"G"<<endl;
usleep(500000) ;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
usleep(250000) ;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
usleep(250000) ;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
usleep(250000) ;
cout<<"~~GAME LOADED~~"<<endl;



cout<<"Welcome to the number guesser."<<endl;
usleep(250000) ;
cout<<"Please select a difficulty setting.";
usleep(250000);
cout<<"(E)asy, (M)edium or (H)ard."<<endl;
cin>>diff;

      if (diff == 'e') {  // issue with lowercase numbers
        diff = 'E';
      }
      if (diff == 'm') {
        diff = 'M';
      }
      if (diff == 'h') {
        diff = 'H';
      }

  if (diff == 'E') {
    cout<<"You have selected Easy mode."<<endl;
    difNum = 2;
  }
  if (diff == 'M') {
    cout<<"You have selected Medium mode."<<endl;
    difNum = 10;
  }
  if (diff == 'H') {
    cout<<"You have selected Hard mode."<<endl;
    difNum = 100;
  }

do {
  srand ( time(NULL) );

  randomNumber = rand() % difNum + 1;
usleep(500000);
cout<<"Please enter a number to guess betweeen 1 and "<<difNum<<"."<<endl;
cin>>guess;

    if (guess == randomNumber) {
      cout<<"You guessed correctly."<<endl;
    }
    if (guess > randomNumber) {
      cout<<"Too high"<<endl;
      usleep(250000);
      cout<<"You were off by "<<guess-randomNumber<<endl;
    }
    if (guess < randomNumber) {
      cout<<"Too low"<<endl;
      usleep(250000);
      cout<<"You were off by "<<randomNumber-guess<<endl;
    }




cout<<"Would you like to play again?"<<endl;
cout<<"(Y)es or (N)o"<<endl;
cin>>toPlay;
    if (toPlay=='y') {
      toPlay='Y';
    }

} while(toPlay == 'Y');




  return 0;
}
