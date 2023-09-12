  #include <iostream>
  #include <vector>
  #include <string>
typedef struct {
  std::string title;
  std::string  authors[5];
  long locID;
  std::string subjects[5];
  std::string publisher;
  std::string pubDate;
  bool isCirculating;

  }book;

typedef struct {
  std::vector<book> bookList;
}libdataT;
void initBooks(libdataT& l);
bool checkSubject(book b, std::string s);
void searchBySubject(std::vector<book>& libdata, std::string subject);
int main(){

  std::string input;
  libdataT libdata;
  initBooks(libdata);
  std::cout << "Welcome.Bonvenon.kama pona\n";
  while(1){
    
    std::cout << "What would you like to do:\n";
    std::cout << "1) List all books\n 2)Add a book\n 3)Search for books by subject\n";
      
    std::getline(std::cin,input);
    //if(input == "1") listBooks(libdata); 
    //if(input == "2") addBook(libdata);
    if(input == "3") {
      std::cout<<"What subject:\n";
      std::getline(std::cin, input);
      searchBySubject (libdata.bookList,input);
    };
  }
    return 0;
}
bool checkSubject(book b, std::string s){
    for (auto sub : b.subjects){
      if (sub == s) return true;
      }
    return false;
  }
void searchBySubject(std::vector<book>& libdata, std::string subject){
  for (auto b : libdata){
    if (checkSubject(b,subject)){
	std::cout << "Title: " << b.title << "\n";
	std::cout << "Author: " << b.authors[0] << "\n";
	std::cout << "LoC ID: " << b.locID << "\n";
      }
     }
}
 void initBooks(libdataT& l){
   book b1 = {
     "toki pona: the language of good"
     , {"Sonja Lang"}
     ,123456
     ,{"Language", "Non-fiction"}
     ,"company1"
     , "2014-1-1"
     , true
   };
   book b2 = {
     "Can't be bothered", {"Dude1","Genericson"}, 6548729 , {"trivia", "esoteric"},"company2", "1467-4-23",false
   };
   book b3 = {
     "Can't be bothered 2"
     ,{"Dude2","Genericson"}
     , 65138729
     ,{"trivia", "Sci-fi"}
     ,"idkcorp"
     ,"1467-4-23"
     ,false
   };
   book b4 = {
     "Something funny"
     , {"I'm eepy","Genericson"}
     , 654243569
     , {"trivia", "esoteric"}
     , "cleverjoke inc"
     , "1467-4-23"
     , false
   };
   book b5 = {
      "o moku e kala pona"
      ,{"jan Katan","jan ante kin"}
     ,3
      ,{"pona", "Children's", "feesh"}
      ,"idunnoapenguin"
      ,"2023-9-11"
      ,true
   };

   l.bookList.push_back(b5);
   l.bookList.push_back(b4);
   l.bookList.push_back(b3);
   l.bookList.push_back(b2);
   l.bookList.push_back(b1);
 };
