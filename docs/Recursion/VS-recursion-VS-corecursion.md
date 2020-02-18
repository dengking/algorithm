recursion 和 corecursion 的计算方向是相反：对于一个 [recurrence relations](https://en.wikipedia.org/wiki/Recurrence_relation) ，如*n! := n × (n - 1)!*.，recursion是从左至右，但是corecursion是从右至左，但是能够殊途同归

- recursion works **analytically** VS corecursion works **synthetically**
- recursion top-down VS corecursion bottom-up
- recursion reduce VS corecursion produce



在[Tree traversal](https://en.wikipedia.org/wiki/Tree_traversal)中有如下描述：

**Depth-first search** is easily implemented via a **stack**, including **recursively** (via the **call stack**), while **breadth-first search** is easily implemented via a **queue**, including **corecursively**.

