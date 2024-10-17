# Exam Details
3 Exercies in C+

:one: Warlock - [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/blob/main/cpp_module_00/subject.txt)

The point of this exercise is to ensure you understand and can implement several important C++ concepts:

1. **Coplien's form (The Rule of Five)**: This requires implementing a class that properly manages resources and controls object lifecycle using constructors, destructors, and ensuring proper behavior when copying or assigning objects. Since the Warlock cannot be copied or assigned, you'll focus on explicitly deleting copy constructors and assignment operators.

2. **Encapsulation**: The exercise enforces encapsulation by making the `name` and `title` attributes private and requiring getters to access them. This promotes data protection and controlled access.

3. **Constant methods**: The getters and `introduce()` method must be callable on a constant object, teaching you how to write methods that do not modify the state of the object (`const`-correctness).

4. **Custom constructors**: The constructor taking a `name` and `title` ensures that an object cannot exist without these properties, highlighting the importance of required parameters for meaningful object initialization.

5. **Class behavior restrictions**: By preventing copy construction and assignment, you're learning how to control object copying, which can be critical when managing resources or ensuring unique identities for objects.

6. **Polished outputs and resource management**: The specific outputs required in the constructor, `introduce()` method, and destructor ensure that you understand object creation and destruction, along with formatted output in C++.

By the end, you'll have a better grasp of managing object lifecycles, enforcing const-correctness, handling encapsulation, and writing robust C++ classes that follow good design principles.

:two: Question 1 and Aspell, Atarget, Dummy and Fwoosh - [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/blob/main/cpp_module_01/subject.txt)

:three: Question 1, Question 2 and BrickWall, Fireball, Polymorph, SpellBook and TargetGenerator - [Subject Text](https://github.com/younesmoukhlij/Exam-Rank-05_42/blob/main/cpp_module_02/subject.txt)

<br>

### Total Excepted Files

> 16 .cpp (c++ files) and 16 .hpp (header files) = 32 files total.

<br>

# Exam Practice Tool

Practice the exam just like you would in the real exam - https://github.com/JCluzet/42_EXAM