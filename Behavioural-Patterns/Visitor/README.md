# Visitor

## * Definition

A visitor design patterns or visitor method is basically defined as a behavioral design pattern that allows us to define a new operation without changing the classes of the elements on which it operates. 

## * Intent

- Represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.
- The classic technique for recovering lost type information.
- Do the right thing based on the type of two objects.

## * Structure

![Visitor Pattern Structure](https://refactoring.guru/images/patterns/diagrams/visitor/structure-en.png)

## * Pros

- *Open/Closed Principle*. You can introduce a new behavior that can work with objects of different classes without changing these classes.
-  *Single Responsibility Principle*. You can move multiple versions of the same behavior into the same class.
-  A visitor object can accumulate some useful information while working with various objects. This might be handy when you want to traverse some complex object structure, such as an object tree, and apply the visitor to each object of this structure.

## * Cons

-  You need to update all visitors each time a class gets added to or removed from the element hierarchy.
-  Visitors might lack the necessary access to the private fields and methods of the elements that they’re supposed to work with.