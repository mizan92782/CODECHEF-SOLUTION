int main() {
   
   int t;
   cin>>t;
   while (t--)
   {
     int n;
     cin>>n;

     int arr[n][n];


      set<int>s;   
  
     for(int i=0;i<n;i++)
     {


        int count=0;

        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];


           
        }

        
     }





     for(int i=0;i<n;i++)
     {
        int count=0;

        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";


           
        }

        cout<<endl;

        
     }







   }
   


    return 0;
}
