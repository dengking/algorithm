[TOC]



# [Recurrence relation](https://en.wikipedia.org/wiki/Recurrence_relation)

***SUMMARY*** : 递归关系

In [mathematics](https://en.wikipedia.org/wiki/Mathematics), a **recurrence relation** is an [equation](https://en.wikipedia.org/wiki/Equation) that [recursively](https://en.wikipedia.org/wiki/Recursion) defines a [sequence](https://en.wikipedia.org/wiki/Sequence) or multidimensional array of values, once one or more initial terms are given; each further term of the sequence or array is defined as a [function](https://en.wikipedia.org/wiki/Function_(mathematics)) of the preceding terms.



The term **difference equation** sometimes (and for the purposes of this article) refers to a specific type of **recurrence relation**. However, "difference equation" is frequently used to refer to *any* recurrence relation.



## Definition

A *recurrence relation* is an equation that expresses each element of a [sequence](https://en.wikipedia.org/wiki/Sequence) as a function of the **preceding ones**. More precisely, in the case where only the immediately **preceding element** is involved, a recurrence relation has the form

$ u_{n}=\varphi (n,u_{n-1})\quad {\text{for}}\quad n>0, $

where

$ \varphi :\mathbb {N} \times X\to X $

is a function, where *X* is a set to which the elements of a sequence must belong. For any $ u_{0}\in X $, this defines a unique sequence with $ u_{0} $as its first element, called the *initial value*.[[1\]](https://en.wikipedia.org/wiki/Recurrence_relation#cite_note-1)

It is easy to modify the definition for getting sequences starting from the term of index 1 or higher.

This defines recurrence relation of *first order*. A recurrence relation of *order* *k* has the form

$ u_{n}=\varphi (n,u_{n-1},u_{n-2},\ldots ,u_{n-k})\quad {\text{for}}\quad n\geq k, $

where $ \varphi :\mathbb {N} \times X^{k}\to X $ is a function that involves *k* consecutive elements of the sequence. In this case, *k* initial values are needed for defining a sequence.



## Examples

### Factorial

The [factorial](https://en.wikipedia.org/wiki/Factorial) is defined by the **recurrence relation**

$ n!=n(n-1)!\quad {\text{for}}\quad n>0, $

and the **initial condition**

$ 0!=1. $