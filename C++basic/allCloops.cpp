#include <iostream>
using namespace std;
int main()
{
int n,sum=0;
 cout<<"Enter a no. ";
 cin>>n;
//  for(int i=0;i<=n;i++){
//      sum+=i;
//  }
 int i=0;
//  while(i<n+1){
//      sum+=i;
//      i++;
//  }
 do
 {
     sum+=i;
     i++;
 }while(i<n+1);
 cout<<"Sum to First "<<n<<" Natural no.s is "<<sum;
return 0;
}