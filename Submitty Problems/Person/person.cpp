#include"iostream"
#include"string"
using namespace std;
class Person
{
  int uid;
  string name;
  int mm;
  int yy;
  int age=0;
  public:
  Person(int a, string b, int c, int d)
  {
    uid = a;
    name = b;
    mm = c;
    yy = d;
  }
  
  int computeAge()
  {
    if(mm<=6)
    {
      age = 2020-yy;
      return age;
    }
    else
    {
      age = 2020-yy-1;
      return age;
    }
  }
  int isEligible()
  {
    if(age>=18)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  int computeInsurance()
  {
    return (5000 + (age/10)*1000);
  }

  void display() 
  {
    std::cout << uid << "," << name << "," << computeAge() << "\n";
  }
};

int main() 
{
  int res;
  int uid;
  std::string name;
  int mm;
  int yy;
  std::cin >> uid >> name >> mm >> yy;
  Person p1(uid,name,mm,yy);
  res = p1.computeAge();
  std::cout << res << "\n";
  if(p1.isEligible())
    std::cout << "yes\n";
  else
    std::cout << "no\n";
  std::cout << p1.computeInsurance() << "\n";
  p1.display();
  return 0;
}