# Composite Pattern

## * Definition

Composite pattern is one of the most widely used patterns in the industry and addresses a very significant and subtle problem. It is used whenever the user wants to treat the individual object in the same way as the collection of those individual objects for e.g you might want to consider a page from the copy as same as the whole copy which is basically a collection of the pages or if you want to create a hierarchy of something where you might want to consider the whole thing as the object . 

## * Intent

- Compose objects into tree structures to represent whole-part hierarchies.
- Composite lets clients treat individual objects and compositions of objects uniformly.
- Recursive composition

## * Structure

![Composite Pattern Structure](https://media.geeksforgeeks.org/wp-content/uploads/20240812233238/GFG.png)

## * Pros

-  You can work with complex tree structures more conveniently: use polymorphism and recursion to your advantage.
-  *Open/Closed Principle*. You can introduce new element types into the app without breaking the existing code, which now works with the object tree.

## * Cons

-  It might be difficult to provide a common interface for classes whose functionality differs too much. In certain scenarios, you’d need to overgeneralize the component interface, making it harder to comprehend.