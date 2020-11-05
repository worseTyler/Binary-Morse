#include "Binary Tree.h"

int main(void) {
	BinaryTree<char, std::string> test("Convert.txt");

	test.convert("NEW BRANCH");

	return 0;
}