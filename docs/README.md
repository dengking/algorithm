





# TODO

## 20191227

很多算法技巧都是在避免[combinatorial explosion](https://en.wikipedia.org/wiki/Combinatorial_explosion)问题，比如

-  [dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming) 
- LL(1) parser，使用预测的方式来避免

那么如何来理解[combinatorial explosion](https://en.wikipedia.org/wiki/Combinatorial_explosion)呢？当我们使用  [backtracking](https://en.wikipedia.org/wiki/Backtracking) 的时候，就会出现[combinatorial explosion](https://en.wikipedia.org/wiki/Combinatorial_explosion)，从算法分析的角度来看，此时的算法复杂度就也会explosion。







## find top k elements in an array

https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/

https://www.geeksforgeeks.org/find-top-k-or-most-frequent-numbers-in-a-stream/

https://leetcode-cn.com/problems/kth-largest-element-in-an-array/?utm_source=LCUS&utm_medium=ip_redirect_q_uns&utm_campaign=transfer2china

https://leetcode-cn.com/problems/top-k-frequent-elements/?utm_source=LCUS&utm_medium=ip_redirect_q_uns&utm_campaign=transfer2china

https://stackoverflow.com/questions/4956593/optimal-algorithm-for-returning-top-k-values-from-an-array-of-length-n

## How to handle duplicates in Binary Search Tree?

https://www.geeksforgeeks.org/how-to-handle-duplicates-in-binary-search-tree/

https://stackoverflow.com/questions/300935/are-duplicate-keys-allowed-in-the-definition-of-binary-search-trees

## 括号生成问题

https://leetcode-cn.com/problems/generate-parentheses/

[Balanced Parentheses](https://stackoverflow.com/questions/26047985/balanced-parentheses)

### [A](https://stackoverflow.com/a/26048186)

The number expressions containing n pairs of parentheses which are correctly matched can be calculated via Catalan numbers. Quoting the relevant [link](http://en.wikipedia.org/wiki/Catalan_number#Applications_in_combinatorics) from Wikipedia:

> There are many counting problems in combinatorics whose solution is given by the Catalan numbers … Cn is the number of Dyck words of length 2n. A Dyck word is a string consisting of n X's and n Y's such that no initial segment of the string has more Y's than X's … Re-interpreting the symbol X as an open parenthesis and Y as a close parenthesis, Cn counts the number of expressions containing n pairs of parentheses which are correctly matched.

The nth Catalan number is given directly in terms of binomial coefficients by:

![The nth Catalan number, image taken from Wikipedia](https://i.stack.imgur.com/fREsX.png?ynotemdtimestamp=1577667763720)

https://en.wikipedia.org/wiki/Catalan_number#Applications_in_combinatorics

## [Generate balanced parentheses in java](https://stackoverflow.com/questions/24704170/generate-balanced-parentheses-in-java)

## [LeetCode 32. 最长有效括号](https://leetcode-cn.com/problems/longest-valid-parentheses/)

类似问题：

- 最大括号深度
- 最大树深度问题
- 

## 如何使用并发技术来改进常见算法

二分问题， 还有很多其他的问题，其实都非常适合于使用并发技术来进行改进，正如在APUE的11.6.8 Barriers节中所举的例子；

## [Stack-sortable permutation](https://en.wikipedia.org/wiki/Stack-sortable_permutation) and catalan number

## [Merge algorithm](https://en.wikipedia.org/wiki/Merge_algorithm) and [All nearest smaller values](https://en.wikipedia.org/wiki/All_nearest_smaller_values#cite_note-2)

## 最长子序列的优化

降低空间复杂度

## expression tree

[Wikipedia binary expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree)

### tree and stack

表达式树其实它是可以使用stack来进行保存的，在[Wikipedia binary expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree)中就进行了展示

- [stacks in tree constructions](https://cs.stackexchange.com/questions/76461/stacks-in-tree-constructions)
- [Can a tree be used to create a stack?](https://softwareengineering.stackexchange.com/questions/309609/can-a-tree-be-used-to-create-a-stack)

[geeksforgeeks expression tree](https://www.geeksforgeeks.org/expression-tree/)

## 扩展

### [Parse tree](https://en.wikipedia.org/wiki/Parse_tree)

### [Regular tree grammar](https://en.wikipedia.org/wiki/Regular_tree_grammar)

### [Abstract syntax tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree)

## grammar vs syntax in compiler

https://linguistics.stackexchange.com/questions/3484/whats-the-difference-between-syntax-and-grammar

https://softwareengineering.stackexchange.com/questions/116982/what-is-the-difference-between-syntax-and-grammar

## 算法分类

这个分类非常好，我非常喜欢：

http://www3.cs.stonybrook.edu/~algorith/implement/watson/implement.shtml

## 使用表格驱动的算法

- KMP算法
- LL(1) parser
- LR parser

表格驱动的算法和动态规划之间的关联

## Longest Common Prefix

https://leetcode.com/problems/longest-common-prefix/solution/