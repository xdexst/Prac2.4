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