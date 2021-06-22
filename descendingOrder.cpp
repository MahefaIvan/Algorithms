//************************************//
//this challenge is from codewars.com //
//************************************//

#include <cinttypes>
#include <string>
#include<sstream>

uint64_t descendingOrder(uint64_t a){
  
   uint64_t ans;
  
  //creating a string stream object to store "a"
  
   std::stringstream ss; 
   ss << a;
  
  //creating a variable tmp to store "a" as a string with .str() function
  
   std::string tmp = ss.str();
  
  //sorting then reversing the string
  
   std::sort(tmp.begin(), tmp.end());
   std::reverse(tmp.begin(), tmp.end());
  
  //creating iss istringstream object to store tmp then converting it to a unit64 type (must do so because can't convert string to uint64 directly)
  
   std::istringstream iss(tmp);
   iss >> ans;

   return ans;

}