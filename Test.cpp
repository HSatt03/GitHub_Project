#include <iostream>
using namespace std;
class Lesson
{
private:
    Lesson(string = "Wourld",string = "Hasti", string = "sdfghjhgfdfgh", int = 120000);
    void setPrice(int price)
    {
        if(price > 0)
        {
            _price = price;
        }
    }
    int get()
    {
        return _price;
    }
public:
    string _name;
    string _author;
    string _ISBN;
    int _price;
};
Lesson::Lesson(string name, string author, string ISBN, int price)
{
    _name = name;
    _author = author;
    _ISBN = ISBN;
    setPrice(price);
}
int main()
{

    return ;
}