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
    string GetName() const {
        return Name;
    }
    string GetAuthor() const {
        return Author;
    }
    int GetCount() const {
        return Count;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    TBook book1;
    book1.SetName("Drug");
    book1.SetAuthor("Nikolay Lvovich");
    book1.SetCount(10);

    TBook book2("Simba", "Lev Lvovich", 123);

    cout << "First Book: " << book1.GetName() << ", " << book1.GetAuthor() << ", " << book1.GetCount() << endl;
    cout << "Second Book: " << book2.GetName() << ", " << book2.GetAuthor() << ", " << book2.GetCount() << endl;

    return 0;
}
