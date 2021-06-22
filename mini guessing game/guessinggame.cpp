#include <iostream>
#include <cstdlib>
#include <ctime>

void minigame(){

    srand(time(0));
    int total_attempt = 0;
    int secret_number = 1+rand()%10;
    int user_input;

    std::cout << "try to guess the number "<< std::endl;

    while(total_attempt < 3){

        std::cin >> user_input;
        total_attempt++;

        if(total_attempt== 3 && user_input != secret_number){

            std::cout << "NOOB!,you lost xD" << std::endl;
            break;
                
        }   
        if(user_input != secret_number){
                
            std::cout << total_attempt;
            std::cout << "wrong,try again" << std::endl;

        }else{

            std::cout << "GG,you won!" << std::endl;
            break;
                
        }
    }
}

int main(){

minigame();


}