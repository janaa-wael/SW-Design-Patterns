# Command

## * Definition

The Command Pattern is a behavioral design pattern that focuses on encapsulating a request as an object, thereby decoupling the sender of the request from the receiver. This pattern allows you to parameterize objects with commands, delay or queue a request's execution, and support undoable operations. It's a fundamental pattern for implementing a wide range of functionality in software systems.

## * Intent

- Encapsulate a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.
- The object is used to encapsulate all information needed to perform an action or trigger an event at a later time.
- This information includes the method name, the object that owns the method and values for the method parameters.

## * Structure

![Command Pattern UML](https://www.cs.mcgill.ca/~hv/classes/CS400/01.hchen/doc/command/command.gif)

## * Pros

- *Single Responsibility Principle*. You can decouple classes that invoke operations from classes that perform these operations.
-  *Open/Closed Principle*. You can introduce new commands into the app without breaking existing client code.
-  You can implement undo/redo.
-  You can implement deferred execution of operations.
-  You can assemble a set of simple commands into a complex one.

## * Cons

-  The code may become more complicated since you’re introducing a whole new layer between senders and receivers.