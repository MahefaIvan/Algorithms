//**************************************//
//this challenge is form codeforce.com //
//************************************//

#include <iostream>

//a function print a string under specific situation

void WayTooLongWord(std::string s){

//check if the given string is longer than 10 characters
    if(s.length() > 10){

        std::cout << s[0] << s.length()-2 << s[s.length()-1] << std::endl;

    }else{

//print the original string if less than 10 characters longer
        std::cout << s << std::endl;

    }

}

int main(){

//number of iterations to be done
    int n;
    
    std::string s;

    std::cin >> n;

    for(int i = 0;i < n;i++){

        std::cin >> s;
        WayTooLongWord(s);

    }

    return 0;
}