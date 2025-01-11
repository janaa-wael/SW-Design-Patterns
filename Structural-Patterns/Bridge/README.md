# Bridge Pattern

## *Definition

Bridge Pattern is basically a structural design pattern in software engineering or in C++ programming that is used to separate an object's abstraction from its implementation. It is part of the Gang of Four (GoF) design patterns and is particularly useful when we need to avoid a permanent binding between an abstraction and its implementation. The Bridge Pattern promotes flexibility and allows us to change both the abstraction and the implementation independently.

## * Intent

- Decouple an abstraction from its implementation so that the two can vary independently.
- Publish interface in an inheritance hierarchy, and bury implementation in its own inheritance hierarchy.
- Beyond encapsulation, to insulation

## * Structure

![Bridge Pattern Structure](https://www.bogotobogo.com/DesignPatterns/images/bridge/bridgediagram.png)

## * Pros

- You can create platform-independent classes and apps.
-  The client code works with high-level abstractions. It isn’t exposed to the platform details.
-  *Open/Closed Principle*. You can introduce new abstractions and implementations independently from each other.
-  *Single Responsibility Principle*. You can focus on high-level logic in the abstraction and on platform details in the implementation.

## * Cons

-  You might make the code more complicated by applying the pattern to a highly cohesive class.