# Liskov Substitution Principle (LSP)

The Liskov Substitution Principle (LSP) states that subtypes should be substitutable for their base types. Any object or instance of a subtype should be able to be used in place of an instance of its base type without affecting the correctness of the program.

This principle ensures that the behavior of the program remains consistent when working with different types of objects. Therefore, it is easier to add new types to your codebase without having to modify existing code.

You must ensure that all subclasses or subtypes of a class or interface adhere to the same behavior as the base class or interface. This means that the subclass should not introduce new behaviors that are not present in the base class, and it should not modify the behavior of any methods or properties that are inherited from the base class.

In practice, this means that you should carefully consider the contract defined by the base class or interface, and ensure that any subclasses or subtypes adhere to that contract. This method will reduce the amount of code duplication and maintenance required over time.


### Class diagram for the current example

![Class diagram for LSP](https://github.com/fx-biocoder/solid-in-cpp/blob/main/3%20-%20Liskov%20Substition%20Principle/Class%20diagram.png)
