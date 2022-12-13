/* Author: Tazim(The_crawler) */
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
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
using namespace __gnu_pbds;
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return (a.second < b.second); }
template<class T> void _print(T x) { cout << x; }
template<class T> void _print(vector<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T> void _print(set<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
template<class T, class V> void _print(pair<T, V>x) { cout << "{" << x.first << "," << x.second << "} "; }
template<class T, class V> void _print(map<T, V>x) { cout << "[ ";for (auto i : x)_print(i);cout << "]"; }
template<class T> void _print(multiset<T>x) { cout << "[ ";for (T i : x)cout << i << " ";cout << "]"; }
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//  less_equal - multiset | greater - decending order unique | less - asc unique | greater_equel - dec multiset
 
/* Hack my code. It's Easy to Read */
 
 
 
int main() {
   FAST_IO;
   // start
   int n;
   cin >>n;
   vector<int> ar(n);
   for(int i=0; i<n; i++){
      cin>>ar[i];
   }
   int l = 0, r = 0;
   int res = 0;
   set<int> st;
   map<int, int> mp;
   while (r<n)
   {  
      st.insert(ar[r]);
      mp[ar[r]]++;
      int dif = r-l+1;
      if(st.size()==dif){
         res = max(res, dif);
      }
      else{
         while (st.size()!=dif)
         {
            if(mp[ar[l]]>0)mp[ar[l]]--;
            if(mp[ar[l]]==0)st.erase(st.find(ar[l]));
            l++;
            dif = r-l+1;
         }
         
      }
      r++;
   }
   
   cout<<res<<nl;
   
 
 
 
   return 0;
}
 
