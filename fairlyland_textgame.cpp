#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
  string answer, answer3;
  int answer1, answer2, answer4;
  string equal = "=================================";
  cout << equal << endl;
  cout << "Welcome to the Little Fairy Land. \n";
  cout << equal <<endl;
  cout << "\n";
  cout << "You have been chosen as one of the lucky humans to have a chance to become a fairy. \n";
  cout << "To see if you are worthy, you have to go through our special test called the \"Life or Death.\" If you fail, you will immediately die. \n";
  cout << "\n";
  cout << "Would you like to accept this test? Answer Yes or No. \n";
  cin >> answer;


//If player enters Yes
  if (answer == "Yes")
  {

  //Start of the test
  cout << "You have now entered the first test called the Vision Test.\n";
  //First Question
  cout << "The first question is \"slauqe ytnewt semit nevele seod tahw?\" \n";
  cout << "1. 229 \n";
  cout << "2. 220 \n";
  cout << "3. 223 \n";
  cin >> answer1;

  switch (answer1) {
    case 1:
    cout << "You have failed to become a fairy and died";
    break;

    case 2: //Enter the second test
    cout << "Congratulation on passing the first test! There are two more to go.\n";
    cout << "You have now entered the second test called the Colour Test.\n";
    cout << "The second question is \"1. Black or 2. Rainbow.\" \n";
    cout << "Enter the number that correspond to your choice!\n";
    cin >> answer2;

    if (answer2 == 2)
    {
      cout << "You have chosen the best choice! Without colours, how could us fairy be beautiful. \n";

      //third test
      cout << "Would you like to enter the final test? Answer Yes or No. \n";
      cin >> answer3;

      if (answer3 == "Yes")
      {
        cout << "You have now entered the third Test\n";
        cout << "The final question is...\n";
        cout << "#equals/2 =?\n";
        cin >> answer4;

        if (answer4 == equal.size()){
          cout << "Welcome to our community! You have now been granted the title Intern Fairy. \n";
          cout <<"There are more test to come. Don't you think this is over";
        }
        else
        {
          cout << "So close yet so near, but the Grim Reaper is here. Bye";
        }

      }
      else 
      {
        cout << "You coward and dumbo. You will now be killed";
      }
    }
    else 
    {
      cout << "You have entered hell and join those boring black demons.";
    }
    break;

    case 3:
    cout << "You have failed to become a fairy and died";
    break;
    default:
    cout << "You have failed to become a fairy and died";
  }

  }

  //If player enters No
  else if (answer == "No")
  {
    cout << "You have been transported back to Earth. Your memories of this world will be erased.";
  }

  //If player enters an invalid choice
  else 
  {
    cout << "You have entered an invalid choice. You will now be killed.";
  }

  return 0;
}