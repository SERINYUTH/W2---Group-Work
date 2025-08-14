#include<iostream>
#include<stdbool.h>
using namespace std;
bool isPalindrome(string str){
    string temp="";
    for(int i=0;i<str.length();i++)
    if(str[i]!=' '){
        temp+=str[i];
    }
    for(int i=0;i<(temp.length()-1)/2;i++){
        if(temp[i]!=temp[temp.length()-1-i]){
            return false;
        }

    }
    return true;
    
}
int main(){
    string text;
    cout<<"Enter the text:";getline(cin,text);
    if(isPalindrome(text)){
        cout<<"It is palindrome"<<endl;
    }else{
         cout<<"It is not palindrome"<<endl;
    }
    return  0;
}
