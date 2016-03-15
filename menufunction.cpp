# include <iostream>
using namespace std;
//void function
void displays()
{
  cout<<"\t \t MENU \t\t"<<endl;
  cout<<"\t 1. \t \t ADD"<<endl;
  cout<<"\t 2. \t \t SUBTRACT"<<endl;
  cout<<"\t 3. \t \t MULTIPLY"<<endl;
  cout<<"\t 4. \t \t DIVIDE"<<endl;
  cout<<"\t 5. \t \t MODULUS"<<endl;
  
}
  //CALCULATOR FUUNCTIONS
  //int addition
  int addition (int a, int b)
  {
    return a+b;
  }
  //int subtraction
  int subtraction (int m, int n)
  {
    return m-n;
  }
  //int multiplication
  int multiplication (int t, int p)
  {
    return t*p;
  }
  //int division
  int division (int d, int v)
  {
    return d/v;
  }
  //int modulus
  int modulus (int u, int s)
  {
    return u%s;
  }
//MAIN FUNCTION
int main (){

//SHOW MENU
displays();
//declare switch code variable to be used for choices
int code,m,n;
char confirm;
//do while statement begins here
//do{
  //prompt user to choose from menu
  cout<<"please choose a menu item"<<endl;
  cin>>code;
  //prompt user to enter two integers
cout<<"please enter two integers"<<endl;
cout<<"1st integer = ";
cin>>m;
cout<<"2nd integer = ";
cin>>n;
//}
//create switch statement to display result by calling functions
switch(code)
{
  case 1:
  cout<<"you chose addition therefore the result is :"<<addition<<endl;
  break;
  case 2:
  cout<<"you chose subtraction therefore the result is :"<<subtraction<<endl;
  break;
  case 3:
  cout<<"you chose multiplication therefore the result is :"<<multiplication<<endl;
  break;
  case 4:
  cout<<"you chose division therefore the result is :"<<division<<endl;
  break;
  case 5:
  cout<<"you chose modulus therefore the result is :"<<modulus<<endl;
  break;
}
}
