# Dependency Inversion Principle (DIP)

The Dependency Inversion Principle (DIP) establishes that high-level modules must not depend on low-level modules, but both should depend on abstractions. It also suggests that abstractions must not depend on details, but details must depend on abstractions.

This principle promotes modularity, flexibility, and extensibility, which leads to code that is easier to understand, modify, and maintain. By ensuring that high-level modules depend on abstractions rather than low-level modules, you can reduce coupling between different parts of the codebase. You will need to check the dependencies between different modules or classes in the system, and ensure that each module depends on abstractions rather than concrete implementations. This may involve using dependency injection or inversion of control techniques to decouple modules and reduce the overall complexity of the codebase.

Decoupling modules allows you to replace implementations with different ones, without having to modify the code that uses them.

### Class diagram for this example

![Class diagram for DIP](https://github.com/fx-biocoder/solid-in-cpp/blob/main/5%20-%20Dependency%20Inversion%20Principle/Class%20diagram.png)
