#include <iostream>
using namespace std;
 
double power(double base,int exponent){
    double answer =1;
        if(exponent>0){
            for (int i =0;i<exponent;i++){
            answer=answer*base;
            }
        }else if(exponent<0){
            for (int i = 0; i <-exponent; i++){
                answer = answer * 1/base ;
            }
        } 
        return answer;
}
 int main(){
    double result = power(2.4, 5);
    cout<<"The result is : "<< result;

    return 0;
 }

