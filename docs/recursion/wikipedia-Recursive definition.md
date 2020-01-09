[TOC]

# [Recursive definition](https://en.wikipedia.org/wiki/Recursive_definition)

In [mathematics](https://en.wikipedia.org/wiki/Mathematics) and [computer science](https://en.wikipedia.org/wiki/Computer_science), a **recursive definition**, or **inductive definition**, is used to define the elements in a [set](https://en.wikipedia.org/wiki/Set_(mathematics)) in terms of other elements in the set (Aczel 1977:740ff).

A [recursive](https://en.wikipedia.org/wiki/Recursive) [definition](https://en.wikipedia.org/wiki/Definition) of a [function](https://en.wikipedia.org/wiki/Function_(mathematics)) defines values of the function for some inputs in terms of the values of the same function for other inputs. For example, the [factorial](https://en.wikipedia.org/wiki/Factorial) function *n*! is defined by the rules

0! = 1.

(*n* + 1)! = (*n* + 1)·*n*!.

This definition is valid for all *n*, because the recursion eventually reaches the **base case** of 0. The definition may also be thought of as giving a procedure for computing the value of the function *n*!, starting from *n* = 0 and proceeding onwards with *n* = 1, *n* = 2, *n* = 3 etc.

[The recursion theorem](https://en.wikipedia.org/wiki/Recursion#The_recursion_theorem) states that such a definition indeed defines a function. The proof uses [mathematical induction](https://en.wikipedia.org/wiki/Mathematical_induction).

An **inductive definition** of a set describes the elements in a set in terms of other elements in the set. For example, one definition of the set **N** of [natural numbers](https://en.wikipedia.org/wiki/Natural_number) is:

1. 1 is in **N**.
2. If an element *n* is in **N** then *n* + 1 is in **N**.
3. **N** is the intersection of all sets satisfying (1) and (2).

There are many sets that satisfy (1) and (2) - for example, the set {1, 1.649, 2, 2.649, 3, 3.649, ...} satisfies the definition. However, condition (3) specifies the set of natural numbers by removing the sets with extraneous members. Note that definition assumes that **N** is contained in a larger set (such as the set of real numbers) in which the operation + is defined.

Properties of recursively defined functions and sets can often be proved by an [induction](https://en.wikipedia.org/wiki/Mathematical_induction)（归纳） principle that follows the recursive definition. For example, the definition of the natural numbers presented here directly implies the **principle of mathematical induction** for natural numbers: if a property holds of the natural number 0, and the property holds of *n*+1 whenever it holds of *n*, then the property holds of all natural numbers (Aczel 1977:742).

