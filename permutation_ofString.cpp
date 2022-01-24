/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>

using namespace std;

void swap(string s, int i, int j)
{
    char temp = s[i];
    s[i]=s[j];
    s[j]=temp;
}


void permute(string s, int l, int r)
{
    if(l == r)
    {
        cout<<s<<endl;
        
    
    }
    else
    {
    for(int i = l; i<=r; i++)
    {
        swap(s[l],s[i]);
        permute(s,l+1,r);
    
        swap(s[l],s[i]);
    }
    }
    
    
    
}


int main()
{
    string s = "abc    ";

    int j = s.size();
    permute(s,0,j-1);
    return 0;
    
    
    
    
}