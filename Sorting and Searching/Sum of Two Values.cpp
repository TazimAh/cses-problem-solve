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
#define all(x) (x).begin(), (x).end()
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
 
 
int main() {
   FAST_IO;
   // start
   int n, x;
   cin >> n >> x;
   vector<int> ar(n);
   map<int, int> mp;
   for (int i = 0; i < n; i++) {
      cin >> ar[i];
      mp[ar[i]] = i + 1;
   }
   for (int i = 0; i < n; i++) {
      int a = x - ar[i];
      if (mp[a] && mp[a] != i + 1) {
         cout << i + 1 << " " << mp[a] << endl;
         return 0;
      }
   }
   cout << "IMPOSSIBLE" << endl;
 
   return 0;
}
 
