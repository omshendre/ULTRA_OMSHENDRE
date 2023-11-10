#include "../Algorithms/Dijkstra/Dijkstra.h"
#include "../DataStructures/Graph/Graph.h"

int main() {
    StrasserGraph myGraph;
    Graph::fromDimacs("../USA-road-d.FLA.gr", myGraph);
    Graph::printInfo(myGraph);
    Dijkstra<StrasserGraph> dijkstra(myGraph);
    // dijkstra.run(sourceVertex, targetVertex);
    // Example: Read graph from a file named "graph_data.gr"
    // toDimacs.open('../USA-road-d.FLA.gr')
    return 0;
}