#include <iostream>
using namespace std;

int MAX= 200007;


int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}



int main() {
    
   
   int arr[MAX];

   for(int i=1;i<MAX;i++)
   {
       arr[i]=arr[i-1]+digitSum(i);
   }


   int t;
   cin>>t;
   while (t--)
   {
        int n;cin>>n;
        cout<<arr[n]<<endl;
   }
   
 
   
    
   
    return 0;
}
