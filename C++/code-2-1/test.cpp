#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 定义棋子的类型
enum PieceType {
    EMPTY,
    KING,       // 将/帅
    GUARD,      // 士
    ELEPHANT,   // 象
    HORSE,      // 马
    CHARIOT,    // 车
    CANNON,     // 炮
    SOLDIER     // 兵/卒
};

// 定义棋子的颜色
enum PieceColor {
    NONE,
    RED,        // 红方
    BLACK       // 黑方
};

// 定义棋子结构体
struct Piece {
    PieceType type;
    PieceColor color;
};

// 定义棋盘大小
const int BOARD_WIDTH = 9;
const int BOARD_HEIGHT = 10;

// 初始化棋盘
vector<vector<Piece>> initializeBoard() {
    vector<vector<Piece>> board(BOARD_HEIGHT, vector<Piece>(BOARD_WIDTH, {EMPTY, NONE}));

    // 初始化红方棋子
    board[0][0] = {CHARIOT, RED};
    board[0][1] = {HORSE, RED};
    board[0][2] = {ELEPHANT, RED};
    board[0][3] = {GUARD, RED};
    board[0][4] = {KING, RED};
    board[0][5] = {GUARD, RED};
    board[0][6] = {ELEPHANT, RED};
    board[0][7] = {HORSE, RED};
    board[0][8] = {CHARIOT, RED};
    board[2][1] = {CANNON, RED};
    board[2][7] = {CANNON, RED};
    board[3][0] = {SOLDIER, RED};
    board[3][2] = {SOLDIER, RED};
    board[3][4] = {SOLDIER, RED};
    board[3][6] = {SOLDIER, RED};
    board[3][8] = {SOLDIER, RED};

    // 初始化黑方棋子
    board[9][0] = {CHARIOT, BLACK};
    board[9][1] = {HORSE, BLACK};
    board[9][2] = {ELEPHANT, BLACK};
    board[9][3] = {GUARD, BLACK};
    board[9][4] = {KING, BLACK};
    board[9][5] = {GUARD, BLACK};
    board[9][6] = {ELEPHANT, BLACK};
    board[9][7] = {HORSE, BLACK};
    board[9][8] = {CHARIOT, BLACK};
    board[7][1] = {CANNON, BLACK};
    board[7][7] = {CANNON, BLACK};
    board[6][0] = {SOLDIER, BLACK};
    board[6][2] = {SOLDIER, BLACK};
    board[6][4] = {SOLDIER, BLACK};
    board[6][6] = {SOLDIER, BLACK};
    board[6][8] = {SOLDIER, BLACK};

    return board;
}

// 打印棋盘
void printBoard(const vector<vector<Piece>>& board) {
    for (int i = 0; i < BOARD_HEIGHT; i++) {
        for (int j = 0; j < BOARD_WIDTH; j++) {
            Piece piece = board[i][j];
            if (piece.type == EMPTY) {
                cout << " . ";
            } else {
                string pieceName;
                switch (piece.type) {
                    case KING: pieceName = "K"; break;
                    case GUARD: pieceName = "G"; break;
                    case ELEPHANT: pieceName = "E"; break;
                    case HORSE: pieceName = "H"; break;
                    case CHARIOT: pieceName = "C"; break;
                    case CANNON: pieceName = "N"; break;
                    case SOLDIER: pieceName = "S"; break;
                    default: pieceName = "?"; break;
                }
                if (piece.color == RED) {
                    cout << "\033[31m" << pieceName << "\033[0m ";
                } else {
                    cout << "\033[34m" << pieceName << "\033[0m ";
                }
            }
        }
        cout << endl;
    }
}

// 检查移动是否合法（简单示例，未实现完整规则）
bool isMoveValid(const vector<vector<Piece>>& board, int fromX, int fromY, int toX, int toY) {
    // 检查是否在棋盘范围内
    if (toX < 0 || toX >= BOARD_HEIGHT || toY < 0 || toY >= BOARD_WIDTH) {
        return false;
    }

    Piece fromPiece = board[fromX][fromY];
    Piece toPiece = board[toX][toY];

    // 不能移动到自己的棋子上
    if (toPiece.color == fromPiece.color) {
        return false;
    }

    // 简单示例：车只能直线移动
    if (fromPiece.type == CHARIOT) {
        if (fromX != toX && fromY != toY) {
            return false;
        }
    }

    // 其他棋子的规则可以在这里实现
    return true;
}

// 移动棋子
void movePiece(vector<vector<Piece>>& board, int fromX, int fromY, int toX, int toY) {
    if (isMoveValid(board, fromX, fromY, toX, toY)) {
        board[toX][toY] = board[fromX][fromY];
        board[fromX][fromY] = {EMPTY, NONE};
    } else {
        cout << "非法移动！" << endl;
    }
}

int main() {
    vector<vector<Piece>> board = initializeBoard();
    printBoard(board);

    // 示例：移动红方的车
    movePiece(board, 0, 0, 2, 0);
    printBoard(board);

    return 0;
}