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

//SHOW MENU
displays();
//prompt user to choose from menu
cout<<"please choose a menu item"<<endl;

//prompt user to enter two integers
cout<<"please enter two integers"<<endl;
cout<<"1st integer = ";
cin>>a;
cout<<"2nd integer = ";
cin>>b;
cout<<"1st integer = ";
cin>>m;
cout<<"2nd integer = ";
cin>>n;
cout<<"1st integer = ";
cin>>t;
cout<<"2nd integer = ";
cin>>p;
cout<<"1st integer = ";
cin>>d;
cout<<"2nd integer = ";
cin>>v;
cout<<"1st integer = ";
cin>>u;
cout<<"2nd integer = ";
cin>>s;

//create switch statement to display result by calling functions
switch(code)
{
  case 1:
  cout<"the result is :";
  break;
  case 2:
  cout<"the result is :";
  break;
  case 3:
  cout<"the result is :";
  break;
  case 4:
  cout<"the result is :";
  break;
  case 5:
  cout<"the result is :";
  break;
  default:
  cout<<"";
  break
}
