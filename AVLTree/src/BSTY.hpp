#ifndef BSTY_HPP_
#define BSTY_HPP_

#include "NodeT.hpp"
#include <string>
using namespace std;

class BSTY {
	NodeT *root;
	bool mine = true;
	string alpha[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

public:
	BSTY() ;
	bool insertit(string x);
	void adjustHeights(NodeT *n);
	void printTreeIO();
	void printTreeIO(NodeT *n);
	void printTreePre();
	void printTreePre(NodeT *n);
	void printTreePost();
	void printTreePost(NodeT *n);
	void myPrint();
	void myPrint(NodeT *n);
	NodeT *find(string x);
	NodeT *rotateRight(NodeT *n);
	NodeT *rotateLeft(NodeT *n);
	int findBalance(NodeT *n);
	bool insertit(string x, string y);

};







#endif /* BSTY_HPP_ */
