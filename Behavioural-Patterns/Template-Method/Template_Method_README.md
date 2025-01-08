# Template

## * Definition

Template Method Pattern introduces a template in a superclass that defines the steps of an algorithm. These steps may include both common tasks shared among subclasses and specific tasks that need customization. Subclasses then implement or override these steps to modify the algorithm according to their specific needs.

## * Intent

- Define the skeleton of an algorithm in an operation, deferring some steps to client subclasses.
- Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.
- Base class declares algorithm 'placeholders', and derived classes implement the placeholders.

## * Structure

![](https://refactoring.guru/images/patterns/diagrams/template-method/structure.png)

1. The ***Abstract Class*** declares methods that act as steps of an algorithm, as well as the actual template method which calls these methods in a specific order. The steps may either be declared `abstract` or have some default implementation.
2. ***Concrete Classes*** can override all of the steps, but not the template method itself.

## * Pros 

-  You can let clients override only certain parts of a large algorithm, making them less affected by changes that happen to other parts of the algorithm.
-  You can pull the duplicate code into a superclass.

## * Cons

-  Some clients may be limited by the provided skeleton of an algorithm.
-  You might violate the *Liskov Substitution Principle* by suppressing a default step implementation via a subclass.
-  Template methods tend to be harder to maintain the more steps they have.