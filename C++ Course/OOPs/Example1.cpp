#include <vector>
#include <map>

using namespace std;

class Graph {
private:
    map<int, vector<int>> adjacencyLists; // map to associate each node ID with its adjacency list
    
public:
    Graph(const vector<int>& starts, const vector<int>& ends) {
        // Constructs a Graph with the given set of edges, where starts and ends represent the ordered list of edges’ start and endpoints.
        int numEdges = starts.size();
        for (int i = 0; i < numEdges; i++) {
            int start = starts[i];
            int end = ends[i];
            adjacencyLists[start].push_back(end); // add the end node to the start node's adjacency list
        }
    }

    int numOutgoing(const int nodeID) const {
        // Returns the number of outgoing edges from nodeID – that is, edges with nodeID as the start point.
        return adjacencyLists.at(nodeID).size();
    }

    const vector<int>& adjacent(const int nodeID) const {
        // Returns a reference to the list of nodes to which nodeID has outgoing edges.
        return adjacencyLists.at(nodeID);
    }
};