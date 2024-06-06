#include <iostream>

using namespace std;

const int N = 5;

struct Node
{
  int v;
  Node* next;
};

struct List
{
  Node* head;
};

List adj[N];

void addEdge(int u, int v)
{
  Node* node = new Node;
  node->v = v;
  node->next = adj[u].head;
  adj[u].head = node;
}

void printGraph()
{
  for (int i = 0; i < N; i++)
  {
    Node* p = adj[i].head;
    cout << "Vertex " << i << ": ";
    while (p)
    {
      cout << p->v << " ";
      p = p->next;
    }
    cout << endl;
  }
}

int main()
{
  // menambahkan edge 0-1
  addEdge(0, 1);

  // menambahkan edge 0-4
  addEdge(0, 4);

  // menambahkan edge 1-2
  addEdge(1, 2);

  // menambahkan edge 1-3
  addEdge(1, 3);

  // menambahkan edge 1-4
  addEdge(1, 4);

  // menambahkan edge 2-3
  addEdge(2, 3);

  // menambahkan edge 3-4
  addEdge(3, 4);

  printGraph();

  return 0;
}
