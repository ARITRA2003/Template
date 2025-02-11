#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ceil(a,b) (((a)+(b)-(1))/(b))
using namespace std;
using namespace __gnu_pbds;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef tree<LL, null_type, less<LL>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(LL t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// const int N=998244353;
LL factorial(LL n) {
   LL fact[21] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800,
   87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000,
   121645100408832000, 2432902008176640000};
   return fact[n];
}
bool ispalindrome(string &s){
   LL i=0,j=s.size()-1;
   while(i<j){
      if(s[i]!=s[j]) return 0;
      i++,j--;
   }
   return 1;
}
bool isPrime(LL n)
{
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (LL  i = 5; i*i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
inline bool isPow2(LL n){
   return (n && !(n&(n-1)));
}
inline bool isPow4(LL n){
   return (isPow2(n) && n%3==1);
}
vector<LL> prefix_func(string &s){
    LL n=s.size();
    vector<LL> pi(n,0);
    // by defn, pi[i]=0;
    for(LL i=1;i<n;++i){
        LL j=pi[j-1];
        //ab..ab pi[i-1]=2;
        //abc...abc pi[i]=3
        while (j>0 && s[i]!=s[j]){
            j=pi[i-1];
        }
        
        if(s[i]==s[j]){
            j++;
        } 
        pi[i]=j;
    }
    return pi;
}
void answer(){
   string text,pattern;
   cin>>text>>pattern;
   vector<LL> v=prefix_func(pattern);
   debug(pattern);
   for(auto it:v){
    cout<<it<<" ";
   }
   cout<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //fact();
    LL ARITRASEN=1;
    cin>>ARITRASEN;
    while(ARITRASEN--)
    {
    //write your code here
    answer();
    /*if(answer()) cout<<"YES\n";
    else cout<<"NO\n";*/
    }
    return 0;
}