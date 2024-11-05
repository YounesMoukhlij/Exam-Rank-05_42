# Exam Details
3 Exercies in C++

:one: ***Warlock Class*** :: [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/blob/main/cpp_module_00/subject.txt)

<br>

The point of this exercise is to ensure you understand and can implement several important C++ concepts:

1. **Coplien's form (The Rule of Five)**: This requires implementing a class that properly manages resources and controls object lifecycle using constructors, destructors, and ensuring proper behavior when copying or assigning objects. Since the Warlock cannot be copied or assigned, you'll focus on explicitly deleting copy constructors and assignment operators.

2. **Encapsulation**: The exercise enforces encapsulation by making the `name` and `title` attributes private and requiring getters to access them. This promotes data protection and controlled access.

3. **Constant methods**: The getters and `introduce()` method must be callable on a constant object, teaching you how to write methods that do not modify the state of the object (`const`-correctness).

4. **Custom constructors**: The constructor taking a `name` and `title` ensures that an object cannot exist without these properties, highlighting the importance of required parameters for meaningful object initialization.

5. **Class behavior restrictions**: By preventing copy construction and assignment, you're learning how to control object copying, which can be critical when managing resources or ensuring unique identities for objects.

6. **Polished outputs and resource management**: The specific outputs required in the constructor, `introduce()` method, and destructor ensure that you understand object creation and destruction, along with formatted output in C++.

By the end, you'll have a better grasp of managing object lifecycles, enforcing const-correctness, handling encapsulation, and writing robust C++ classes that follow good design principles.

<br>

:two: ***Aspell, Atarget, Dummy and Fwoosh*** - [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/blob/main/cpp_module_01/subject.txt)

<br>

The point of this exercise is to deepen your understanding of **polymorphism**, **dynamic memory management**, and the use of **abstract classes** in C++. Here's what it aims to teach:

1. **Abstract Classes & Polymorphism**:
   - Both `ASpell` and `ATarget` are abstract classes, meaning they contain at least one pure virtual function (`clone()` in this case), and cannot be instantiated directly. The use of abstract classes teaches how to define a common interface for different types of objects.
   - You are required to create concrete subclasses (`Fwoosh` and `Dummy`), which implement the abstract `clone()` method. This demonstrates how polymorphism allows you to work with objects of different types through pointers to base class objects (`ASpell*`, `ATarget*`).

2. **Clone Design Pattern**:
   - The `clone()` method enables deep copying of objects and is a key concept of the Prototype design pattern. This is useful in scenarios where objects need to be duplicated without knowing their exact type at compile time. By implementing `clone()`, you avoid slicing problems and can make safe copies of derived class objects via base class pointers.

3. **Dynamic Memory Management**:
   - The Warlock will store spells learned dynamically. You’ll need to manage memory for storing spells correctly (likely using `new` and `delete` or using smart pointers). This tests your ability to manage dynamic memory safely and avoid memory leaks.

4. **Encapsulation and Data Management**:
   - You are tasked with storing spells that the Warlock learns, forgetting them, and launching them. You need to carefully choose the right data structure to store spells in a way that ensures efficient learning, forgetting, and lookup by spell name.
   - This teaches you to think about how to efficiently organize and access data. The container you choose will affect performance and behavior.

5. **Function Overriding & Composition**:
   - The `launchSpell` function in `Warlock` demonstrates the concept of function overriding and composition. `Warlock` calls the target's `getHitBySpell` method, showing how different objects interact with each other, leveraging polymorphism to call the correct method at runtime.

6. **Avoiding the Switch Statement**:
   - The prohibition on `switch` forces you to use a more elegant solution for handling different types of spells (such as polymorphism). Rather than using a switch to handle different spell types, polymorphism allows the behavior to be defined within the spell itself, thus following the open/closed principle (OCP) in object-oriented design.

7. **Object-Oriented Design**:
   - The exercise encourages you to design a system where objects are modular, reusable, and extensible. You can easily add more spells or targets without modifying the existing code, which is a key goal of object-oriented design.

By completing this exercise, you will improve your skills in designing systems that utilize inheritance, polymorphism, abstract base classes, and dynamic memory, all while managing object lifecycle and data efficiently. It also enforces the importance of flexible and extensible code.

<br>

:three: ***BrickWall, Fireball, Polymorph, SpellBook and TargetGenerator*** - [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/main/cpp_module_02/subject.txt)

<br>

This exercise focuses on building a spell-casting system using C++ classes, emphasizing polymorphism, encapsulation, and resource management. You’ll create a `Warlock` who uses spells (`Fireball`, `Polymorph`, and `Fwoosh`) and casts them on targets like `BrickWall`. You'll also implement a `SpellBook` to manage learned spells and a `TargetGenerator` to manage target types, both with functions for adding, removing, and creating spells and targets. The exercise forbids using `switch` statements, encouraging a design that leverages object-oriented principles for flexibility and extendibility.

<br>

# Exam Practice Tool

Practice the exam just like you would in the real exam - https://github.com/JCluzet/42_EXAM