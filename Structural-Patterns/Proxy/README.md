# Proxy Pattern

## * Definition

The Proxy Pattern is a structural design pattern that provides a surrogate or placeholder for another object, allowing you to control access to it. This pattern can be particularly useful in situations where you need to add an extra layer of control, lazy loading, or remote access to objects.

## * Intent

1. **Access Control:**
   The proxy can enforce security or access control, allowing only authorized users to interact with the real object.
2. **Lazy Initialization:**
   The proxy can delay the creation or initialization of the real object until it is actually needed (also known as **virtual proxy**).
3. **Performance Optimization:**
   The proxy can optimize performance by caching results or managing resource-intensive operations, such as network or file system access.
4. **Remote Proxy:**
   In distributed systems, a proxy can act as a local object representing a real object that exists in a different address space (e.g., a remote server).
5. **Smart References:**
   The proxy can manage the real object’s lifecycle, such as counting references or handling memory management.

## * Structure

![Proxy Pattern Structure](https://upload.wikimedia.org/wikipedia/commons/thumb/7/75/Proxy_pattern_diagram.svg/439px-Proxy_pattern_diagram.svg.png)

## * Uses of  the Proxy Pattern

- *Virtual proxy :* impose a lazy creation semantics, to avoid expensive object creations when strictly unnecessary.

- *Monitor proxy :* impose security constraints on the original object, say by making some
  public fields inaccessible.

- *Remote proxy :* hide the fact that an object resides on a remote location.

  e.g. theRemoteLogClient is essentially a remote proxy for a LocalLog.

## * Pros

-  You can control the service object without clients knowing about it.
-  You can manage the lifecycle of the service object when clients don’t care about it.
-  The proxy works even if the service object isn’t ready or is not available.
-  *Open/Closed Principle*. You can introduce new proxies without changing the service or clients.

## * Cons

-  The code may become more complicated since you need to introduce a lot of new classes.
-  The response from the service might get delayed.