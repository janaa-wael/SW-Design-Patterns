# Iterator

## * Definition

The Iterator pattern is a widely used design pattern in software development that provides a way to access the elements of an aggregate object (such as a list or collection) sequentially without exposing its underlying representation.

## * Intent

- Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
- The C++ and Java standard library abstraction that makes it possible to decouple collection classes and algorithms.
- Promote to "full object status" the traversal of a collection.
- Polymorphic traversal

## * Structure

![Iterator Pattern Structure](https://www.cs.unc.edu/~stotts/GOF/hires/Pictures/iterator.gif)

## * Pros

- *Single Responsibility Principle*. You can clean up the client code and the collections by extracting bulky traversal algorithms into separate classes.
-  *Open/Closed Principle*. You can implement new types of collections and iterators and pass them to existing code without breaking anything.
-  You can iterate over the same collection in parallel because each iterator object contains its own iteration state.
-  For the same reason, you can delay an iteration and continue it when needed.

## * Cons

-  Applying the pattern can be an overkill if your app only works with simple collections.
-  Using an iterator may be less efficient than going through elements of some specialized collections directly.