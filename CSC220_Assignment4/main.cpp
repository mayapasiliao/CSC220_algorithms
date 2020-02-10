//Residual Graph of a flow network is a graph which indicates additional possible flow. If there is a path from source to
//sink in residual graph, then it is possible to add flow. Every edge of a residual graph has a value called residual
//capacity which is equal to original capacity of the edge minus current flow. Residual capacity is basically the current
//capacity of the edge.

// i = rows, j = columns

// maximum_flow(1000,0,999,&(cap[0][0]),&(flow[0][0])); -> function call from test.c

//---------------QUESTIONS?????---------------
//    1. Augmenting path?
//        Augmenting paths are edges that are non-full and forward, or non-empty and backward. Basically path that still
//        has capacity for flow. If path has edge that is full to capacity or there is no flow, can't augment.

//---------------FORD FULKERSON ALGORITHM---------------
//    1. Set all flows to 0.
//    2. Find augmenting path.
//    3. Compute bottleneck capacity, edge in path with smallest capacity.
//    4. Augment each edge and the total flow. Assign capacity of the bottleneck edge to each edge in path.
//    5. Repeat 2 to 4 until can't find augmenting path.

#include <iostream>

void maximum_flow(int n, int s, int t, int *cap, int *flow);

int main() {

    return 0;
}

void maximum_flow(int n, int s, int t, int *cap, int *flow) {
//    - n: the number of vertices of the graph,
//    - s: the start vertex,
//    - t: the target vertex
//    - cap: the matrix of edge capacities.
//    - flow: the matrix used to return the maximum flow.


}