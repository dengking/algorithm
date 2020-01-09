[TOC]

# [Recursion](https://en.wikipedia.org/wiki/Recursion)

**Recursion** (adjective: *recursive*) occurs when a thing is defined in terms of **itself** or of its type. Recursion is used in a variety of disciplines ranging from [linguistics](https://en.wikipedia.org/wiki/Linguistics) to [logic](https://en.wikipedia.org/wiki/Logic). The most common application of recursion is in [mathematics](https://en.wikipedia.org/wiki/Mathematics) and [computer science](https://en.wikipedia.org/wiki/Computer_science), where a [function](https://en.wikipedia.org/wiki/Function_(mathematics)) being defined is applied within its own definition. While this apparently defines an infinite number of instances (function values), it is often done in such a way that no **loop** or **infinite chain** of references can occur.

***SUMMARY*** : 如果出现loop或者infinite chain，则程序就会出现死循环；

## Formal definitions

In mathematics and computer science, a class of objects or methods exhibits **recursive behavior** when it can be defined by two properties:

1. A simple **base case** (or cases)—a **terminating scenario** that does not use **recursion** to produce an answer
2. A set of rules that **reduces**（这个词用得非常好） all other cases toward the **base case**



For example, the following is a [**recursive definition**](https://en.wikipedia.org/wiki/Recursive_definition) of a person's ancestors:

- One's parents are one's ancestors (*base case*).
- The ancestors of one's ancestors are also one's ancestors (*recursion step*).



The [Fibonacci sequence](https://en.wikipedia.org/wiki/Fibonacci_sequence) is a classic example of recursion:

$ {\text{Fib}}(0)=0{\text{ as base case 1,}} $

$ {\text{Fib}}(1)=1{\text{ as base case 2,}} $

$ {\text{For all integers }}n>1,~{\text{ Fib}}(n):={\text{Fib}}(n-1)+{\text{Fib}}(n-2). $



Many mathematical axioms（公理） are based upon **recursive rules**. For example, the formal definition of the [natural numbers](https://en.wikipedia.org/wiki/Natural_number) by the [Peano axioms](https://en.wikipedia.org/wiki/Peano_axioms) can be described as: *0 is a natural number, and each natural number has a successor, which is also a natural number.* By this base case and recursive rule, one can generate the set of all natural numbers.

Recursively defined mathematical objects include [functions](https://en.wikipedia.org/wiki/Function_(mathematics)), [sets](https://en.wikipedia.org/wiki/Set_(mathematics)), and especially [fractals](https://en.wikipedia.org/wiki/Fractal).

There are various more tongue-in-cheek "definitions" of recursion; see [recursive humor](https://en.wikipedia.org/wiki/Recursion#Recursive_humor).



## In mathematics



### Recursively defined sets

***SUMMARY*** : 递归的定义集合

*Main article:* [Recursive definition](https://en.wikipedia.org/wiki/Recursive_definition)



#### Example: the natural numbers

*See also:* [Closure (mathematics)](https://en.wikipedia.org/wiki/Closure_(mathematics))

The canonical example of a recursively defined set is given by the [natural numbers](https://en.wikipedia.org/wiki/Natural_numbers):

0 is in $ \mathbb {N} $

if *n* is in $ \mathbb {N} $, then *n* + 1 is in $ \mathbb {N} $

The set of natural numbers is the smallest set satisfying the previous two properties.

In mathematical logic, the [Peano axioms](https://en.wikipedia.org/wiki/Peano_axioms) (or Peano postulates or Dedekind–Peano axioms), are axioms for the natural numbers presented in the 19th century by the German mathematician [Richard Dedekind](https://en.wikipedia.org/wiki/Richard_Dedekind) and by the Italian mathematician [Giuseppe Peano](https://en.wikipedia.org/wiki/Giuseppe_Peano). The Peano Axioms define the natural numbers referring to a recursive successor function and addition and multiplication as recursive functions.



### Finite subdivision rules

Main article: [Finite subdivision rule](https://en.wikipedia.org/wiki/Finite_subdivision_rule)

Finite subdivision rules are a geometric form of recursion, which can be used to create fractal-like images. A subdivision rule starts with a collection of polygons labelled by finitely many labels, and then each polygon is subdivided into smaller labelled polygons in a way that depends only on the labels of the original polygon. This process can be iterated. The standard `middle thirds' technique for creating the [Cantor set](https://en.wikipedia.org/wiki/Cantor_set) is a subdivision rule, as is [barycentric subdivision](https://en.wikipedia.org/wiki/Barycentric_subdivision).



### Functional recursion

***SUMMARY*** : 递归函数

A [function](https://en.wikipedia.org/wiki/Function_(mathematics)) may be recursively defined in terms of itself. A familiar example is the [Fibonacci number](https://en.wikipedia.org/wiki/Fibonacci_number) sequence: *F*(*n*) = *F*(*n* − 1) + *F*(*n* − 2). For such a definition to be useful, it must lead to non-recursively defined values, in this case *F*(0) = 0 and *F*(1) = 1.

A famous recursive function is the [Ackermann function](https://en.wikipedia.org/wiki/Ackermann_function), which, unlike the Fibonacci sequence, cannot be expressed without recursion.



### Proofs involving recursive definitions

Applying the standard technique of [proof by cases](https://en.wikipedia.org/wiki/Proof_by_cases) to recursively defined sets or functions, as in the preceding sections, yields [structural induction](https://en.wikipedia.org/wiki/Structural_induction), a powerful generalization of [mathematical induction](https://en.wikipedia.org/wiki/Mathematical_induction) widely used to derive proofs in [mathematical logic](https://en.wikipedia.org/wiki/Mathematical_logic) and computer science.



### Recursive optimization

[Dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming) is an approach to [optimization](https://en.wikipedia.org/wiki/Optimization_(mathematics)) that restates a multiperiod or multistep optimization problem in recursive form. The key result in dynamic programming is the [Bellman equation](https://en.wikipedia.org/wiki/Bellman_equation), which writes the value of the optimization problem at an earlier time (or earlier step) in terms of its value at a later time (or later step).



### The recursion theorem

***SUMMARY*** : 递归定理

In [set theory](https://en.wikipedia.org/wiki/Set_theory), this is a theorem guaranteeing that recursively defined functions exist. Given a set *X*, an element *a* of *X* and a function $ f:X\rightarrow X $, the theorem states that there is a unique function $ F:\mathbb {N} \rightarrow X $ (where $ \mathbb {N} $ denotes the set of natural numbers including zero) such that

$ F(0)=a $

$ F(n+1)=f(F(n)) $

for any natural number *n*.





## In computer science

Main article: [Recursion (computer science)](https://en.wikipedia.org/wiki/Recursion_(computer_science))

A common method of simplification is to divide a problem into subproblems of the same type. As a [computer programming](https://en.wikipedia.org/wiki/Computer_programming) technique, this is called [divide and conquer](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithm) and is key to the design of many important algorithms. Divide and conquer serves as a top-down（自顶向下） approach to problem solving, where problems are solved by solving smaller and smaller instances. A contrary approach is [dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming). This approach serves as a bottom-up（自底向上） approach, where problems are solved by solving larger and larger instances, until the desired size is reached.

A classic example of recursion is the definition of the [factorial](https://en.wikipedia.org/wiki/Factorial) function, given here in [C](https://en.wikipedia.org/wiki/C_(programming_language)) code:

```c
unsigned int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
```

The function calls itself recursively on a smaller version of the input `(n - 1)` and multiplies the result of the recursive call by `n`, until reaching the [base case](https://en.wikipedia.org/wiki/Base_case_(recursion)), analogously to the mathematical definition of factorial.

Recursion in computer programming is exemplified when a function is defined in terms of simpler, often smaller versions of itself. The solution to the problem is then devised by combining the solutions obtained from the simpler versions of the problem. One example application of recursion is in [parsers](https://en.wikipedia.org/wiki/Parser) for programming languages. The great advantage of recursion is that an infinite set of possible sentences, designs or other data can be defined, parsed or produced by a finite computer program.

[Recurrence relations](https://en.wikipedia.org/wiki/Recurrence_relation) （递归关系）are equations（方程式） to define one or more sequences recursively. Some specific kinds of **recurrence relation** can be "solved" to obtain a non-recursive definition.

Use of recursion in an algorithm has both advantages and disadvantages. The main advantage is usually simplicity. The main disadvantage is that the memory usage of **recursive algorithms** may grow very quickly, rendering them impractical.


