class Node
{
private:
    int data;
    Node *prox;
public:
    Node(int data);
    void setData(int data);
    int getData();
    void setProx(Node *prox);
    void incluir(int data);
};

Node::Node(int data)
{
    this->data = data;
}

void Node::setData(int data)
{
    this->data = data;
}

int Node::getData()
{
    return data;
}

void Node::setProx(Node *prox)
{
    this->prox = prox;
}

void Node::incluir(int data)
{
    Node *novoItem = new Node(data);
    prox->prox = novoItem; 
}
