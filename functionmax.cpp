#include <iostream>
using namespace std;
//function prototype
int max (int a, int b);

//main function
int main ()
  {
    //variable declaration
    int m,n;
    //prompt user for 2 integers
    cout<<"kindly enter 2 integers"<<endl;
    cout<<"1st integer = ";
    cin>>m;
    cout<<"\n 2nd integer = ";
    cin>>n;
    //call max function
    cout<<max(m,n);
    return 0;
  }//end of main function
  
  //function (max) definition
  int max (int k, int p)
  {
    //local variable declaration
    int result;
    //finding max no
    if(k>p)
    result = k;
    else if (p>k)
    result = p;
    else 
    cout<<"Both integers are equal"<<endl;
    //return statement
    return result;
  }
  
