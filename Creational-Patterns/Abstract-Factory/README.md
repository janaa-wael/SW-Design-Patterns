# Abstract Factory Pattern

## * Definition

Abstract Factory Pattern is a creational design pattern used in object-oriented programming. It provides an interface for creating families of related or dependent objects without specifying their concrete classes. This pattern is a way to encapsulate the creation of objects and ensure that they are compatible and properly configured. 

## * Intent

▪ Provide an interface for creating families of related or dependent objects without specifying their concrete classes.
▪ A hierarchy that encapsulates: many possible "platforms", and the construction of a suite of "products".
▪ The new operator considered harmful.

## * Structure

![Abstract Factory Pattern](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Abstract_Factory_UML_class_diagram.svg/2560px-Abstract_Factory_UML_class_diagram.svg.png)

## * Pros

- You can be sure that the products you’re getting from a factory are compatible with each other.
-  You avoid tight coupling between concrete products and client code.
-  *Single Responsibility Principle*. You can extract the product creation code into one place, making the code easier to support.
-  *Open/Closed Principle*. You can introduce new variants of products without breaking existing client code.

## * Cons

-  The code may become more complicated than it should be, since a lot of new interfaces and classes are introduced along with the pattern.