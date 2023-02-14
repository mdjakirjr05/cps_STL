#include<bits/stdc++.h>
using namespace std;
int main()
{
  //printing unique value of a vector
  vector<int> printUnique = {7, 9, 1, 3, 3, 9, 2, 4};
  sort(printUnique.begin(), printUnique.end()); //complexity is (nlog2(n));
  int sizeTillUniqueValue = unique(printUnique.begin(), printUnique.end()) - printUnique.begin(); //the unique function returns the last pointer index till the unique value exists.
  cout<<"This is the size of the vector till unique value exists: "<< sizeTillUniqueValue<<endl;
  for(int i=0; i<sizeTillUniqueValue; i++) cout<<printUnique[i]<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //printing the maximum number from a index to b of a vector
  //there is a min_element() function also that returns the min element of the vector
  //max_element() and min_element() complexity is O(n);
  vector<int> maxVector = {8, 88, 99, 1, 2, 90, 71, 1000};
  vector<int>::iterator outputsMaxIterator1 = max_element(maxVector.begin()+4, maxVector.begin()+7); //replay the max iterator
  //for the total index you have to use .begin() and .end() both
  vector<int>::iterator outputsMaxIterator2 = max_element(maxVector.begin(), maxVector.end());
  cout<<"The output is by pointer: " <<*outputsMaxIterator1<<" "<<endl;
  cout<<"The output is by pointer also: " <<*outputsMaxIterator2<<" "<<endl;

  //getting the index of the maximum value
  int maxAddress = max_element(maxVector.begin(), maxVector.end()) - maxVector.begin(); //it'll return the index
  cout<<"This is the index: "<<maxAddress<<endl;
  cout<<"This max output is by index: "<<maxVector[maxAddress];
  cout<<endl;
  cout<<endl;
  cout<<endl;

    return 0;
}