# `Mediator`

## * Definition

The Mediator Design Pattern in C++ is a behavioral pattern that defines an object, the mediator, to centralize communication between various components or objects in a system. This promotes loose coupling by preventing direct interactions between components, instead of having them communicate through the mediator, facilitating better maintainability and flexibility in the system architecture.

## * Intent

- Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
- Design an intermediary to decouple many
  peers.
- Promote the many-to-many relationships between interacting peers to "full object
  status".

## * Structure

![Mediator Pattern Class Diagram](https://upload.wikimedia.org/wikipedia/commons/e/e4/Mediator_design_pattern.png)

## * Pros

-  *Single Responsibility Principle*. You can extract the communications between various components into a single place, making it easier to comprehend and maintain.
-  *Open/Closed Principle*. You can introduce new mediators without having to change the actual components.
-  You can reduce coupling between various components of a program.
-  You can reuse individual components more easily.

## * Cons

-  Over time a mediator can evolve into an all-knowing object.