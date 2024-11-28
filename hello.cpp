#include <iostream>
using namespace std;
int fac(int n)
{
  int pro = 1;
  for(int i=n; i>=1; i--)
  {
    pro *= i;
  }
  return pro;
}
int main()
{
  int n;
  cout<<"Enter the number :";
  cin >> n;
  cout << n << endl;
  cout << "Factorial is :" << fac(n)<<endl;
}

