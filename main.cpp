#include <vector>
using namespace std;

class Cell{
private:
    bool isMine;
    bool isRevealed;
    bool isFlagged;
    int adjacentMinesCount;

public:
    Cell() : isMine(false), isRevealed(false), isFlagged(false), adjacentMinesCount(0) {}

    void setMine() { isMine = true; }
    bool hasMine() const { return isMine; }

    void reveal() { isRevealed = true; }
    bool isCellRevealed() const { return isRevealed; }

    void toggleFlag() { isFlagged = true; }
    bool isCellFlagged() const { return isFlagged; }

    void setAdjacentMines(int count) { adjacentMinesCount = count; }
    int getAdjacentMines() const { return adjacentMinesCount; }

};
