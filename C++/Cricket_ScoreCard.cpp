#include<iostream>
using namespace std;



class Cric_scoreCard_ViratKohli{
public:
 //declaring class variable
  static int jerseyNumber;
 //declaring instance variables
  int matches_plyd;
  int NumberOfBallsFaced;
  int GivenOut;
  int runScored;
  float strikeRate;
  float average;  


public:
   Cric_scoreCard_ViratKohli()
{
 //Modify the class variable
   jerseyNumber++;
};
 

};

//setting the class variables eith class name
int Cric_scoreCard_ViratKohli::jerseyNumber = 17;
int jersyNumber = Cric_scoreCard_ViratKohli::jerseyNumber;  
int main()
{
//first object
 Cric_scoreCard_ViratKohli obj;
 int matches_plyd = obj.matches_plyd;

 matches_plyd = 192;
 
int runScored = obj.runScored;

 
obj.NumberOfBallsFaced = 4496;
int NumberOfBallsFaced = obj.NumberOfBallsFaced;
 
obj.GivenOut = 154;
int GivenOut = obj.GivenOut;

 
float strikeRate = obj.strikeRate;
strikeRate = (runScored / NumberOfBallsFaced) * 100;

float average = obj.average;
average = runScored / GivenOut;

 
//Display it
  cout << "\n\t******IPL Record Of Virat Kohli******\n" << "\n" << endl;
  cout << ">Jersey No.:" <<Cric_scoreCard_ViratKohli::jerseyNumber << "\n" << endl;
 cout << "Matches played in IPL:" << matches_plyd << "\n" << endl;
 cout << "Number of Balls faced in IPL:" << NumberOfBallsFaced << "\n" << endl;
 cout << "Number of times given OUT in IPL:" << GivenOut << "\n" << endl;
 

  cout << ">Runs Scored:" << runScored << "\n" << endl;
  cout << ">Strike Rate:" << strikeRate << "\n" << endl;
  cout << ">Average:" << average << endl;
return 0;
}
