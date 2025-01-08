# State Pattern

## * Definition

- In software design, managing the behavior of an object according to its internal state is a common issue. The state pattern addresses this issue by allowing an object to alter its behavior every time its internal state changes.
- This pattern encapsulates each state in a separate class, which makes it easier to add new states and modify existing states without altering the object's code directly. This pattern is useful when an object transitions between different states, with each transition triggering specific actions.

## * Intent

- Allow an object to alter its behavior when its internal state changes. The object will appear to
  change its class.
- An object-oriented state machine

## * Pros

- *Single Responsibility Principle*. Organize the code related to particular states into separate classes.
-  *Open/Closed Principle*. Introduce new states without changing existing state classes or the context.
-  Simplify the code of the context by eliminating bulky state machine conditionals.

## * Cons

-  Applying the pattern can be overkill if a state machine has only a few states or rarely changes.

## * Structure

![State Patter](https://www.programmergirl.com/wp-content/uploads/2019/08/StateDesignPattern.png)