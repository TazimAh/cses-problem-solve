/* Author: Tazim(The_crawler) */
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long int
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define prow(n) for(auto i:n)cout<<i<<" ";cout<<"\n";
#define pcol(n) for(auto i:n)cout<<i<<"\n";
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define nl "\n"
#define INF 2147483647
#define INFLL 9223372036854775807 
#define debug(x) cout<<#x<<" = ";_print(x); cout<<endl; /// Debug function
using namespace std; ///****
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return (a.second < b.second); }
template<class T> void _print(T x) { cout << x; }
template<class T> void _print(vector<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T> void _print(set<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T, class V> void _print(pair<T, V>x) { cout << "{" << x.first << "," << x.second << "} "; }
template<class T, class V> void _print(map<T, V>x) { cout << "[ ";for (auto i : x)_print(i);cout << "]"; }
template<class T> void _print(multiset<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
/* Hack my code. It's Easy to Read */
vector<int> ar;
 
ll solve(int n, ll s1, ll s2) {
   if (n == 0) {
      return abs(s1 - s2);
   }
   return min(solve(n - 1, s1 + ar[n - 1], s2), solve(n - 1, s1, s2 + ar[n - 1]));
 
}
 
int main() {
   FAST_IO;
   // start
   int n;
   cin >> n;
   for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      ar.push_back(a);
   }
   ll res = solve(n, 0, 0);
   cout << res << endl;
 
   return 0;
}
 
