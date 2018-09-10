//Author: Michael Crowe
#include<iostream>

int main()
{
  //declare variables here
  int firstNum;
  int secondNum;
  int biggestNum;
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin >> firstNum;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin >> secondNum;
  //determine if first or second is bigger and store that in a third variable
  
 if(firstNum > secondNum){
          biggestNum = firstNum;
  }
  else if(secondNum > firstNum){
          biggestNum = secondNum;
  }
  else{
          std::cout << "The Numbers are the same";
  }


  std::cout<<"Of those two numbers, the biggest is: ";
  std::cout << biggestNum;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
