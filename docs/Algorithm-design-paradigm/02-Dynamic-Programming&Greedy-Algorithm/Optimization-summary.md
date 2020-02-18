一般要我们解决的optimization问题中往往只包含一个最值，如：
- [All nearest smaller values](https://en.wikipedia.org/wiki/All_nearest_smaller_values)的最值是nearest
- [Maximum subarray problem](https://en.wikipedia.org/wiki/Maximum_subarray_problem)的最值是largest

所以在求解最值问题的时候，一个非常重要的前提是要搞清楚它的最值是什么。

其次，我们往往是基于**比较**（打擂台）来求解最值，但是有有些是可以直接进行比较的，比如数值，但是有些是无法直接进行比较的，比如在[All nearest smaller values](https://en.wikipedia.org/wiki/All_nearest_smaller_values)中最值是nearest，除非记录每个元素的位置，否则只能够借助一个stack来实现nearest；