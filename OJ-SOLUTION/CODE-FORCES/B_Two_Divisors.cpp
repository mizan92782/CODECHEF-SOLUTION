
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define pip pair<int, pii>
#define ppi pair<pii, int>
#define sei set<int>
#define usei unordered_set<int>
#define ses set<string>
#define sepii set<pair<int, int>>
#define di deque<int>
#define li list<int>
#define sti stack<int>
#define qi queue<int>
#define pqi priority_queue<int>
#define mpii map<int, int>
#define mpll map<ll, ll>
#define umii unordered_map<int, int>
#define vit vector<int>::iterator
#define mit map<int, int>::iterator
#define sit set<int>::iterator
#define umap unordered_map
#define uset unordered_set
#define PQ priority_queue



#define rep(i ,n,ii) for (i = 0; i < n; i=i+ii)  //***
#define itfor(i, c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define printarr(arr, L, R)         \
    for (int i = L; i < R; i++) \
    cout << arr[i] << (i == R - 1 ? '\n' : ' ')

#define printV(a) printa(a, 0, a.size())

#define print2D(arr, r, c)            \
    for (int i = 0; i < r; i++)     \
        for (int j = 0; j < c; j++) \
    cout << arr[i][j] << (j == c - 1 ? '\n' : ' ')


#define pb push_back
#define MP make_pair
#define SQ(x) ((x) * (x))
#define F first
#define S second
#define mem(arr, x) memset(arr, x, sizeof(a))
#define inf 0x3f3f3f3f
#define PI 3.14159265358979323846
#define E 2.71828182845904523536
#define gamma 0.5772156649
#define nl "\n"
#define lg(r, n) (int)(log2(n) / log2(r))

#define _case cout << "Case " << ++cs << ": " //***

#define rev(v) reverse(v.begin(), v.end())

#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<int>())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define countv(v, a) count(v.begin(), v.end(), a) //***
#define len(s) s.length()
#define toint(a) atoi(a.c_str())


#define fast ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

const int mod = 1e9 + 7;
const int mxn = 1e5 + 9;
const int eps = 1e-9;
int cs=0;


void Import()
{
    fast;
    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
}





/*
  * ****************************  Main Function ******************************************
*/



bool primality_test(ll n)
{
     if(n<=1)
     {
        return false;
     }



     if(n==2 || n==3 )
     {
        return  true;
     }


     if(n%2==0 || n%3==0)
     {
        return false;
     }


     for(int i=5;i*i<=n;i+=6)
     {

       
         if(n%i==0  || n%(i+2)==0 )
         {
            return false;
         }
     }


      
    return true;
}






int main()
{

     Import();

     int t;cin>>t;
     while (t--)
     {
       


         ll x,y;
         cin>>x>>y;


         if(primality_test(x) && primality_test(y))
         {
            cout<<x*y<<endl;
         }else if(!primality_test(x) && !primality_test(y))
         {
            cout<<y*2<<endl;
         } else {
             cout<<(y/x)*y<<endl;
         }








       
     }
     

    

     
}
