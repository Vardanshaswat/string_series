#include<iostream>
#include<string>
using namespace std;

int printSubsequence1(string input, string output)
{
    if(input.empty())
    {
        //cout<<output<<endl;
        return 1;
    }
    
  int k =   printSubsequence1(input.substr(1),output+input[0]);
  int k1 =   printSubsequence1(input.substr(1),output);
  int p = k+k1;
  return p;
}

void printSubsequence(string input, string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    
    printSubsequence(input.substr(1),output+input[0]);
    printSubsequence(input.substr(1),output);
}



int main()
{
 string output = "";
 string input;
 cout<<"Enter string";
 cin>>input;
 
 
 printSubsequence(input,output);
 cout<<endl;
 int j = printSubsequence1(input,output);
 cout<<j;
}