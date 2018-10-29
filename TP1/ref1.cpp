#include<iostream>

void fonction012(int a)
{
  std::cout << &a << std::endl;
}

void fonction012(int& a)
{
  std::cout << &a << std::endl;
}

int main(int, char **)
{
  int age = 41;

  std::cout << &age << std::endl;
  fonction012(age);
  fonction012(age);

  return 0;
}