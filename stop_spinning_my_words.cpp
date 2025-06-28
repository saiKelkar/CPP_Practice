#include <iostream>

std::string spinWords(const std::string &str)
{
  std::string str_1, final_string;

  for(std::string::const_iterator i = str.begin(); i != str.end(); i++) {
    if(*i != ' '){
      str_1.push_back(*i);
    }  
    if(*i == ' ' || i + 1 == str.end()){
      if(str_1.length() >= 5) {
        std::string::reverse_iterator j;
        
        for(j = str_1.rbegin(); j != str_1.rend(); j++){
          final_string.push_back(*j);
        }
      }
      else {
        final_string += str_1;
      }
      if(*i == ' ') {
        final_string += ' ';
      }
      str_1.clear();
    }
  }
    
  
  return final_string;
}// spinWords

