# Dependency Inversion Principle (DIP)

The Dependency Inversion Principle (DIP) is a design principle from the SOLID principles that suggests that high-level modules should not depend on low-level modules, but both should depend on abstractions. It also suggests that abstractions should not depend on details, but details should depend on abstractions.

The DIP is important because it promotes modularity, flexibility, and extensibility, which leads to code that is easier to understand, modify, and maintain. By ensuring that high-level modules depend on abstractions rather than low-level modules, you can reduce coupling between different parts of the codebase, which makes the codebase more robust, reliable, and scalable.

To follow the DIP, it's important to carefully consider the dependencies between different modules or classes in the system, and ensure that each module depends on abstractions rather than concrete implementations. This may involve using dependency injection or inversion of control techniques to decouple modules and reduce the overall complexity of the codebase.

In practice, this means that you should design your code to depend on abstractions rather than concrete implementations. This allows you to replace implementations with different ones, without having to modify the code that uses them. It also means that you can write more modular, testable code that is easier to maintain and extend over time.

### Class diagram for this example

![Class diagram for DIP](https://github.com/fx-biocoder/solid-in-cpp/blob/main/5%20-%20Dependency%20Inversion%20Principle/Class%20diagram.png)
