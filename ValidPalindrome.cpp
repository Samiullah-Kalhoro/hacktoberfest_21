#include<iostream>
using namespace std;
bool validCharacter(char ch){
       if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')||(ch>='A' && ch<='Z'))
       {return 1;}
       else
       {return 0;}
   }
char lowercase(char ch)
   {if((ch>='0' && ch<='9')||(ch>='a' && ch<='z'))
   {return ch;}
   else
   {ch=ch-'A'+'a';}
   return ch;
   }
bool validPalindrome(string s){
    string temp="";
      for(int i=0;i<s.size();i++)
      {char ch=s[i];
        if(validCharacter(ch))
        {temp.push_back(ch);}
        else
        continue;}
        for(int i=0;i<temp.size();i++)
        {temp[i]=lowercase(temp[i]);}
      int i=0;
      int j=temp.size()-1;
      while(i<=j)
      {if(temp[i]==temp[j])
      {i++;
      j--;}
      else
      {return false;}
    }
      return true;
}
int main(){
    string s;
    cin>>s;
    if(validPalindrome(s))
    {cout<<"true";}
    else
    {cout<<"false";}
    return 0;
}