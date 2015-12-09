// Final project and review for C++ intro
// By Matthew McKenna

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

void printintro();

int quest(int qnum);

int main()
{

    printintro();

    quest(1);


return 0;
}



void printintro(){

    cout << "Welcome to the fantasc++al review!" << endl << endl;

}

int quest(int qnum){
  vector<std::string> question;

    string line;

    ifstream mifi;

    mifi.open("q1.txt");

    if( mifi.is_open() ){
      int parter= 0;
      while(getline(mifi, line)){
    //   mifi >> line;
      if(line != "88888"){
        question[parter] += line;
       cout << line<< endl;
     }
     else{
       parter++;
     }

    }
  }

    mifi.close();
 return 0;
}
