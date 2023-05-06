# Interface Segregation Principle (ISP)

The Interface Segregation Principle (ISP) is a design principle from the SOLID principles that suggests that a class should not be forced to implement interfaces that it does not use. In other words, a class should only depend on the interfaces that it actually needs, rather than being forced to depend on large, monolithic interfaces that contain many methods or properties.

The ISP is important because it promotes modularity and separation of concerns, which leads to code that is easier to understand, modify, and maintain. By ensuring that classes only depend on the interfaces that they actually need, you can reduce coupling between different parts of the codebase, which makes the codebase more robust, reliable, and scalable.

To follow the ISP, it's important to carefully consider the requirements of each class or module in the system, and ensure that each class only depends on the interfaces that it actually needs. This may involve breaking up large, monolithic interfaces into smaller, more focused interfaces that are specific to the needs of each class.

In practice, this means that you should design your interfaces to be as small and focused as possible, with a clear separation of concerns. This allows you to minimize the amount of code that needs to be changed when making modifications to the system, and makes it easier to add new functionality or refactor existing code.

### Class diagram for the current example

![Class diagram for ISP](https://github.com/fx-biocoder/solid-in-cpp/blob/main/4%20-%20Interface%20Segregation%20Principle/Class%20diagram.png)
