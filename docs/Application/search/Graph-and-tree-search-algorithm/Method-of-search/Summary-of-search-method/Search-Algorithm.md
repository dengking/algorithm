

# Search Algorithms

## [CSci 4511w: Class Notes on Search](https://www-users.cs.umn.edu/~gini/4511/search)

The description of most of the search algorithms in these notes is taken from J. Pearl, "Heuristics", Addison-Wesley, 1984.

### Important issues about Search Algorithms

We will address:

#### 1. how to write search algorithms. In particular we will examine:

- the data structure to keep unexplored nodes. We use a queue (often called a list in many AI books) called ***OPEN***.
- expansion of a node (or generation of its successors). All the successors of a node can be generated at once (method most commonly used) or they could be generated one at a time either in a systematic way or in a random way. The number of successors is called the ***branching factor***.
- strategies for selecting which node to expand next. Different algorithms result from different choices (e.g. depth-first when successor nodes are added at the **beginning** of the queue, breadth-first when successor nodes are added at the **end** of the queue, etc),
- test for goal. We will assume the existence of a predicate that applied to a state will return true or false.
- **bookkeeping** (keeping track of visited nodes, keeping track of path to goal, etc). Keeping track of visited nodes is usually done by keeping them in a queue (or, better a hash-table) called ***CLOSED***. This prevents getting trapped into loops or repeating work but results in a large space complexity. This is (most often) necessary when optimal solutions are sought, but can be (mostly) avoided in other cases.
  Keeping track of the path followed is not always necessary (when the problem is to find a **goal state** and knowing how to get there is not important).

#### 2. properties of search algorithms and the solutions they find:

- Termination: the computation is guaranteed to terminate, no matter how large the search space is.

  > NOTE: 保证termination的一种常见情况是：避免loop。下面的“repeated nodes are checked”就是为了避免loop。

- Completeness: an algorithm is complete if it terminates with a solution when one exists.

- Admissibility: an algorithm is admissible if it is guaranteed to return an optimal solution whenever a solution exists.

  > NOTE: Admissibility的意思是“可容许性”。

- Space complexity and Time complexity: how the size of the memory and the time needed to run the algorithm grows depending on **branching factor**, **depth of solution**, **number of nodes**, etc.

Let's briefly examine the properties of some commonly used uninformed search algorithms.

##### Depth-First Search

Termination:

guaranteed for a finite space if repeated nodes are checked. Guaranteed when a depth bound is used. Not guaranteed otherwise.

> NOTE: “repeated nodes are checked”就是为了避免“loop”。

Completeness:

not guaranteed in general. Guaranteed if the search space is finite (exhaustive search) and repeated nodes are checked.

Admissibility:

not guaranteed.

##### Breadth-First Search

Termination:

guaranteed for finite space. Guaranteed when a solution exists.

> NOTE: 感觉此处是有问题的：如果存在loop，并且算法没有避免loop，则它无法terminate。

Completeness:

guaranteed.

Admissibility:

the algorithm will always find the shortest path (it might not be the optimal path, if arcs have different costs).

##### Depth-First Search Iterative-Deepening

Termination:

guaranteed for finite space. Guaranteed when a solution exists.

Completeness:

guaranteed.

Admissibility:

the algorithm will always find the shortest path (it might not be the optimal path, if arcs have different costs).



#### 3. classes of search algorithms.

- **uninformed** (depth-first, breadth-first, uniform cost, depth-limited, iterative deepening) versus **informed** (greedy, `A*`, `IDA*`, `SMA*`)

  > NOTE: **uninformed**也就是blind search，没有heuristics的

- **local** (greedy, hill-climbing) versus **global** (uniform cost, `A*`, etc)

- **systematic** (depth-first, `A*`, etc) versus **stochastic** (simulated annealing, genetic algorithms)



### Description of an Uninformed Search Algorithm:

#### Depth-First Search with depth bound

```pseudocode
1. Put the start node on OPEN.
2. until OPEN is empty or a goal node has been reached
   2.1 remove the topmost node from OPEN and put it on
       CLOSED.  Call this node n.
   2.2 if the depth of n is less than the depth bound 
       then
       2.2.1 expand n, generating all successors (if any).  
       2.2.2 if any of these successors is already on 
             the traversal path discard it
       2.2.3 if any of these successors is a goal node, 
             exit 
       2.2.4 put the successors on top of OPEN and 
             provide for each a pointer back to n
       else
       2.2.5 clean up CLOSED.
3. If a goal node is found, 
   then exit with the solution obtained by tracing back 
        through its pointers 
   else announce failure.
```

Notes:

- Nodes that have been expanded (i.e. their successors have been generated) are called closed, nodes that were generated and are awaiting expansion are called open. Two queues, CLOSED and OPEN keep track of these two sets of nodes.
- The depth of a node in a graph is defined recursively as 1 + depth of its shallowest parent. The start node has 0 depth.
- If the depth bound is less than the solution depth the algorithm terminates without finding a solution. If the depth bound is greater the algorithm might find a non optimal solution. This can be remedied by completing the search to the depth of the last solution found and then returning the best solution.
- To save memory `CLOSED` needs to be cleaned up by keeping in it only the nodes on the current traversal path.

### Description of an Informed Search Algorithm

#### Best-First Search

The term best-first search is used in different ways by different authors. The Russell and Norvig textbook calls best-first search any algorithm that sorts the nodes according to some function and selects the best each time. Judea Pearl has a somewhat different definition of best-first, which is given here. The major difference is in the specification of how to handle nodes already seen (Russell and Norvig do not specify what to do) and in when goal test is done (Russell and Norvig in Graph-Search check for goal only on the first element of OPEN, Pearl checks as soon as the successors of a node are generated).

```pseudocode
1. Put the start node S on OPEN.
2. until OPEN is empty or a goal node has been reached
   2.1 remove from OPEN a node at which f is minimum (break 
       ties arbitrarily) and put it on CLOSED.  Call this 
       node n.
   2.2 expand n, generating all successors (if any).
   2.3 if any of the successors of n is a goal node, exit.
   2.4 for each successor n' of n
       2.4.1 calculate f(n')
       2.4.2 if n' was neither on OPEN nor CLOSED, add it to 
             OPEN.  Attach the cost f(n') to it.
       2.4.3 if n' was already on OPEN or on CLOSED compare
             the new value f(n') with the previously assigned
             value f(n').  If the old value is lower discard 
             the newly generated node.  If the new value is 
             lower, substitute the new node for the old node.  
             If the old node was on CLOSED move it back to 
             OPEN.
3. If a goal node is found, 
   then exit with the solution obtained by tracing back 
        through pointers
   else announce failure.
```

