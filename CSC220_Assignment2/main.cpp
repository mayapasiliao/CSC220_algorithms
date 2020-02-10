#include <iostream>

typedef int object_t;
typedef int key_t;
typedef struct tr_n_t { key_t        key;
    struct tr_n_t  *left;
    struct tr_n_t *right;
    int           height;
} tree_node_t;

int depth_distribution( tree_node_t * tree);
int depth_distribution_recursion(tree_node_t * tree, int *a, int depth);

int main()
{
    return(0);
}

int depth_distribution(tree_node_t *tree) {
    int depth = 0;
    static int counters[100];
    for(int i = depth; i < 100; i++) {
        counters[i] = 0;
    }

    depth_distribution_recursion(tree, counters, depth);
    for(int i = 0; i < 100; i++) {
        if(counters[i] == 0) {
            continue;
        }

        std::cout << counters[i] << " leaves at depth " << i << std::endl;
    }

    return 0;
}

int depth_distribution_recursion(tree_node_t * tree, int *a, int depth) {
    // If leaf, increment right index in counters array
    if(tree->right == nullptr) {
        if(depth > 99) {
            std::cout << "Depth greater than 99 found" << std::endl;
        }

        else {
            a[depth]++;
        }

        return 0;
    }

    else {
        depth++;

        // Recursive calls
        if (tree->right != nullptr) {
            depth_distribution_recursion(tree->right, a, depth);
        }

        if (tree->left != nullptr) {
            depth_distribution_recursion(tree->left, a, depth);
        }
    }
}