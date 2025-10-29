#include <bits/stdc++.h>

typedef int Weight;
typedef bool IsDirected;
typedef std::string VertexName;
typedef struct Vertex Vertex;
typedef std::vector<std::pair<Weight, std::string >> AdjacentVertices;
typedef std::unordered_map<std::string, Vertex> Vertices;
typedef std::vector<std::tuple<Weight, std::string, std::string>> EdgeList; 
typedef std::unordered_set<std::string> VertexSet;

struct Vertex {
  VertexName name;
  AdjacentVertices adjacentVertices;
};

class Graph {
  public: 
    Vertices vertices;
    EdgeList edges;
    VertexSet vn;
    

    void insert_vertex(std::string vertex) {
      if (this->vertices.find(vertex) == this->vertices.end()) {
        Vertex new_vertex;
        new_vertex.name = vertex;
        vertices[vertex] = new_vertex;
        vn.insert(vertex);
        std::cout << "Vertex inserted\n";
      } else {
        std::cout << "Vertex Already exits\n";
      }
    }

    void insert_edge(std::string source, std::string destination, Weight w) {
      if (vertices.find(source) == vertices.end()) {
        std::cout << "The sources does not exits\n";
        return;
      }

      for (auto arr: vertices[source].adjacentVertices) {
        if (arr.second == destination) {
          std::cout << "The edge already exists";
          return;
        }
      }

      edges.push_back(
        {
          w,
          source,
          destination
        }
      );

      this->vertices[source].adjacentVertices.push_back({w, destination});
      this->vertices[destination].adjacentVertices.push_back({w, source});
    }

    
};

int main() {
  return 0;
}