# Flyweight

## * Definition

A flyweight pattern is a structural design pattern used to optimize memory usage and performance when dealing with a large number of objects that share some common characteristics. It achieves this by separating an object's intrinsic state (shared among multiple objects) from its extrinsic state (unique to each object) and storing the intrinsic state externally, typically within a Flyweight factory. This pattern is particularly useful when you need to create a significant number of similar objects and want to minimize the memory footprint.

## * Intent

- Use sharing to support large numbers of fine-grained objects efficiently.

## * Structure

![Flyweight Pattern Structure](https://refactoring.guru/images/patterns/diagrams/flyweight/structure.png)

## * Pros

-  You can save lots of RAM, assuming your program has tons of similar objects.

## * Cons

-  You might be trading RAM over CPU cycles when some of the context data needs to be recalculated each time somebody calls a flyweight method.
-  The code becomes much more complicated. New team members will always be wondering why the state of an entity was separated in such a way.