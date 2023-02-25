#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef tree<LL, null_type, less<LL>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define ceil(a,b) (((a)+(b)-(1))/(b))
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
// vector<LL>  factorial(1e6+7);
// void fact(){
//    factorial[1]=1;
//    for(LL i=2;i<=1e6+3;++i){
//       factorial[i]=(i*factorial[i-1])%N;
//    }
// }
// bool ispalindrome(string &s){
//    LL i=0,j=s.size()-1;
//    while(i<j){
//       if(s[i]!=s[j]) return 0;
//       i++,j--;
//    }
//    return 1;
// }

void answer(){
   pbds a;
   a.insert(10);
   a.insert(20);
   a.insert(12);
   a.insert(10);
   a.insert(55);
   
   for(auto i:a){
      cout<<i<<" ";
   }
   cout<<"\n";
   cout<<"lower_bound is: "<< *a.lower_bound(10)<<"\n";
   cout<<"lower_bound is: "<< *a.lower_bound(11)<<"\n";
   cout<<"upper_bound is: "<< *a.upper_bound(34)<<"\n";
   cout<<"upper_bound is: "<< *a.upper_bound(23)<<"\n";
   
   //a.find_by_order()
   cout<<"Number at ith Index is:"<<*a.find_by_order(3)<<"\n";
   //a.order_of_key()
   cout<<"Number of element smaller :"<<a.order_of_key(52)<<"\n";
   a.erase(10);
   a.erase(10);
   
   cout<<a.size()<<"\n";
   for(auto i:a){
      cout<<i<<" ";
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
    // cin>>ARITRASEN;
    while(ARITRASEN--)
    {
    //write your code here
    answer();
    /*if(answer()) cout<<"YES\n";
    else cout<<"NO\n";*/
    }
    return 0;
}