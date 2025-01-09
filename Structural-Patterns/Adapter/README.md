# Adapter Pattern

## * Definition

Adapter Pattern is a structural design pattern used to make two incompatible interfaces work together. It acts as a bridge between two incompatible interfaces, allowing them to collaborate without modifying their source code. This pattern is particularly useful when integrating legacy code or third-party libraries into your application.

## * Intent

- Convert the interface of a class into another interface clients expect. Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.
- Wrap an existing class with a new interface.
- Impedance match an old component to a new system

## * Structure

![Adapter Pattern Structure](https://www.researchgate.net/publication/353260518/figure/fig1/AS:1069684111728640@1632043974881/The-class-diagram-of-the-Adapter-design-pattern.png)

## * Pros

- *Single Responsibility Principle*. You can separate the interface or data conversion code from the primary business logic of the program.
-  *Open/Closed Principle*. You can introduce new types of adapters into the program without breaking the existing client code, as long as they work with the adapters through the client interface.

## * Cons

- The overall complexity of the code increases because you need to introduce a set of new interfaces and classes. Sometimes it’s simpler just to change the service class so that it matches the rest of your code.