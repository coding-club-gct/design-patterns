
#include <iostream>

using namespace std;

class Colour{
public:
   virtual void paint()=0;
    
};

class BlueColour: public Colour{
public:
   void paint(){
       cout<<"applying Blue colour!!"<<endl;
   }
    
};

class RedColour: public Colour{
public:
   void paint(){
       cout<<"applying Red colour!!"<<endl;
   }
    
};

class Shape{
protected:
  Colour* colour;
public:
   Shape(Colour* colour): colour(colour){}
   virtual void draw()=0;
    
};

class Circle : public Shape{

public:
   Circle(Colour* colour): Shape(colour){}
   void draw(){
       cout<<"Drawing circle & ";
       colour->paint();
   };
     
};

class Square : public Shape{

public:
   Square(Colour* colour): Shape(colour){}
   void draw(){
       cout<<"Drawing Square & ";
       colour->paint();
   };
     
};

int main()
{
    Colour* red=new RedColour();
    Colour* blue=new BlueColour();
    Shape* circle= new Circle(red);
    Shape*  square=new Square(blue);
    circle->draw();
    square->draw();

    return 0;
}