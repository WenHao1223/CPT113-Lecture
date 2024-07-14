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
| Aggregation                         | A class is a member of a class. |

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

# WEEK 4 - 5 - `friend` Function, `friend` Class, Copy Constructor, `this` Pointer, Operator Overloading
| Terms | Definition |
|-------|------------|
| Instance variable                   | A member variable in a class. |
| `static` variable                   | One variable shared among all objects of a class. |
| `static` member function            | Used to access `static` member variable. |
| Friend                              | A function or class that is not a member of a class, but has access to private members of the class. |
| Copy constructor                    | Special constructor used when a newly created object is initialized to the data of another object of same class. |
| `this`                              | Predefined pointer available to a class's member functions that always points to the instance (object) of the class whose function is being called. |
| lvalues                             | Values that persist beyond the statement that created them, and have names that make them accessible to other statements in the program. |
| rvalues                             | Values that are temporary, and cannot be accessed beyond the statement that created them. |
| Rvalue reference                    | A reference variable that can refer only to temporary objects that would otherwise have no name. |

## `friend` function vs normal function
| `friend` function | normal function |
|-------|------------|
| Not in the scope of the class. | In the scope of the class. |
| Cannot be called using object of the class. | Need objects to call function: `obj.func()`. |
| Need object name and . to access private variables. | Directly access private variables. |
| Can be declared in public or private. | Only declared in public. |

# WEEK 6 - Pointers & Dynamic Variables
| Terms | Definition |
|-------|------------|
| Pointer variable                    | Special variable that holds a memory address. |
| Reference variable                  | An alias / alternative name to an existing variable. |

# WEEK 7 - Templates & Linked Lists
| Terms | Definition |
|-------|------------|
| Function template                   | A "generic" function that can work with any data type. |
| Linked list                         | A set of data structures (nodes) that contain references to other data structures. |

# WEEK 10 - Stack & Queue
| Terms | Definition |
|-------|------------|
| Stack                               | A data structure that stores and retrives items in a Last-In-First-Out (LIFO) manner. |
| Queue                               | A data structure that stores and retrives items in a First-In-First-Out (FIFO) manner. |

# WEEK 11 - Recursion
| Terms | Definition |
|-------|------------|
| Inflix notation                     | The usual notations to write arithmetic expressions. |
| Prefix / Polish notation            | The notations in which operators are written before operands where parentheses can be eliminated. |
| Postfix / Reversed Polish notation  | The notations in which operators are written after the operands. |

## Recursive algorithm vs iterative algorithm
| Recursive algorithm | Iterative algorithm |
|-------|------------|
| Problem is solved recursively by **breaking down** into successive smaller problems taht are identical to the overall problem. | Problem is solved iteratively with a **loop**.
| Less efficient. <br> Function calls impose overhead to the system. <br> Allocating memory for parameters and local variables. <br> Storing the address of the program location where control returns after the function terminates. | More efficient. |
| Programmer can design recursive algorithm faster. Some repetitive problems are easier to solved. | Slower to design. |

# WEEK 14 - Binary Trees
| Terms | Definition |
|-------|------------|
| Binary tree                         | A nonlinear linked list in which each node may point to 0, 1, or two other nodes, with each node contains one or more data fields and two pointers. |
| Tree pointer                        | A head pointer for a linked list, pointing to the first node in the binary tree. |
| Root node                           | The node at the top of the tree. |
| Leaf node                           | Nodes that have no children. |
| Child node / children               | Nodes below a given node. |
| Parent node                         | Node above a given node. |
| Subtree                             | The portion of a tree from a node down to the leaves. |
| Leaf                                | Node that has no left and right children. |
| Length of path                      | Number of branches on path. |
| Level of node                       | Number of branches on the path from the root to the node (start from 0). |
| Height of binary tree               | Number of nodes on the longest path from the root to a leaf. |
