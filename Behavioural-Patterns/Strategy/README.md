# Strategy Method

## * Definition

Strategy Pattern is a behavioral design pattern that defines a family of interchangeable algorithms and allows them to be used *interchangeably* within a context. This pattern enables the algorithm to be selected at *runtime*, providing flexibility and promoting code reusability.

## *Intent

- Define a family of algorithms, encapsulate each one, and make them interchangeable.
- Strategy lets the algorithm vary independently from the clients that use it.
- Capture the abstraction in an interface, bury implementation details in derived classes.

## * Structure

![Strategy Pattern Structure](https://stg-tud.github.io/sedc/Lecture/ws13-14/Images/DP-Strategy-Structure.png)

## *Pros

-  You can swap algorithms used inside an object at runtime.
-  You can isolate the implementation details of an algorithm from the code that uses it.
-  You can replace inheritance with composition.
-  *Open/Closed Principle*. You can introduce new strategies without having to change the context.

## * Cons

-  If you only have a couple of algorithms and they rarely change, there’s no real reason to overcomplicate the program with new classes and interfaces that come along with the pattern.
-  Clients must be aware of the differences between strategies to be able to select a proper one.
-  A lot of modern programming languages have functional type support that lets you implement different versions of an algorithm inside a set of anonymous functions. Then you could use these functions exactly as you’d have used the strategy objects, but without bloating your code with extra classes and interfaces.