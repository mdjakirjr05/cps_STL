#include<bits/stdc++.h>
using namespace std;
int main()
{
  //taking input of an N size vector
  vector<int> NsizeVector;
  // int N;
  // cin>>N;
  // while(N--){
  //   int n;
  //   cin>>n;
  //   NsizeVector.push_back(n);
  // }
  // for(auto k: NsizeVector) cout<< k<<" ";
  // cout<<endl;

  vector<int> assignN = {1, 2, 3, 5, 100, 9};
  vector<int> tempCopy;
  tempCopy = assignN;
  for(auto k: tempCopy) cout<<k<<" ";
  cout<<endl;

  //vector iterator with pointer
  vector<int> md = {35, 55, 88, 66, 77, 80};
  vector<int>::iterator mdkk;
  for(mdkk = md.begin()+5; mdkk!=md.end(); mdkk++) cout<< *mdkk <<" ";


  vector<int> inr = {3, 4, 5, 6, 7, 8, 9, 10};
  cout<<inr.back()<<endl;
  inr.pop_back();
  cout<<inr.back()<<endl;
  return 0;
} 