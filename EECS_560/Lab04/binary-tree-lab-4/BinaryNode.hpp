//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** A class of nodes for a link-based binary tree.
 Listing 16-2.
 @file BinaryNode.h */

#ifndef _BINARY_NODE
#define _BINARY_NODE

template<typename NodeItemType>
class BinaryNode
{
private:
   NodeItemType              item;           // Data portion
   BinaryNode<NodeItemType>* leftChildPtr;   // Pointer to left child
   BinaryNode<NodeItemType>* rightChildPtr;  // Pointer to right child
   bool                      isFront;        // whether or not it is first node in a row
   int                       level;          // level of node;
                                             //0 for root
                                             //1 or root's children

public:
   BinaryNode();
   BinaryNode(const NodeItemType& anItem);
   BinaryNode(const NodeItemType& anItem,
              BinaryNode<NodeItemType>* leftPtr,
              BinaryNode<NodeItemType>* rightPtr);

   void setItem(const NodeItemType& anItem);
   NodeItemType getItem() const;

   bool isLeaf() const;

   BinaryNode<NodeItemType>* getLeftChildPtr() const;
   BinaryNode<NodeItemType>* getRightChildPtr() const;

   void setLeftChildPtr(BinaryNode<NodeItemType>* leftPtr);
   void setRightChildPtr(BinaryNode<NodeItemType>* rightPtr);

   void setLevel(int l);
   int getLevel();

   void setIsFront(bool f);
   bool getIsFront();

   //OPERATOR OVERLOAD
}; // end BinaryNode

#include "BinaryNode.cpp"

#endif
