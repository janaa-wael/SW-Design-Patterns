# <span style="color: purple;"> **Chain Of Responsibility Design Pattern**   </span>

## <span style="color: gold;"> * Definition </span>

The <span style="color: purple;"> **Chain of Responsibility**  </span> is a behavioral design pattern that allows you to pass requests along a chain of handlers. Each handler in the chain either processes the request or passes it to the next handler in the chain. This pattern decouples the sender of the request from its receivers and promotes flexibility in assigning responsibilities.

## <span style="color: gold;"> * Intent </span>

-> Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. 

-> Chain the receiving objects and pass the request along the chain until an object handles it.
-> Launch-and-leave requests with a single processing pipeline that contains many possible handlers.
-> An object-oriented linked list with recursive traversal.

## <span style="color: gold;"> * How to implement </span>

1. Declare the handler interface and describe the signature of a method for handling requests.

   Decide how the client will pass the request data into the method. The most flexible way is to convert the request into an object and pass it to the handling method as an argument.

2. To eliminate duplicate boilerplate code in concrete handlers, it might be worth creating an abstract base handler class, derived from the handler interface.

   This class should have a field for storing a reference to the next handler in the chain. Consider making the class immutable. However, if you plan to modify chains at runtime, you need to define a setter for altering the value of the reference field.

   You can also implement the convenient default behavior for the handling method, which is to forward the request to the next object unless there’s none left. Concrete handlers will be able to use this behavior by calling the parent method.

3. One by one create concrete handler subclasses and implement their handling methods. Each handler should make two decisions when receiving a request:

   - Whether it’ll process the request.
   - Whether it’ll pass the request along the chain.

4. The client may either assemble chains on its own or receive pre-built chains from other objects. In the latter case, you must implement some factory classes to build chains according to the configuration or environment settings.

5. The client may trigger any handler in the chain, not just the first one. The request will be passed along the chain until some handler refuses to pass it further or until it reaches the end of the chain.

6. Due to the dynamic nature of the chain, the client should be ready to handle the following scenarios:

   - The chain may consist of a single link.
   - Some requests may not reach the end of the chain.
   - Others may reach the end of the chain unhandled.



## <span style="color: gold;"> * Pros </span>

- You can control the order of request handling.
-  *Single Responsibility Principle*: You can decouple classes that invoke operations from classes that perform operations.
-  *Open/Closed Principle*: You can introduce new handlers into the app without breaking the existing client code.



##  * Cons 

-  Some requests may end up unhandled.

<span style="color: gold;"> * Example </span>

The Chain of Responsibility pattern avoids coupling the sender of a request to the receiver by giving more than one object a chance to handle the request. ATM use the Chain of Responsibility in money giving mechanism.

## <span style="color: gold;"> * UML Diagram </span>

![Diagram](https://www.google.com/url?sa=i&url=https%3A%2F%2Fmedium.com%2F%40amirm.lavasani%2Fdesign-patterns-in-python-chain-of-responsibility-cc22bb241b41&psig=AOvVaw2FmCi_7qFmw5DJRXlEs67p&ust=1736423335475000&source=images&cd=vfe&opi=89978449&ved=0CBAQjRxqFwoTCKjS05OH5ooDFQAAAAAdAAAAABAE)

