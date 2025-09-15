# InheritancePolymorphism-Repo

## AIM-TO STUDY INHERITANCE

##THEORY

# Inheritance in C++ (Theory)

---

## **What is Inheritance?**
- Inheritance is a feature of **Object-Oriented Programming (OOP)** that allows one class (derived class) to use the properties and behaviors of another class (base class).  
- It provides **code reusability**, **hierarchical relationships**, and supports **polymorphism**.

---

## **Types of Inheritance**

### 1. **Single Inheritance**
- A derived class inherits from only one base class.  
- This is the simplest form of inheritance.  
- Example: A `Dog` class inheriting from `Animal`.  
- **Use Case:** When one class clearly extends the functionality of another.

---

### 2. **Multilevel Inheritance**
- A class is derived from another derived class, forming a chain.  
- Example: `GrandFather → Father → Kid`.  
- **Use Case:** When features are passed down through multiple generations of classes.

---

### 3. **Multiple Inheritance**
- A derived class inherits from **more than one base class**.  
- Example: A `Dog` class inheriting from both `Animal` and `Mammal`.  
- **Use Case:** When a class needs features from multiple unrelated classes.  
- **Note:** Can lead to ambiguity (e.g., the **diamond problem**).

---

### 4. **Hierarchical Inheritance**
- Multiple classes inherit from a single base class.  
- Example: `Animal → Dog`, `Animal → Cat`, `Animal → Horse`.  
- **Use Case:** When many classes share common properties of one base class.

---

### 5. **Hybrid Inheritance**
- A combination of two or more types of inheritance.  
- Example: A class may use both multilevel and multiple inheritance.  
- **Use Case:** Complex real-world systems where different inheritance types are mixed.  
- **Note:** Can introduce ambiguity and is often avoided unless necessary.

---

## **Access Control in Inheritance**
- **Private members** of the base class are not accessible in derived classes.  
- **Protected members** can be accessed in derived classes but not outside them.  
- **Public members** are accessible everywhere.  

Modes of inheritance affect accessibility:  

| Inheritance Mode | Public Members → | Protected Members → | Private Members → |
|------------------|------------------|----------------------|-------------------|
| **Public**       | Public           | Protected            | Not inherited     |
| **Protected**    | Protected        | Protected            | Not inherited     |
| **Private**      | Private          | Private              | Not inherited     |

---

## **Advantages of Inheritance**
1. Promotes **code reusability**.  
2. Supports **method overriding** and **polymorphism**.  
3. Establishes a **clear relationship** between classes.  
4. Makes programs **easier to maintain and extend**.

---

## **Limitations of Inheritance**
- Overuse can make programs complex.  
- Tight coupling: changes in base class may affect derived classes.  
- Multiple and hybrid inheritance can lead to **ambiguity problems**.

---

## **Summary**
- **Single:** One base → one derived.  
- **Multilevel:** A chain of inheritance.  
- **Multiple:** One derived → multiple bases.  
- **Hierarchical:** One base → many derived.  
- **Hybrid:** Combination of the above.  

Inheritance is a powerful OOP concept that enables **code reuse, extensibility, and polymorphism**, but must be used carefully to avoid complexity.

# Algorithms for Inheritance and OOP Codes in C++

---

## **Code 1: Multilevel Inheritance (GrandFather → Father → Kid)**

**Algorithm:**
1. Start the program.  
2. Define base class `GrandFather` with attributes `Name`, `age`, and `caste`.  
3. Define constructor to initialize `Name` and `age`.  
4. Define method `bday()` to print grandfather’s birthday.  
5. Define derived class `Father` inheriting from `GrandFather`.  
   - Add attribute `birthcity`.  
   - Override method `bday()` to print father’s birthday.  
6. Define derived class `Kid` inheriting from `Father`.  
   - Override method `bday()` to print kid’s birthday.  
7. In `main()`:  
   - Create object `D1` of class `Kid`.  
   - Print `birthcity` and `caste`.  
   - Call `bday()` (Kid’s version executes).  
8. End program.  

---

## **Code 2: Multiple Inheritance (Animal + Mammal → Dog)**

**Algorithm:**
1. Start the program.  
2. Define base class `Animal` with attributes `Name`, `legs`, and method `sound()`.  
3. Define base class `Mammal` with attribute `middlebones`.  
4. Define derived class `Dog` inheriting from both `Animal` and `Mammal`.  
   - Override method `sound()` to print `"Woof"`.  
5. In `main()`:  
   - Create object `D1` of class `Dog`.  
   - Call `sound()` (Dog’s version).  
   - Print `middlebones`.  
6. End program.  

---

## **Code 3: Access Specifiers (Private)**

**Algorithm:**
1. Start the program.  
2. Define base class `Animal` with:  
   - `lifespan` (private).  
   - `Age` (protected).  
   - `Name`, `legs` (public).  
   - Constructor to initialize attributes.  
   - Method `sound()` to print `"Animal sound"`.  
3. Define derived class `Dog` inheriting from `Animal`.  
   - Override method `sound()` to print `"Woof"`.  
   - Add method `age()` to access protected `Age`.  
4. In `main()`:  
   - Create object `D1` of class `Dog`.  
   - Call `sound()`.  
   - Call `age()` (prints protected `Age`).  
   - Try accessing `lifespan` directly → **error** (since it is private).  
5. End program.  

---

## **Code 4: Access Specifiers (Protected)**

**Algorithm:**
1. Start the program.  
2. Define base class `Animal` with same attributes as Code 3 (`lifespan` private, `Age` protected, `Name` and `legs` public).  
3. Define derived class `Dog`:  
   - Override `sound()` → `"Woof"`.  
   - Add method `age()` → prints `Age`.  
4. In `main()`:  
   - Create object `D1` of class `Dog`.  
   - Call `sound()` (prints `"Woof"`).  
   - Call `age()` (prints protected value `10`).  
   - Do **not** try accessing `lifespan`.  
5. End program.  

---

## **Code 5: Simple Inheritance (Animal → Dog)**

**Algorithm:**
1. Start the program.  
2. Define base class `Animal` with attributes `Name`, `legs`, and method `sound()`.  
3. Define derived class `Dog` inheriting from `Animal`.  
   - Override method `sound()` to print `"Woof"`.  
4. In `main()`:  
   - Create object `D1` of class `Dog`.  
   - Call `sound()` (Dog’s version executes).  
5. End program.  

---
---

## **Conclusion**

Inheritance in C++ is a fundamental concept of Object-Oriented Programming that enables one class to acquire the properties and behaviors of another.  
It provides **code reusability**, reduces redundancy, and makes programs easier to maintain.  

- **Single Inheritance** allows simple extension of a base class.  
- **Multilevel Inheritance** shows properties passed across generations.  
- **Multiple Inheritance** combines features from multiple sources.  
- **Hierarchical Inheritance** allows many classes to share a common base.  
- **Hybrid Inheritance** demonstrates complex real-world scenarios.  

While inheritance is powerful, it should be applied wisely. Overuse or improper design can lead to ambiguity, complexity, and tight coupling between classes.  
Thus, inheritance must be used where it logically represents a **“is-a” relationship** between classes, ensuring clarity, reusability, and extensibility of code.


