/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:42:32 by merlich           #+#    #+#             */
/*   Updated: 2022/07/31 19:18:43 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "heritage.hpp"

// int main(void)
// {
//     TA   ta1( 30 );

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Person {
//    // Data members of person
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
// };
 
// class Faculty : public Person {
//    // data members of Faculty
// public:
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
// };
 
// class Student : public Person {
//    // data members of Student
// public:
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
// };
 
// class TA : public Faculty, public Student  {
// public:
//     TA(int x):Student(x), Faculty(x)   {
//         cout<<"TA::TA(int ) called"<< endl;
//     }
// };
 
// int main()  {
//     TA ta1(30);
// }

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A() { x = 0; }
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}