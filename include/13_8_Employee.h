#pragma once
#include <string>
using namespace std;

class Employee{
    public:
      Employee();
      Employee(const string &name);

      const int id() const { return id_; }

    private:
      string name_;
      unsigned id_;
      static int base_id;
};