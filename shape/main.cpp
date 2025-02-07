#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Shape
{
public:
    virtual void draw() = 0; // soyut metot
};

class Triangle : public Shape // public kalıtım
{
protected:
    int x, y;

public:
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    void setX(int value)
    {
        x = value;
    }

    void setY(int value)
    {
        y = value;
    }

    Triangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void draw() override
    {
        cout << "The triangle has been drawn." << endl;
    }
};

class Rectangle : public Shape
{
  public:
    Rectangle(int x, int y)
    {
        
    }

    void draw() override
    {
        cout << "The rectangle  has been drawn." << endl;
    }
};

class Square : public Rectangle
{
  public:
    Square(int x) : Rectangle(x, x)
    {
        
    }

    void draw() override
    {
        cout << "The square has been drawn." << endl;
    }
};

int main()
{
    Triangle item1 = Triangle(3,5);
    Rectangle item2 = Rectangle(6,8);
    Square item3 = Square(4);

    item1.draw();
    item2.draw();
    item3.draw();

    char c = getchar(); // programın kapanmaması için
    return 0;
}