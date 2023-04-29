#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class AdjacencyList {
private:
    vector<vector<int>> adjList;
    unordered_map<string, int> graphIndex;

public:
    int ReturnURLIndex(string &URL);
    void AddEdge(string &fromURL, string &toURL);
    void PageRank(int powerIterations);
};

int AdjacencyList::ReturnURLIndex(string &URL) {
    auto it = graphIndex.find(URL);
    // If the URL is not found in the map, add it
    if (it == graphIndex.end()) {
        int index = graphIndex.size();
        graphIndex[URL] = index;
        adjList.push_back(vector<int>());
        return index;
    } else {
        // Return the index of the URL stored in the map
        return it->second;
    }
}

void AdjacencyList::AddEdge(string &fromURL, string &toURL) {
    // Get the index of the URLs
    int from = ReturnURLIndex(fromURL);
    int to = ReturnURLIndex(toURL);
    // Add edge to the adjacency list
    adjList[from].push_back(to);
}

void AdjacencyList::PageRank(int powerIterations) {
    int size = graphIndex.size();

    // Calculate out degree of each vertex
    vector<int> outDegree(size, 0);
    for (auto &v: graphIndex) {
        int i = v.second;
        outDegree[i] = adjList[i].size();
    }

    // Default pagerank to 1/num vertices for each vertex
    vector<float> pageRank(size, 1.0 / size);

    // Perform num power iterations to calculate pagerank
    for (int currPower = 1; currPower < powerIterations; currPower++) {
        vector<float> helperRank(size, 0.0);
        for (int i = 0; i < size; i++) {
            for (int j: adjList[i]) {
                helperRank[j] += pageRank[i] / outDegree[i];
            }
        }
        pageRank = helperRank;
    }

    // Create output vector with URLs and pagerank
    vector<pair<string, float>> outputVector;
    for (auto &it: graphIndex) {
        outputVector.push_back(make_pair(it.first, pageRank[it.second]));
    }
    // Sort output in alphabetical order
    sort(outputVector.begin(), outputVector.end());
    for (auto &it: outputVector) {
        // Print output to 2 decimal places
        cout << it.first << " " << fixed << setprecision(2) << showpoint << it.second << "\n";
    }
}

int main() {
    // Create the graph object
    AdjacencyList adjList;
    int numLines, powerIterations;
    string from, to;
    cin >> numLines;
    cin >> powerIterations;
    for (int i = 0; i < numLines; i++) {
        // Get URL pair
        std::cin >> from;
        std::cin >> to;
        // Add edge to the graph
        adjList.AddEdge(from, to);
    }
    // Run pagerank algorithm for output
    adjList.PageRank(powerIterations);
}
