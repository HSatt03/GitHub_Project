#include <iostream>
using namespace std;
class Date
{
public:
    Date()
    {
        _day = 1;
        _month = 1;
        _year = 1404;
    }
private: 
    int _day;
    int _month;
    int _year;
};
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
    string getName()
    {
        return _name;
    }
    string getAuthor()
    {
        return _author;
    }
    string  getISBN()
    {
        return _ISBN;
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