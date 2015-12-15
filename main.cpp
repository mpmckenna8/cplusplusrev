// Final project and review for C++ intro
// By Matthew McKenna

// including all the necessary libraries so stuff works
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

// function prototype for printintro function and a function to call for each
// problem
bool printintro();

// Will return a 0 if wrong or a 1 if correct.
int quest(int qnum);

// Good old main function

int main()
{
    
    int qNum = 3;
    int correct = 0;

    // Calling a function to print the intro and if the user 
    if(printintro()){
        return 0;
        }

    for(int i = 1; i <= qNum; i++){

        correct += quest(i);

    }

    cout << endl << endl;
    cout << "test complete!!!!" << endl;

    cout << "Total Number correct is " << correct << " out of " << qNum;

    if(correct == qNum){
        
      cout << endl << "you win  go make robots do stuff" << endl;
    }
    else{
      cout << "\n Keep studying till you get em all right" << endl << endl;
    }

return 0;
}



bool printintro(){
// intro and menu to do a test or quit
    cout << "Welcome to the fantasc++al review!" << endl << endl;
    char goger = 'B';

    cout << "Would you like to:" << endl;
    cout << "A:) Take a practice test. \n";
    cout << "B:) exit \n Make selection and press enter: ";

    cin >> goger;
    cout << endl << endl;

    if(toupper(goger) == 'A'){
        return false;
    }
    else
        return true;


}

int quest(int qnum){
// used a vector which I think gives me credit for using an array to keep track
// of the parts of each question.

    vector<std::string> question(20);
// String line to hold each line from the file being read
    string line;
    string finame = "q" + to_string(qnum) + ".txt";
    ifstream mifi;
    int parter= 0;
// open my file
  //  cout << finame;
  // Printing out he question number
  cout << "Q" << qnum << endl;
    mifi.open(finame);
// if the file exists and is open do the following.
    if( mifi.is_open() ){
      // get each line and do stuff with it
      while(getline(mifi, line)){
    //   mifi >> line;
      if(line != "88888"){
        question[parter] += line + "\n";
   // some code where I was testing stuff out
   //question[parter] = "blah";
      // cout << line<< endl;
     }
     else{
       // increment the part of the array to put stuff in
       parter++;
     }

    }
  }

    mifi.close();
  //  cout << "testing the end \n";
  // Print out the question part of the question
   cout << question[0] ;
  // Using an array to store the options to the question
    char opts[5] = {'q', 'A', 'B', 'C', 'D'};

    int arlen[parter+1];
    string goser[10];
    // Go through all possible answers to the questions
    for(int i = 1; i <= parter; i++){
      cout << opts[i] << ".)  ";
      cout << question[i];
    //  cout << endl;
    }

    cout << endl << "Answer: ";
    char response;
    // Get user input and store in response variable
    cin >> response;
    cout << endl << endl;
    response = toupper(response);
    // Check answer and return 1 if correct, could move to another function,
    // especially if I want non A answers.
    if(response == 'A'){
        return 1;
    }
    // else return a 0 if the answer is wrong
    else{
    return 0;
    }
    // return -100 just in case the above stuff didn't work and I'll know there
    // was a bug
 return -100;
}
