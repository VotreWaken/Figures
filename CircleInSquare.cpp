#include <iostream>

// Class Square
class Square
{
public:

	// Constructor
	Square(float Side) : Side_(Side)
	{
		
	}	

	// Display Square Side Value 
	float GetSquareSide()
	{
		std::cout << "Square Side: " << Side_ << "\n";
		return Side_;
	}

	// Destructor
	~Square()
	{

	}

protected:
	// Field Side
	float Side_;
};

// Class Circle
class Circle
{
public:

	// Constructor
	Circle(float Radius) : Radius_(Radius)
	{

	}

	// Method Get Radius 
	float GetRadius()
	{
		std::cout << "Radius: " << Radius_ << "\n";
		return Radius_;
	}

	// Destructor
	~Circle()
	{

	}

protected:
	// Radius Field
	float Radius_;
};

class CircleInSquare : public Square, public Circle
{
public:
	// Constructor
	CircleInSquare(float Radius) : Square(Radius), Circle(Radius)
	{

	}

	// Destructor 
	~CircleInSquare()
	{

	}
};

int main()
{
	CircleInSquare myCircle = CircleInSquare(20);
	myCircle.GetSquareSide();
	myCircle.GetRadius();
}