  #include<bits/stdc++.h>
  using namespace std;
  int main()
  { 
    //printing the last element of the string
    //it works in the vector as well
    string s1 = "mdpagla";
    cout<<"Last element of s1 is: "<<s1.back()<<endl; //printing last element
    s1.pop_back();//poping out(removing) the last element
    cout<<"now the s1 looks like: "<<s1<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //printing the unique string
    vector<string> vk1;
    vk1.push_back("mdjakir");
    vk1.push_back("mdjakir");
    vk1.push_back("mdmos");
    vk1.push_back("mdjakir");
    vk1.push_back("mdmos");
    vk1.push_back("mdmos");
    vk1.push_back("mdnoytik");
    vk1.push_back("mdjakir");
    sort(vk1.begin(), vk1.end());
    int sizeOfTheUniqueString = unique(vk1.begin(), vk1.end()) - vk1.begin(); //it'll reply the length of the unique string(mind it==> unique string's length) from begin to end
    for(int i=1; i<=sizeOfTheUniqueString; i++) cout<<vk1[i]<<endl;
    cout<<endl;
    cout<<endl;

    //converting an integer into string
    int j = 50;
    string convertedInteger = to_string(j);
    cout<<convertedInteger<<endl;
    convertedInteger[0] = '1';
    cout<<convertedInteger<<endl;
    cout<<endl;
    cout<<endl;

    //converting a string to integer
    string num1 = "350";
    int changedString = stoi(num1);
    changedString++;
    cout<<changedString<<endl;
    return 0;
  }
