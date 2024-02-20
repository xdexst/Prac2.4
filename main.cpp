#include <iostream>
#include <string>

using namespace std;

class TBook {
private:
    string Name;
    string Author;
    int Count;

public:
 TBook() {
        Name = "";
        Author = "";
        Count = 0;
    }
	
 TBook(string newname, string newauthor, int newcount) {
        Name = newname;
        Author = newauthor;
        Count = newcount;
    }
	
void SetName(string newname) {
        Name = newname;
    }

    void SetAuthor(string newauthor) {
        Author = newauthor;
    }

    void SetCount(int newcount) {
        Count = newcount;
    }
int main() {
    setlocale(LC_ALL, "ru");
TBook book1;


    book1.SetName("Drug");
    book1.SetAuthor("Nikolay Lvovich");
    book1.SetCount(10);
	
 TBook book2("Simba", "Lev Lvovich", 123);