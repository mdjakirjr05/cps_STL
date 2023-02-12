#include<bits/stdc++.h>
using namespace std;
int main()
{               /*-----------------------------------------------------------------------
                                  copy these code blocks and practise in a different file
                                  ---------------------------------------------------------------------*/
  int a[3];
  vector<int> vr;
  vr.push_back(2);
  vr.push_back(5);
  vr.push_back(100);
  vr.push_back(50);
  cout<<vr[3]<<endl;
  vr[3] = 35;
  cout<<vr[3]<<endl;
  cout<<"The size of the vector: "<<vr.size()<<endl; //printing size of the vector
  for(int i=0; i<vr.size(); i++) cout<<vr[i]<<" "; //printing every element of the vector
  cout<<endl;

  //taking input of an n size vector;
  //returning 
  int N;
  cin>>N;
  vector<int> NsizeVector;
  for(int i=0; i<N; i++){
    int a; 
    cin>>a; 
    NsizeVector.push_back(a);
  }
  for(int i=0; i<NsizeVector.size(); i++) cout<<NsizeVector[i]<<" ";
  cout<<endl;

  //assinging N values to the vector
  vector<int> assignNvalue = {1, 2, 3, 4};
  cout<<assignNvalue[3]<<endl;


  //clearing all the elements of the vector
  assignNvalue.clear();
  cout<<"After clearing the size of the vector is :"<<assignNvalue.size()<<endl;

  //checking whether a vector is empty or not ?????
  cout<<assignNvalue.empty()<<endl; //it'l replay with 1 or 0 if true or false respectively

  //vector resizing
  assignNvalue.resize(10);
  assignNvalue[1] = 17;

  for(int i=0; i<assignNvalue.size(); i++) cout<<assignNvalue[i]<<" ";
  cout<<endl;

  //declaring vector as an array: now it will react like an array and all the index value will be set as 0 as like a array. once the element of the vector is 0 now you can change or modify the index as like an array
  vector<int> arrayLikeDeclar(15); //it assign 15, 0(s) in each indexs
  vector<int> arrayLikeDeclar2(10, 5); //it will assing every index's value as 5: like, 5 5 5 5 5 5 5 5 5
  for(int i=0; i<3; i++) cin>>arrayLikeDeclar[i];
  cout<<endl;
  cout<<arrayLikeDeclar.size();
  cout<<endl;
  for(int i=0; i<arrayLikeDeclar.size(); i++) cout<<arrayLikeDeclar[i]<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //copying all the element of a vector to anothe vector. copying vector doesn't affect to the main vector
  cout<<"                          Copying all the element of a vector to another vector."<<endl;
  vector<int> copyingVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> copyiedIntoTemp;
  copyiedIntoTemp = copyingVector;
  cout<<"The size of the copy vector: "<<copyiedIntoTemp.size()<<endl;
  for(int i=0; i<copyiedIntoTemp.size(); i++) cout<<copyiedIntoTemp[i]<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //to get the first index value we can use vector begin function, vectorName.begin();
  //to get the last index value we can use vector end function, vectorName.end();
  //vector iterator with pointer
  cout<<"                          Learning vector iterator: with pointer"<<endl;
  vector<int> learnIterator = {1, 2, 3, 4, 5};
  vector<int>::iterator it;
  for(it=learnIterator.begin()+2; it!=learnIterator.end()-1; it++) cout<< *it<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //vector iterator with for each loop
  cout<<"                          Learning vector iterator: with for each loop"<<endl;
  for(auto forEachingBiching: learnIterator) cout<< forEachingBiching <<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //pushing back untill it gets zero
  cout<<"                          pusing back continuously untill it inputs 0"<<endl;
  vector<int> untilZero;
  while(1){
    int nk;
    cin>>nk;
    if(nk==0) break;
    untilZero.push_back(nk);
  }
  //printing
  for(auto mp: untilZero) cout<< mp <<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //vector sorting: non-increasing(boro theke choto) and non-decreasing(choto theke boro)
  //just for rememberance: array without an index is a pointer
  cout<<"                          sorting vector: non-decreasing order"<<endl;
  vector<int> sortVector = {5, 2, 1, 3, 5, 9};
  // sort(sortVector.begin(), sortVector.end()); //starts from 0 index and goes to last index: default sorting is non-decreasing(choto theke boro)
  sort(sortVector.begin()+1, sortVector.begin()+4); //starts from 1 index and goes to 3rd index
  for(auto mmm: sortVector) cout<<mmm<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //sorting non-increasing order
  cout<<"                          sorting vector: non-increasing order"<<endl;
  sort(sortVector.begin()+1, sortVector.begin()+5, greater<int>());
  for(auto mmm2: sortVector) cout<<mmm2<<" ";
  cout<<endl;
  cout<<endl;
  //sorting non-increasing order: with rbegin() and rend();
  sort(sortVector.rbegin(), sortVector.rend());
  for(auto mmm3: sortVector) cout<<mmm3<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //reversing a vector
  cout<<"                          reversing vector"<<endl;
  vector<int> reverseVector = {10, 33, 97, 73, 37};
  reverse(reverseVector.begin(), reverseVector.end());
  for(auto aka: reverseVector) cout<<aka<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //using pointer in an array
  cout<<"                         using pointer to an array: "<<endl;
  int ai[] = {10, 18, 77, 66, 63};
  sort(ai, ai+5, greater<int>());  //using array without index. and it's non-increasing order
  for(int i=0; i<5; i++) cout<< ai[i]<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;



  //popping off the last element of the vector
  //for .back() function the time complexity is O(1); but for .erase() function the time complexity is O(n). because when we erase a value then every index's value shift's backword. for this every element moves. but when we use .back() then only the last index's value get changed.
  vector<int> popOff = {5, 7, 13, 12, 37};
  cout<<"Now last element is: "<<popOff.back()<<endl; //accessing the last element: now last element is : 37
  popOff.pop_back(); //deleting the last element
  cout<<"Now last element is: "<<popOff.back()<<endl; //now last element is: 12, O(1)
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //deleting the first element
  cout<<"Now the first elment is: "<<*popOff.begin()<<endl; //accessing the first element
  popOff.erase(popOff.begin()); //O(n);
  cout<<popOff.size()<<endl;
  for(auto bnk: popOff) cout<<bnk<<" ";
  cout << endl;  
  cout << endl;  
  cout << endl;

  //in order to decrease the complexity
  //if we need to popOff some index's value in vector first we have to revere the vector and then popOff the element from the end and thus the complexity will decreasse
  vector<int> v = {47, 77, 93, 999, 10000};
  reverse(v.begin(), v.end());
  while(!v.empty()){
    cout<<v.back()<<endl;
    v.pop_back();
  }

  return 0;
} 