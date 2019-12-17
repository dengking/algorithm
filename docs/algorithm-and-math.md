使用数学来描述算法，根据数学公式写出算法。

《algorithm-DP-VS-最长公共子序列-VS-矩阵连乘问题-VS-最大子段和.md》

在[Knuth–Morris–Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)中对算法的描述：

> The most straightforward algorithm, known as the "[Brute-force](https://en.wikipedia.org/wiki/Brute-force_search)" or "Naive" algorithm, is to look for a **word match** at each index `m`, the position in the string being searched, i.e. `S[m]`. At each position `m` the algorithm first checks for equality of the first character in the word being searched, i.e. `S[m] =? W[0]`. If a match is found, the algorithm tests the other characters in the word being searched by checking successive values of the word position index, `i`. The algorithm retrieves the character `W[i]` in the word being searched and checks for equality of the expression `S[m+i] =? W[i]`. If all successive characters match in `W` at position `m`, then a match is found at that position in the search string. If the index `m` reaches the end of the string then there is no match, in which case the search is said to "fail".



一次处理一个元素，这是很多算法的运作方式：

- parsing
- [Knuth–Morris–Pratt algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)



这背后是算法和离散数学。

