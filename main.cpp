#include <iostream>
#include "TwoThreeTree.h"

int main() {
    TwoThreeTree tree;
    tree.insert(51);
    tree.insert(42);
    tree.insert(65);
    tree.insert(23);
    tree.insert(47);
    tree.insert(18);
    tree.insert(73);
//    tree.insert(81);

    tree.traverseInOrder();

    tree.insert(73);
    tree.insert(54);
    tree.insert(39);
    tree.insert(29);
    tree.insert(89);
    tree.insert(99);
    tree.insert(111);
    tree.insert(84);
    tree.insert(67);
    tree.insert(123);
    tree.insert(77);
    tree.insert(80);
    tree.insert(105);
    tree.insert(109);
    tree.insert(134);
    tree.insert(129);
}
