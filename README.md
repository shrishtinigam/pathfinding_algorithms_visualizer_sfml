# pathfinding_algorithms_visualizer_sfml
BFS, DFS, A Star and Dijkstra Algorithms visualized using C++ and SFML

## Added DFS visualization
* Added another map and window that shows visualization for the DFS pathfinding algorithm.
* DFS uses stack data structure to perform its search.
* The time complexity of the DFS algorithm is O(V+E), where V is the number of vertices and E is the number of edges in the graph

## Optimized A Star code
* Instead of using a vector to store the visited cells values, I used a priority queue.
* In particular, I implemented a min heap data structure.
* This reduced the search time complexity from O(n) to O(1)
* Previously, A star was performing just as good or worse than BFS/Dijsktra's.
* Now, it performs much faster. However, this ofcourse depends on the case and the given map.
* In order to create a min heap, I used the following template -

  ```cpp
  std::priority_queue <std::pair<int, gbl::Position<>>> astar_path_minheap;
  ```
  
* Here, in the first 'int', I store the f score of the cell, multiplied by (-1). This way, the cells with the minimum f scores rise up to the top.

### Running the code
#### Top left: BFS, Top Middle: DFS, Top Right: Dijkstra's, Bottom Left: A Star
![image](https://github.com/shrishtinigam/pathfinding_algorithms_visualizer_sfml/assets/72018363/a99d1097-c013-41f2-98c1-e303ac0ad93b)

![image](https://github.com/shrishtinigam/pathfinding_algorithms_visualizer_sfml/assets/72018363/3427ace5-1194-43f9-80b9-855a41ce80a2)

![image](https://github.com/shrishtinigam/pathfinding_algorithms_visualizer_sfml/assets/72018363/b222cdb8-f8db-44bb-afd9-ccb244c224cf)

Template code from: https://github.com/Kofybrek/Pathfinding
