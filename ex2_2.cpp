#include<iostream>
#include<string>

std::string reverseString (std::string str){
    std::string reverse_str="";
    for (int i = str.length() - 1; i >= 0 ;i--){
        reverse_str += str[i];
    }
    return reverse_str;


}
int main(){
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input ;

    std::cout << "Reverse string: " << reverseString(input);

    return 0;
}
