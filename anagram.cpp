
 # include <iostream> 
 # include <algorithm> 
  
 // returns whether a string is anagram or not 
 // s1 -> first string 
 // s2 -> second string 
 bool anagram(std::string s1, std::string s2){ 
         // sorting both strings 
         std::sort(s1.begin(), s1.end()); 
         std::sort(s2.begin(), s2.end()); 
          
         // returning if the two strings are equal 
         return s1 == s2;         
 } 
  
 // execution starts from here 
 int main(int argc, char** argv){ 
         // variable declaration 
         std::string s1, s2; 
          
         // asking user to input strings 
         std::cout << "Enter two strings:\n"; 
         std::cin >> s1 >> s2; 
          
         // checking if the strings are anagram 
         if(anagram(s1, s2)) 
         std::cout << "The strings are anagram!"; 
         else 
         std::cout << "The strings are not anagram!";         
         return 0; 
 }
