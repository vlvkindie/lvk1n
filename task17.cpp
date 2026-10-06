#include <iostream>
#include <cstdlib>
#include <algorithm>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    bool rook = (dx == 0 || dy == 0);
    bool king = (std::max(dx, dy) == 1);
    bool bishop = (dx == dy && dx != 0);
    bool queen = rook || bishop;
    bool knight = (dx == 1 && dy == 2) || (dx == 2 && dy == 1);

    std::cout << "Rook: "   << (rook   ? "true" : "false") << "\n";
    std::cout << "King: "   << (king   ? "true" : "false") << "\n";
    std::cout << "Bishop: " << (bishop ? "true" : "false") << "\n";
    std::cout << "Queen: "  << (queen  ? "true" : "false") << "\n";
    std::cout << "Knight: " << (knight ? "true" : "false") << "\n";

    return 0;
}