#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>

#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash

#define eps 1e-11
//#define M_PI 3.141592653589793
#define bs 1000000007
#define bsize 256
#define right adsgasgadsg
#define free adsgasdg

using namespace std;

long n,s[1<<20],ar[1<<20],tests,l,r,need;

int main(){
//freopen("dial.in","r",stdin);
//freopen("dial.out","w",stdout);
//freopen("C:/input.txt","r",stdin);
//freopen("C:/output.txt","w",stdout);
ios_base::sync_with_stdio(0);
//cin.tie(0);

cin>>n;
for (int i=1;i<=n;i++)
{ cin>>ar[i];
 s[i]=s[i-1]+ar[i];
}
cin>>tests;
for (;tests;--tests)
{
 cin>>need;
 l=1;
 r=n;
 while (l<r)
 {
  long m=l+r;
  m/=2;
  if (s[m]<need)l=m+1;
  else r=m;
 }
 cout<<l<<endl;
 
}
cin.get();cin.get();
return 0;}
