# Open/Closed Principle (OCP)

The Open/Closed Principle (OCP) is a design principle from the SOLID principles that suggests that software entities (classes, modules, functions, etc.) should be open for extension but closed for modification. In other words, you should be able to extend the behavior of a system without modifying its existing code.

The OCP is important because it promotes code that is easier to maintain and extend. By designing your code to be open for extension, you can add new functionality to the system without breaking existing code or modifying existing functionality. This makes the codebase more robust, scalable, and easier to work with.

To follow the OCP, it's important to design your system with a clear separation of concerns, using interfaces or abstract classes to define behavior that can be extended by implementing new concrete classes. This allows you to add new functionality by creating new concrete classes that implement the existing interface or abstract class, without modifying the existing code.

The OCP also suggests that you should avoid making changes to existing code whenever possible, and instead focus on adding new functionality through extension. This makes the codebase more stable and predictable, and reduces the risk of introducing bugs or breaking existing functionality.

### Class diagram for the current example

![Class diagram for OCP](https://github.com/fx-biocoder/solid-in-cpp/blob/main/2%20-%20Open-Closed%20Principle/Class%20diagram.png)
