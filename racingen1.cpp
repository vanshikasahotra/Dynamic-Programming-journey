#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll tc;
  cin>>tc;
  while(tc--)
  {
    ll x,t,m;
  cin >> x >> t >> m;     //60  3  5       //70 1 5
  t*=60;    //180                   //60
  m*=60; //300                     //300
  ll req=0;
  req +=min(x,t);  //60                 //60
  t-=min(x,t);     //180-60=120          //60 -60
  req +=2 * t;   //240                                  //120
    if(req<=m)
    cout<<"Yes\n"; //Yes
    else
    cout<<"No\n";
  }
}
