#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   if (n >= m)
   {
       cout<<"max="<<n;
   }
   if (n < m)
   {
       cout<<"max="<<m;
   }
   return 0;
}