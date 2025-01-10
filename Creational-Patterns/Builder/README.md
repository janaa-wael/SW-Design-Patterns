# Builder Pattern

## * Definition

Builder is a creational design pattern that lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

## * Intent

1. **Construct complex objects incrementally**: Break down the construction process into smaller, manageable steps.
2. **Provide flexibility in object creation**: Use the same building process to create different representations or variations of the object.
3. **Encapsulate construction logic**: Isolate the code that builds the object, improving maintainability and readability.

## * Structure

![Builder Pattern Structure](https://upload.wikimedia.org/wikipedia/commons/f/f3/Builder_UML_class_diagram.svg)

## *Pros

-  You can construct objects step-by-step, defer construction steps or run steps recursively.
-  You can reuse the same construction code when building various representations of products.
-  *Single Responsibility Principle*. You can isolate complex construction code from the business logic of the product.

## * Cons

-  The overall complexity of the code increases since the pattern requires creating multiple new classes.