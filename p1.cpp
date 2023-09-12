#include <iostream>
#include <string>
#include <algorithm>
std::string typeCorrect (std::string s);
void palinNum();
void libdat();
int main(){
  /*
  std::string input; 
  std::getline(std::cin,input);
  std::cout << typeCorrect(input)<< std::endl;*/
  palinNum();
  return 0; 

}

std::string typeCorrect(std::string s){
  //wasn't catching s specifically for some reason
  //now it does... whyyy
  std::string qwerty = "asqwertyuiop[]\asdfghjkl;'zxcvbnm,./QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
  std::string no = "QAZqaz";
  std::string ret;
  for (int i = 0; i < s.length(); i++){
    if (no.find(s[i]) != -1) continue;
    if (s[i]== ' '){
      ret.push_back(' ');
      continue;
      }
    ret.push_back(qwerty[qwerty.find(s[i])-1]);
  }
  return ret;
}
 
void palinNum(){
  int numOfCases;
  std::string input;
  std::getline(std::cin, input);
  numOfCases = std::stoi(input);
  std::string cases[4];
  //get input
  for (int i = 0; i < numOfCases; i++){
    std::getline(std::cin,input);
    cases[i] = input;
   }
  //find palindromes
  for(int i = 0; i <numOfCases;i++){
    std::string case_ = cases[i];
    std::string caseRev = case_;
    std::reverse(caseRev.begin(),caseRev.end());
    int count = 0;
    
    while(case_ != caseRev){
    case_ = std::to_string(std::stoi(case_) + std::stoi(caseRev));
    caseRev = case_;
    std::reverse(caseRev.begin(),caseRev.end());
    count++;
    }
    //print output
    std::cout << count <<" "<< case_ << std::endl;
  }
}
 struct {
    string title;
    string[5] authors;
    long locID;
    string[5] subjects;
    string publisher;
    string pubDate;
    bool isCirculating;

  }book;
  
void libdat(){
  

}
bool checkSubject(book b, std::string s){
    for (auto sub : b.subjects){
      if (sub == s) return true
		      }
    return false;
  }
void searchBySubject(std::vector<book> libdata, std::string subject){
  for (auto b : libdata){
    if (checkSubject(b,subject){
	std::cout << "Title: " << b.title << "\n";
	std::cout << "Author: " << b.authors[0] << "\n";
	std::cout << "LoC ID: " << b.locID << "\n";
      }
      }  

  
  
  



