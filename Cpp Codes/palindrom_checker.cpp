#include <iostream>
#include <string>
#include <algorithm>


int main(){
    std::string x;
    std::cout<<"Enter a string:";
    std::cin>>x;

    std::string chk = x;
    if(chk.empty()){
        std::cout<<"String is empty";
        return 0;
    }
    reverse(chk.begin(),chk.end());
    
    if(chk==x){
        std::cout<<"This is a palindrom";
    }
    else{
        std::cout<<"This is not a palindrom";
    }
    
    return 0;
}