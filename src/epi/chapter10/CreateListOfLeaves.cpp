#include "CreateListOfLeaves.hpp"

#include <memory>
#include <list>
#include <vector>
#include <assert.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>

#include "../../BinaryTreeNode.h"
#include "../../MyUtils.h"

using std::unique_ptr;
using std::list;
using std::vector;
using std::move;
using myutils::BinaryTreeNode;
using myutils::BTNULL;
using std::invalid_argument;
using myutils::createPreOrderIntBTree;
using myutils::traversePreInOrder;
using myutils::vec_to_string;
using std::cout;
using std::endl;

namespace epi {
  namespace chapter10 {
    void CreateListOfLeaves::traverseLeavesHelper(const unique_ptr<BinaryTreeNode<int>> &node,
            list< const unique_ptr<BinaryTreeNode<int>>* > &list) {
        if (!node)
            return;

        if (!node.get()->left && !node.get()->right) {
            list.push_back(&node);
            return;
        }

        traverseLeavesHelper(node.get()->left, list);
        traverseLeavesHelper(node.get()->right, list);
    }

    list< const unique_ptr<BinaryTreeNode<int>>* > CreateListOfLeaves::createListOfLeaves(
            const unique_ptr<BinaryTreeNode<int>> &node) {
        list< const unique_ptr<BinaryTreeNode<int>>* > list;
        traverseLeavesHelper(node, list);
        return list;
    }

    bool CreateListOfLeaves::test() {
        vector<int> preOrder1 = {314, 6, 271, 28, BTNULL, BTNULL, 0, BTNULL, BTNULL,
                561, BTNULL, 3, 17, BTNULL, BTNULL, BTNULL,
                6, 2, BTNULL, 1, 401, BTNULL, 641, BTNULL, BTNULL, 257, BTNULL, BTNULL,
                271, BTNULL, 28
        };
        size_t pos = 0;
        unique_ptr<BinaryTreeNode<int>> root1 = createPreOrderIntBTree(preOrder1, &pos);

        vector<int> ans = {28, 0, 17, 641, 257, 28};

        list< const unique_ptr<BinaryTreeNode<int>>* > list = createListOfLeaves(root1);
        vector<int> res;
        for (auto it = list.begin(); it != list.end(); ++it) {
            res.push_back((*it)->get()->data);
        }

        if (res != ans) {
            cout << "preorder should be " << vec_to_string(ans) << endl;
            cout << "result " << vec_to_string(res) << endl;
            return false;
        }

        return true;
    }

  } // chapter10
} // epi
