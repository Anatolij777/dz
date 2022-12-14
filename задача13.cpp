#include <iostream>

using namespace std;

int main()
{
   int n,i,res;
   cin>>n;
   if (n < 100)
   {
       cout <<"третьей цифры нет";
   }
   else
   {
       for(; n>=1000; n/=10);
       cout << n%10;
   }
   return 0;
}