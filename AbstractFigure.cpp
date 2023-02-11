#include <iostream>

// Abstract Class
class AbstractFigure
{
protected:

    // Side Field
    float Side_;

public:

    // Constructor
    AbstractFigure(float Side)
    {
        Side_ = Side;
    }
};

// Class Triangle
class Triangle final : AbstractFigure
{
public:

    // Triangle Constructor 
    Triangle(float Side) : AbstractFigure(Side)
    {

    }

    // Output Triangle Perimeter & Square 
    void Output() const
    {
        std::cout << "Perimeter: " << Side_ * 3 << "\n";
        std::cout << "Area: " << (pow(Side_ ,2) * sqrt(3)) / 4;
    }

    // Destructor
    ~Triangle()
    {

    }

private:
};

// Class Circle
class Circle final : AbstractFigure
{
public:

    // Triangle Constructor 
    Circle(float Side) : AbstractFigure(Side)
    {

    }

    // Output Circle Perimeter & Square 
    void Output() const
    {
        std::cout << "Perimeter: " << Side_ * 3.14 << "\n";
        std::cout << "Area: " << (pow(Side_ ,2) * 3.14) / 4;
    }
};

// Class Rectangle
class Rectangle  final : AbstractFigure
{
public:

    // Triangle Constructor 
    Rectangle(float Side) : AbstractFigure(Side)
    {

    }

    // Output Circle Perimeter & Square 
    void Output() const
    {
        std::cout << "Enter Second Side Of Rectangle:\n";
        float SecondSide;
        std::cin >> SecondSide;
        std::cout << "Perimeter: " << 2 * (SecondSide + Side_) << "\n";
        std::cout << "Area: " << (SecondSide * Side_);
    }
};

// Class Square
class Square  final : AbstractFigure
{
public:
    // Triangle Constructor 
    Square(float Side) : AbstractFigure(Side)
    {

    }

    // Output Circle Perimeter & Square 
    void Output() const
    {
        std::cout << "Perimeter: " << Side_ * 4 << "\n";
        std::cout << "Area: " << pow(Side_, 2);
    }
};

int main()
{
    // Triangle 
    std::cout << "Triangle:\n";
    Triangle Triangletemp(5);
    Triangletemp.Output();
    std::cout << std::endl;

    std::cout << "\nCircle:\n";
    Circle TempCircle(6);
    TempCircle.Output();
    std::cout << std::endl;

    std::cout << "\nRectangle:\n";
    Rectangle TempRectangle(3);
    TempCircle.Output();
    std::cout << std::endl;

    std::cout << "\nSquare:\n";
    Square TempSquare(6);
    TempCircle.Output();
    std::cout << std::endl;

}