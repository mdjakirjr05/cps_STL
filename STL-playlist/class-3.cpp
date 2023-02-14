#include<bits/stdc++.h>
using namespace std;
    /*-----------------------------------
    This code snippet is to make the cin and cout faster
  ----------------------------------------------------------*/
 #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//  #define endl '\n'
int main()
{  optimize();
  //declaring a string
  //as string is dynamic we don't need to assign the size of the string
  string K;
  K+='a'; //pushing element in the string
  K+='b';
  K+='c';
  cout<<K<<endl;
  //initiallizing string
  string name = "Md Jakir Hossain"; //here double quotation refers to string and single quotation refers to character
  cout<<name<<endl;
  name+= ' '; //concatenating new element in the string
  name+='a';
  cout<<name<<endl;

  //string belongs to all the function that vector belongs to 
  cout<<"This is the size of the string: "<<name.size()<<endl;
  //string resembles to an static array once it's elements are declared
  cout<<name[0]<<endl;
  name[0] = 'y';
  cout<<name[0]<<endl;
  cout<<name[1]<<endl;
  cout<<name[2]<<endl;

  //concatenating 2 string to a string
  string pagla;
  string pagla1 = "modhu";
  string pagla2 = "sudon";
  char space = ' ';
  pagla = pagla1 + space + pagla2;
  cout<<"The concatenated string is: "<<pagla<<endl;

  //clearing a string
  pagla.clear();
  cout<<"The cleared concatenated string is: "<<pagla<<endl;

  //assigning a string to another string
  pagla1 = pagla2;
  cout<<"The assigned string is: "<<pagla1<<endl;

  //checking whether a string is empty or not
  cout<<"Is the string empty: "<<pagla.empty()<<endl;

  //using iterator in string
  cout<<"                               Using iterator in string. "<<pagla<<endl;
  string fullName = "mdjakir hossain";
  string::iterator it;
  for(it = fullName.begin(); it !=fullName.end(); it++) cout<<*it<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;


  //using for each loop
  cout<<"                               Using for each looop string. "<<pagla<<endl;
  for(auto m: fullName) cout<<m<<" ";
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //checking if a string is equal to another string or not
  cout<<"                               If a string is equal to another string "<<pagla<<endl;
  string nam="muhammad", nam2 = "Muhammad";
  if(nam == nam2 ) cout<<"Equal"<<endl; //O(n);
  else cout<<"Not Equal"<<endl;
  cout<<endl;
  cout<<endl;

  
  //reversing a string
  cout<<"                               Reversing a  string. "<<pagla<<endl;
  string boltu = "md boltu mia";
  reverse(boltu.begin(), boltu.end());
  cout<<boltu;
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //inputing a string and checking if it's palindrome or not;
  cout<<"                               Palindrome or not "<<pagla<<endl;
  string palinDrom;
  // cin>>palinDrom; //it'll not cin after space strign elements. like jakir hossain. it'll only take jakir
  string temPalin = palinDrom;
  reverse(palinDrom.begin(), palinDrom.end());
  if(palinDrom == temPalin) cout<<"It's a palindrome."<<endl;
  else cout<<"Not palindrome."<<endl;
  cout<<endl;
  cout<<endl;
  

  cout<<"                               Taking input including space values "<<pagla<<endl;
  string spaceValue;
  // getline(cin, spaceValue);
  cout<<spaceValue<<endl;
  cout<<endl;
  cout<<endl;
  
  
  //taking input with space
  cout<<"                               A problem of taking input."<<pagla<<endl;
  int tc;
  // cin>>tc;
  // for(int i=1; i<=tc; i++){
  //   string kd;
  //   getline(cin, kd);
  //   cout<<"Test case: "<<i<<" "<<kd;
  // }
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //solution of the avobe problem
  // for(int i=1; i<=tc; i++){
  //   string mk;
  //   char ck;
  //   cin>>ck;
  //   getline(cin, mk);
  //   mk = ck + mk;
  //   cout<<"Test case: "<<i<<" "<<mk<<endl;
  // }
  cout<<endl;
  cout<<endl;
  cout<<endl;
  

  //sorting and unique in string
  cout<<"                               sorting and unique in string "<<pagla<<endl;
  string sortUniq = "acdeAAA";
  sort(sortUniq.begin(), sortUniq.end());
  int sZ = unique(sortUniq.begin(), sortUniq.end()) - sortUniq.begin();
  for(int i=0; i<sZ; i++) cout<<sortUniq[i];
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //pointer directly returns the value of the index
  //index returns the index number
  //suppose max_element and min_element returns the pointer
  cout<<"                               Max and min element "<<pagla<<endl;
  int indexMax = max_element(sortUniq.begin(), sortUniq.end()) - sortUniq.begin();
  cout<<"The maximum index is: "<<indexMax<<", element is:"<<*max_element(sortUniq.begin(), sortUniq.end())<<endl;
  cout<<"The minimum element is: "<<*min_element(sortUniq.begin(), sortUniq.end())<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //erasing first character
  sortUniq.erase(sortUniq.begin()); //O(n); //.begin() is 0 no index er pointer
  cout<<sortUniq<<endl;
  //earsing last character
  sortUniq.erase(sortUniq.end()-1); //O(1); //.end() is end no index er pointer
  cout<<sortUniq<<endl;
  cout<<endl;
  cout<<endl;


  //a vector can be a string also
  //sorting a string with vector
  //lexicographic order sorting
  //ট্রিক হলঃ যেখানেই ছোট পেয়েছি সেখানেই তুলনা শেষ এবং অইটাই লাক্সিওগ্রাফিকালি ছোট। বলা বাহুল্য, A < a
  string t1="eee", t2="ee"; //if the characters are same then the small length of the string is the small string
  if(t1<t2) cout<<t1<<" is lexicographycally smallest"<<endl; //lexicographycally meaning it compares both of the string at once with the same index;
  else cout<<t2<<" is lexicographycally smallest"<<endl;

  string t3 = "eeejakir", t4 = "eemd";
  if(t3<t4) cout<<t3<<" is lexicographycally smallest"<<endl;
  else cout<<t4<<"  is lexicographycally smallest"<<endl; //as the 3rd(t3) e < 3rd(t4) m; the answer is eeejakir;

  string t5 = "AjakirmdhossZZZZZZZZZZZZZKKKKKKK", t6 = "aMMMMZZZZZZZZZZZZZ";
  if(t5<t6) cout<<t5<<"  is lexicographycally smallest"<<endl;
  //string related terms
  //সাবস্ট্রিং = পরপর + একই দিকে নিতে হবে। যেমনঃ abcd--> bc হল abcd এর সাবস্ট্রিং। 
  //সাবসিকুয়েন্স = পরপর হতেই হবে এমন কথা নাই + একই দিকে নিতে হবে। যেমনঃ abcd--> bd হল abcd এর সাবসিকুয়েন্স।
  //যেকোন একটা মনে রাখ।

  //suffix = সাবস্ট্রিং যখন কোন স্ট্রিং এর পিছন থেকে নেয়া হয় তখন তাকে suffix বলে
  //prefix = সাবস্ট্রিং যখন কোন স্ট্রিং এর সামন থেকে নেয়া হয় তখন তাকে prefix বলে

  vector<string> dictionaryLikeSort;
  dictionaryLikeSort.push_back("Shahariar");
  dictionaryLikeSort.push_back("Mubarrat");
  dictionaryLikeSort.push_back("emon");
  dictionaryLikeSort.push_back("Nishan");
  dictionaryLikeSort.push_back("momo");
  dictionaryLikeSort.push_back("prity");
  dictionaryLikeSort.push_back("Momo");
  sort(dictionaryLikeSort.begin(), dictionaryLikeSort.end()); //here complexity is nlog2(n)*length
  for(auto kk1: dictionaryLikeSort) cout<<kk1<<" "; //laxicographycally choto theke boro
  cout<<endl;
  sort(dictionaryLikeSort.rbegin(), dictionaryLikeSort.rend()); //boro theke choto
  for(auto kk2: dictionaryLikeSort) cout<<kk2<<" ";
  cout<<endl;
  //normal array er kkhetre substring ke bola hoy subArray
  //character array(string) er kkhetre substring bola hoy
  //prefix and suffix o normal array er jonne same
  cout<<endl;
  cout<<endl;

  //removing a special character from a string
  string specialCharacRemove = "mdmdmdjammd";
  specialCharacRemove.erase(remove(specialCharacRemove.begin(), specialCharacRemove.end(), 'm'),specialCharacRemove.end());
  cout<<"The m is removed here: "<<specialCharacRemove<<endl;
  cout<<endl;
  return 0;
}