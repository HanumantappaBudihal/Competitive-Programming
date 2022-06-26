//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends

#include<string.h>
//User function Template for C++

string reverseWord(string str){
  int stringLength=str.length()-1;
  string reverseString=str;
  for(int i=0;i<=stringLength;i++)
  {
    reverseString[i]=str[stringLength-i];
  }
  
  return reverseString;
}