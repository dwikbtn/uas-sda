#include <iostream>

// Struktur untuk simpul BST
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Fungsi untuk memasukkan data ke dalam BST
Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

// Fungsi untuk melakukan pencarian pada BST
bool search(Node *root, int val)
{
    if (root == nullptr)
    {
        return false;
    }

    if (root->data == val)
    {
        return true;
    }
    else if (val < root->data)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int searchData;
    std::cout << "Masukkan data yang ingin dicari: ";
    std::cin >> searchData;

    if (search(root, searchData))
    {
        std::cout << "Data ditemukan dalam BST." << std::endl;
    }
    else
    {
        std::cout << "Data tidak ditemukan dalam BST." << std::endl;
    }

    return 0;
}