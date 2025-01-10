# Decorator Pattern

## * Definition

The Decorator Pattern is a structural design pattern in software engineering that enables the dynamic addition of new behaviors or responsibilities to individual objects without altering their underlying class structure. It achieves this by creating a set of decorator classes that are used to wrap concrete components, which represent the core functionality.

## * Intent

- Attach additional responsibilities to an object dynamically. 
- Decorators provide a flexible alternative to subclassing for extending functionality.
- Client-specified embellishment of a core object by recursively wrapping it.
- Wrapping a gift, putting it in a box, and wrapping the box.

## * Structure

![Decorator Pattern Structure](https://gencmurat.com/decorator.svg)

## * Pros

-  You can extend an object’s behavior without making a new subclass.
-  You can add or remove responsibilities from an object at runtime.
-  You can combine several behaviors by wrapping an object into multiple decorators.
-  *Single Responsibility Principle*. You can divide a monolithic class that implements many possible variants of behavior into several smaller classes.

## * Cons

-  You can extend an object’s behavior without making a new subclass.
-  You can add or remove responsibilities from an object at runtime.
-  You can combine several behaviors by wrapping an object into multiple decorators.
-  *Single Responsibility Principle*. You can divide a monolithic class that implements many possible variants of behavior into several smaller classes.