#include "BSPNode.h"

int BSPNode::getPlane() {
	return this->plane;
}

int *BSPNode::getChildren() {
	return this->children;
}

int *BSPNode::getMins() {
	return this->mins;
}

int *BSPNode::getMaxs() {
	return this->maxs;
}