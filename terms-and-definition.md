# WEEK 1 - Structured Data
| Terms | Definition |
|-------|------------|
| Abstract Data Types (ADT)         | A data type that specifies values that can be stored and operations that can be done on the values. |
| Abstraction                       | A definition that captures general characteristics without details. |

# WEEK 2 - Introduction to Classes
| Terms | Definition |
|-------|------------|
| Procedural programming            | Focuses on the process / actions that occur in a program. |
| Object-oriented programming       | Based on the data and the functions that operate. |
| Object                            | Instance of ADTs that represent the data and its functions. |
| Attribute                         | Member of a class. |
| Method / behaviour                | Member function of a a class. |
| Data hiding                       | Restricting access to certain members of an object. |
| Public interface                  | Mmebers of an object that are available outside of the class. |
| Mutator                           | A member function that stores a value in a private member variable, or changes its value in some way. |
| Accessor                          | Function that retrieves a value from a private member variable. |
| Class specification file (.h)     | Header fle that places class declaration. |
| Constructor                       | Member function that is automatically called when an object is created. |
| In-place initialization           | Initialize a member variable in declaration statement (>= C++11). |
| Default Constructor               | Constructor that takes no arguments. |
| Destructor                        | Member function that is automatically called when an object is destroyed. |
| Constructor delegation            | Calling of an constructor to another constructor in the same class. |
| Unified Modelling Language (UML)  | Provides a set of standard diagrams for graphically depicting object-oriented systems. |

# WEEK 3 - Inheritance & Composition / Aggregation
| Terms | Definition |
|-------|------------|
| Inheritance                         | Way to craete a new class from an existing class by establishing an "is a" relationship between classes. |
| Class access specification          | Determine how `private`, `protected`, and `public` members of base class are inherited by the derived class. |
| Redefining function                 | Function in a derived function that has the same name and parameter list as a function in the base class. |
| Encapsulation                       | Combines data and operations on data in a single unit. |
| Inheritance                         | Creates new objects (classes) from existing objects (classes). |
| Polymorphism                        | The ability to use the same expression to denote different operations. |
| Aggregation                         | A class is a member of a class.

## Polymorphism vs Overloading
| Polymorphism | Overloading |
|-------|------------|
| Ability of different **objects** to be accessed by a **common interface**. | Ability of a compiler to determine which version of a **method** is to be called based on the **parameters** that are passed.
| Relates to **objects**. | Relates to **methods**. |
| How we subclass different types of objects. | How we accommodate varations in instructions. |
| Inclusion / subtype polymorphism | Academically categorised as polymorphism. <br> Ad-hoc polymorphism |

## Composition vs Aggregation
| Composition | Aggregation |
|-------|------------|
| A way to wrap simple objects / data types into a single unit. | Does not imply ownership. |
| Parent entity owns **child** entity. | Parent `has-a` relationship with child entity. |
| UML denoted by a filled diamond. | UML denoted by an empty diamond. |
| Child doesn't have their own life cycle. | Child can have their own life time. |
| Strong association. | Weak association. |