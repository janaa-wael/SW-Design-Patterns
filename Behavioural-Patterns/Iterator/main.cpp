/*
 * main.cpp
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

// Employee class
class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(const std::string& name, double salary)
        : name(name), salary(salary) {}

    double getSalary() const {
        return salary;
    }
};

// Iterator interface
template <typename T>
class Iterator {
public:
    virtual ~Iterator() = default;
    virtual bool hasNext() const = 0;
    virtual T next() = 0;
};

// Aggregate interface
template <typename T>
class Aggregate {
public:
    virtual ~Aggregate() = default;
    virtual Iterator<T>* createIterator() = 0;
};

// Concrete Iterator
class EmployeeIterator : public Iterator<Employee> {
private:
    size_t currentIndex;
    const std::vector<Employee>& employees;

public:
    EmployeeIterator(const std::vector<Employee>& employees)
        : currentIndex(0), employees(employees) {}

    bool hasNext() const override {
        return currentIndex < employees.size();
    }

    Employee next() override {
        if (!hasNext()) {
            throw std::out_of_range("No more elements");
        }
        return employees[currentIndex++];
    }
};

// Concrete Aggregate
class Company : public Aggregate<Employee> {
private:
    std::vector<Employee> employees;

public:
    Company(const std::vector<Employee>& employees)
        : employees(employees) {}

    Iterator<Employee>* createIterator() override {
        return new EmployeeIterator(employees);
    }
};

// Main function
int main() {
    std::vector<Employee> employees = {
        Employee("Alice", 50000),
        Employee("Bob", 60000),
        Employee("Charlie", 70000)
    };

    Company company(employees);
    Iterator<Employee>* iterator = company.createIterator();

    double totalSalary = 0;
    while (iterator->hasNext()) {
        totalSalary += iterator->next().getSalary();
    }

    delete iterator;

    std::cout << "Total salary: " << totalSalary << std::endl;

    return 0;
}



