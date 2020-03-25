//
// Created by shirin dora on 20/03/2020.
//

#ifndef INC_23TREE_TWOTHREENODE_H
#define INC_23TREE_TWOTHREENODE_H

struct TwoThreeNode {
    TwoThreeNode(int l_key) {
        left_key = l_key;

        right_key = -1;
        left = nullptr;
        right = nullptr;
        middle = nullptr;
        parent = nullptr;
    }

    int left_key;
    int right_key;
    TwoThreeNode* left;
    TwoThreeNode* middle;
    TwoThreeNode* right;
    TwoThreeNode* parent;

    enum ChildPosition {LEFT, MIDDLE, RIGHT};
    void set_child(ChildPosition pos, TwoThreeNode* &n) {
        switch(pos) {
            case LEFT: left = n;
                if (n) {
                    n->parent = this;
                }
                break;
            case MIDDLE: middle = n;
                if (n) {
                    n->parent = this;
                }
                break;
            case RIGHT: right = n;
                if (n) {
                    n->parent = this;
                }
                break;
        }
    }

    void reset_child(ChildPosition pos) {
        switch (pos) {
            case LEFT: left = nullptr;
                break;
            case MIDDLE: middle = nullptr;
                break;
            case RIGHT: right = nullptr;
                break;
        }
    }
};

#endif //INC_23TREE_TWOTHREENODE_H
