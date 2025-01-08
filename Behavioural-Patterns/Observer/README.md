# Observer

## * Definition

The Observer Pattern is a behavioral design pattern that defines a one-to-many dependency between objects, meaning that when one object (the subject) changes its state, all its dependents (observers) are notified and updated automatically. This pattern is used to build distributed event-handling systems and is a crucial part of many software architectures, including Model-View-Controller (MVC).

## * Intent

- Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
- Encapsulate the core (or common or engine) components in a Subject abstraction, and the variable (or optional or user interface) components in an Observer hierarchy.
- The "View" part of Model-View-Controller.

## * Structure

![Observer Pattern Structure](https://statusneo.com/wp-content/uploads/2023/07/image-21.png)

## * Pros

- *Open/Closed Principle*. You can introduce new subscriber classes without having to change the publisher’s code (and vice versa if there’s a publisher interface).
-  You can establish relations between objects at runtime.

## * Cons

- Subscribers are notified in random order.