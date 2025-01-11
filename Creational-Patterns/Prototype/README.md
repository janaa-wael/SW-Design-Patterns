# Prototype Pattern

## * Definition

The Prototype Pattern is a creational design pattern that enables creating new objects by copying or cloning existing objects (prototypes) instead of creating them from scratch. This is particularly useful when object creation is expensive or complex.

## * Intent

- Specifying the kind of objects to create using a prototypical instance
- Prototype allows us to hide the complexity of making new instances from the client.
- The concept is to copy an existing object rather than creating a new instance from scratch, something that may include costly operations.
- The existing object acts as a prototype and contains the state of the object.
- The newly copied object may change same properties only if required.
- This approach saves costly resources and time, especially when the object creation is a heavy
  process.

## * Structure

![Prototype Pattern Structure](https://refactoring.guru/images/patterns/diagrams/prototype/structure.png)

## * Pros

-  You can clone objects without coupling to their concrete classes.
-  You can get rid of repeated initialization code in favor of cloning pre-built prototypes.
-  You can produce complex objects more conveniently.
-  You get an alternative to inheritance when dealing with configuration presets for complex objects.

## * Cons

-  Cloning complex objects that have circular references might be very tricky.