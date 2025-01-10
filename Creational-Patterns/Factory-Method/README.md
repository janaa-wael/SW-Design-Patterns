# Factory Method Pattern

## * Definition

Factory Method Pattern provides an interface for creating objects but leaves the actual object instantiation to derived classes. This allows for flexibility in object creation and promotes loose coupling between the client code and the concrete products.

## * Intent

- Define an interface for creating an object, but let subclasses decide which class to instantiate. 
- Factory Method lets a class defer instantiation to subclasses.
- Defining a "virtual" constructor.
- The new operator considered harmful.

## * Structure

![Factory Method Pattern](https://raw.githubusercontent.com/Codecademy/docs/main/media/factory-uml.png)

## * Pros

-  You avoid tight coupling between the creator and the concrete products.
-  *Single Responsibility Principle*. You can move the product creation code into one place in the program, making the code easier to support.
-  *Open/Closed Principle*. You can introduce new types of products into the program without breaking existing client code.

## * Cons

-  The code may become more complicated since you need to introduce a lot of new subclasses to implement the pattern. The best case scenario is when you’re introducing the pattern into an existing hierarchy of creator classes.