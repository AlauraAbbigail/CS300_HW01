#include <iostream>

struct LibraryT {
  std::string title;
  std::string author;
  std::int cataNum;
  std::string subj;
  std::string publisher;
  std::int yearPub;
  std::bool checkCirc;
};

void printLibarayCatalog(LibraryT a);

int main() {
  LibraryT a;
  a.title = "Book A";
  a.author = "Alaura Buzbee";
  a.cataNum = 01;
  a.sub = "Educational";
  a.publisher = "UAB Publishing House";
  a.yearPub = 2020;
  a.checkCirc = true;

  printLibraryCatalog(a);
}

void printLibraryCatalog(LibraryT a) {
  std::cout << a.title << " by " << a.author;
  std::cout << " is an " << a.sub << " book";
  std::cout << " published by " << a.publisher;
  std::cout << " in the year " << a.yearPub;
  std::cout << " with a catalogy number of: " << a.cataNum;
  std::cout << " and is still circulating " << a.checkCirc << std::endl;
}
