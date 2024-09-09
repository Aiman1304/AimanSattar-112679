#include<iostream>
using namespace std;

/* Program 13.1

class Test 
{
  private:
  int n;
  public:
  void in()
  {
    cout<<"Enter a number : ";
    cin>>n;
  }
  void out()
  {
    cout << "The value of n = " <<n;
  }  
};
  
int main()
{
    Test obj;
    obj.in();
    obj.out(); */
    
/* Program 13.2   
    
class Marks    
{
  private:
  int a,b,c;
  public:
  void in()
  {
    cout << "Enter three marks : ";
    cin >> a>>b>>c;
  }
  int sum()
  {
    return a+b+c;
  }
  float avg()
  {
    return (a+b+c)/3.0;
  }
};

int main()
{
    Marks m;
    int s;
    float a;
    m.in();
    s = m.sum();
    a = m.avg();
    cout << "Sum = " <<s<<endl;
    cout << "Average = " <<a;*/
    
    
    
/* Program 13.3 

class circle
{
  private:
  float radius;
  public:
  void get_radius(float r)
  {
    radius = r;
  }
  void area()
  {
  cout << "Area of circle : " <<3.14*radius*radius<<endl;
  }  
  void circum()
  {
  cout << "Circumference of circle: " <<2*3.14*radius;
  }
};

int main()
{
    circle c1;
    float rad;
    cout << "Enter radius: ";
    cin >> rad;
    c1.get_radius(rad);
    c1.area();
    c1.circum();*/
    
    
    
 /* Program 13.4
 
class Book
{
  private:
  int BookID, Pages;
  float price;
  public:
  void get()
  {
  cout << "Enter BookID: ";
  cin >> BookID;
  cout << "Enter pages: ";
  cin >> Pages;
  cout << "Enter price: ";
  cin >> price;
  }
  void show()
  {
  cout << "BookID = " <<BookID<< endl;
  cout << "Pages = " <<Pages<< endl;
  cout << "Price = " << price<< endl;
  }
  void set(int id, int pg, int pr)
  {
  BookID = id;
  Pages = pg;
  price = pr;
  }
  float getprice()
  {
  return price;
  }
};

int main()
{
    Book b1,b2;
    b1.get();
    b2.set(2,320,150.75);
    cout << "The detail of most costly book is as follows: " << endl;
    if(b1.getprice() > b2.getprice())
        b1.show();
    else
        b2.show();    */
        
        
        
 /* Program 13.5
 
 
class Result
{
  private:
  int rno,marks[3];
  char name[50];
  public:
  void input()
  {
    cout << "Enter roll no: ";
    cin >> rno;
    cout << "Enter name: ";
    cin >> name;
    for(int i=0; i<3; i++)
    {
      cout << "Enter marks["<<i<<"]:";
      cin >> marks[i];
    }
  }
  void show()
  {
    cout << "Roll no = " << rno<<endl;
    cout << "Name = " << name<<endl;
    for(int i=0; i<3; i++)
      cout << "Marks["<<i<<"]:" <<marks[i]<< endl;
  }
  int total()
  {
    int t=0;
    for(int i=0; i<3; i++)
      t=t+marks[i];
    return t;
  }
  float avg()
  {
    int t=0;
    for(int i=0; i<3; i++)
      t=t+marks[i];
    return t/3.0;
  }
};        

int main()
{
    Result r;
    r.input();
    r.show();
    cout << "Total marks = " <<r.total()<< endl;
    cout << "Average marks = " <<r.avg()<< endl;*/
    
    
    
    
 /* Program 13.6


class Array
{
  private:
  int a[5];
  public:
  void fill();
  void display();
  int max();
  int min();
};    
void Array::fill()
{
  for(int i=0; i<5; i++)
  {
    cout << "Enter a["<<i<<"]: ";
    cin >> a[i];
  }
}
void Array::display()
{
  for(int i=0; i<5; i++)
    cout << "a["<<i<<"]: " <<a[i]<< endl;
}
int Array::max()
{
  int m=a[0];
  for(int i=0; i<5; i++)
    if(m<a[i])
     m = a[i];
  return m;
}
int Array::min()
{
  int m=a[0];
  for(int i=0; i<5; i++)
    if(m>a[i])
     m=a[i];
  return m;
}
int main()
{
    Array arr;
    arr.fill();
    cout << "You entered the following values: " << endl;
    arr.display();
    cout << "Maximum value= " <<arr.max()<< endl;
    cout << "Minimum value= " <<arr.min()<< endl; */
    
    
    
    
/* Program 13.7


class Hello    
{
  private:
  int n;
  public:
  Hello()
  {
    cout << "Object created....." << endl;
  }
};
int main()
{
    Hello x,y,z;  */
    
    
    
    
 /* Program 13.8
 
 
class Number
{
  private:
  int x,y;
  public:
  Number()
  {
    x=y=100;
  }
  void avg()
  {
    cout << "x= " << x<<endl;
    cout << "y= " << y<<endl;
    cout << "Average= " <<(x+y)/2<< endl;
  }
};    
int main()
{
    Number n;
    n.avg();  */
    
    
    
    
    
/* Program 13.9 


class Student
{
  private:
  int marks;
  char grade;
  public:
  Student(int m,char g)
  {
    marks =m;
    grade = g;
  }
  void show()
  {
    cout << "Marks= " <<marks<< endl;
    cout << "Grade= " <<grade<< endl;
  }
};    
int main()
{
    Student s1(730,'A'),s2(621,'B');
    cout << "Record of student 1: " << endl;
    s1.show();
    cout << "Record of student 2: " << endl;
    s2.show(); */
    
    
    
    
/* Program 13.10 


class TV
{
  public:
  TV(char Brand[], char Mod[], float Price);
  void Change(char Brand[], char Mod[], float Price);
  void Display();
  private:
  char BrandName[20];
  char Model[10];
  float RetailPrice;
};
TV::TV(char Brand[], char Mod[], float Price)
{
  strcpy(BrandName, Brand);
  strcpy(Model,Mod);
  RetailPrice=Price;
}
void TV::Change(char Brand[], char Mod[], float Price)
{
  strcpy(BrandName, Brand);
  strcpy(Model,Mod);
  RetailPrice=Price;
}
void TV::Display()
{
  cout << "Brand name= " << BrandName<<endl;
  cout << "Model= " <<Model<< endl;
  cout << "Price= " <<RetailPrice<< endl;
}

int main()
{
    TV Test("SONY","HDTV",25000);
    cout << "Displaying the object..." << endl;
    Test.Display();
    Test.Change("Toshiba", "STDV", 22000);
    cout << "Displaying object after change..." << endl;
    Test.Display();
    return 0;
}*/