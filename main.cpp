// Final project and review for C++ intro
// By Matthew McKenna

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

bool printintro();

int quest(int qnum);

int main()
{

    printintro();
    

    quest(1);


return 0;
}



bool printintro(){
    
    cout << "Welcome to the fantasc++al review!" << endl << endl;
    char goger = 'B';

    cout << "Would you like to:" << endl;
    cout << "A:) Take a practice test. \n";
    cout << "B:) exit \n Make selection and press enter: ";

    cin >> goger;

    if(goger == 'A'){
        return false;
    }
    else
        return true;


}

int quest(int qnum){
  vector<std::string> question(20);

    string line;

    ifstream mifi;
    int parter= 0;
// open my file
    mifi.open("q3.txt");

    if( mifi.is_open() ){
      // get each line and do stuff with it
      while(getline(mifi, line)){
    //   mifi >> line;
      if(line != "88888"){
        question[parter] += line + "\n";
      //question[parter] = "blah";
       cout << line<< endl;
     }
     else{
       // increment the part of the array to put stuff in
       parter++;
     }

    }
  }

    mifi.close();
    cout << "testing the end \n";
    cout << question[0] ;
    char opts[5] = {'q', 'A', 'B', 'C', 'D'};

    int arlen[parter+1];
    string goser[10];
    for(int i = 1; i <= parter; i++){
      cout << opts[i] << ".)  ";
      cout << question[i];
    //  cout << endl;
    }

    cout << endl << "Answer: ";
    char response;

    cin >> response;
    response = toupper(response);
    if(response == 'A'){

      cout << "you win  go make robots do stuff" << endl;
    }
    else{
      cout << "Go study this stuff more !!!" << endl;
    }
 return 0;
}
