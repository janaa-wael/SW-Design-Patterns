# Singleton Pattern

## * Definition

A singleton pattern is a design pattern that ensures that only one instance of a class can exist in the entire program. This means that if you try to create another instance of the class, it will return the same instance that was created earlier.

## * Intent

The **intent of the Singleton pattern** is to ensure that a class has only one instance throughout the lifetime of an application and to provide a global access point to that instance.

## * Structure

![Singleton Pattern Structure](https://lh7-us.googleusercontent.com/j1UFUqD4vS_Ymfm6eSFUJ_fiJ0S-mUGzOtQ-C40Qdq1_xVTsUqLVnX44LJcEtJL98a8bD7wyvYiAYgDgVN93hYIiUjOtHd9hGVF4cMytlJiDfQJyx09I42ICsnbQohY9Pkzgk_gOLqDKoNM_bbV59sA)

## * Pros

-  You can be sure that a class has only a single instance.
-  You gain a global access point to that instance.
-  The singleton object is initialized only when it’s requested for the first time.

## * Cons

-  Violates the *Single Responsibility Principle*. The pattern solves two problems at the time.
-  The Singleton pattern can mask bad design, for instance, when the components of the program know too much about each other.
-  The pattern requires special treatment in a multithreaded environment so that multiple threads won’t create a singleton object several times.
-  It may be difficult to unit test the client code of the Singleton because many test frameworks rely on inheritance when producing mock objects. Since the constructor of the singleton class is private and overriding static methods is impossible in most languages, you will need to think of a creative way to mock the singleton. Or just don’t write the tests. Or don’t use the Singleton pattern.