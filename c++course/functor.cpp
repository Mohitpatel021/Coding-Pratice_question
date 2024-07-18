


#include<bits/stdc++.h>
using namespace std;
double totalInterest(int totalAmounts, vector<int> a)
{
   double totalInterestValue = 0;
   for(int i = 0;i < totalAmounts;i ++)
   {
                      if(a[i] < 1000)continue;
       totalInterestValue = totalInterestValue  + (1.0*(a[i]-1000)*0.2);
   }
   return totalInterestValue;
}
int main()
{
   int totalAmounts;
   cout<<"enter amount"<<endl;
   cin >> totalAmounts;
   vector<int> a(totalAmounts);
   for(int i = 0; i < totalAmounts; i ++)cin >> a[i];
   cout << totalInterest(totalAmounts, a) << endl;
   return 0;
}