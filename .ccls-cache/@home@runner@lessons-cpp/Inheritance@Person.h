#pragma once
#include <iostream>

using namespace std;

class Person {
protected:
  string name;
  string address;
  int age;

public:
  Person();
  void display();
  void displayDetails();
  ~Person();
};
