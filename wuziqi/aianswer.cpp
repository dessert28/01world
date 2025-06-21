#include <iostream>
#include <limits> // 使用std::numeric_limits进行输入验证

using namespace std;

const int SIZE = 19;
int board[SIZE][SIZE]; // 定义棋盘大小为常量
int flag = 0; // 当前回合设为黑棋(flag设为0)

// 声明gameView函数
void gameView();

void init() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0; // 将棋盘的值初始化为0
        }
    }
    flag = 0; // 当前回合设为黑棋(flag设为0)
}

int isWin(int x, int y) {
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) return 0; // 添加越界检查
    int player = board[x][y]; // 获取当前落子的颜色
    int count = 0; // 用于计数连续的棋子数量

    // 水平方向判断
    for (int i = 0; i < SIZE; i++) {
        if (board[x][i] == player) {
            count++;
            if (count == 5) {
                return player; // 如果连续5个棋子，返回该玩家胜利
            }
        } else {
            count = 0; // 重置计数器
        }
    }

    // 垂直方向判断
    count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (board[i][y] == player) {
            count++;
            if (count == 5) {
                return player;
            }
        } else {
            count = 0;
        }
    }

    // 左上到右下方向判断
    count = 0;
    for (int i = -4; i <= 4; i++) {
        if (x + i >= 0 && x + i < SIZE && y + i >= 0 && y + i < SIZE) {
            if (board[x + i][y + i] == player) {
                count++;
                if (count == 5) {
                    return player;
                }
            } else {
                count = 0;
            }
        }
    }

    // 右上到左下方向判断
    count = 0;
    for (int i = -4; i <= 4; i++) {
        if (x + i >= 0 && x + i < SIZE && y - i >= 0 && y - i < SIZE) {
            if (board[x + i][y - i] == player) {
                count++;
                if (count == 5) {
                    return player;
                }
            } else {
                count = 0;
            }
        }
    }

    return 0; // 如果没有获胜，返回0
}

int playerMove(int x, int y) {
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) return 0; // 添加越界检查
    if (board[x][y] == 0) { // 如果board[x][y]是空地
        board[x][y] = flag % 2 + 1; // 改为相应颜色(flag对应颜色)
        return 1; // 表示落子成功
    } else {
        return 0; // 表示落子失败 (棋盘已经有子)
    }
}

void menuView() {
    while (1) {
        system("cls"); // 清屏
        cout << "欢迎来到五子棋游戏!" << endl;
        cout << "1. 进入游戏" << endl;
        cout << "2. 进入设置" << endl;
        cout << "3. 退出游戏" << endl;
        int choice;
        cout << "请输入你的选择: ";
        cin >> choice;

        // 验证输入是否为有效数字
        if (cin.fail()) {
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
            cout << "无效的选择，请重新选择。" << endl;
            system("pause");
            continue;
        }

        switch (choice) {
            case 1:
                gameView(); // 进入游戏界面函数gameView();
                break;
            case 2:
                cout << "敬请期待..." << endl;
                system("pause"); // 暂停，等待用户输入
                break;
            case 3:
                exit(0); // 退出游戏
                break;
            default:
                cout << "无效的选择，请重新选择。" << endl;
                system("pause");
        }
    }
}

void gameView_ShowBoard() {
    system("cls"); // 清屏
    cout << "  ";
    for (int i = 0; i < SIZE; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i << " ";
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                cout << "+ "; // 空地用+表示
            } else if (board[i][j] == 1) {
                cout << "X "; // 黑子用X表示
            } else if (board[i][j] == 2) {
                cout << "O "; // 白子用O表示
            }
        }
        cout << endl;
    }
}

void winView() {
    system("cls"); // 清屏
    if (flag % 2 + 1 == 1) {
        cout << "黑子胜利!" << endl;
    } else {
        cout << "白子胜利!" << endl;
    }
    cout << "按任意键返回主菜单...";
    cin.get(); // 使用cin.get()替代getch()以提高跨平台性
}

void gameView() {
    init(); // 初始化游戏数据
    while (1) {
        gameView_ShowBoard(); // 打印游戏界面

        int x, y;
        cout << "请输入你要落子的坐标(x y): ";
        cin >> x >> y;

        // 验证输入是否为有效数字
        if (cin.fail()) {
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
            cout << "无效的坐标，请重新输入。" << endl;
            system("pause");
            continue;
        }

        if (!playerMove(x, y)) { // 如果落子失败
            cout << "落子失败，该位置已有棋子，请重新输入。" << endl;
            system("pause"); // 暂停，等待用户输入
            continue;
        }

        if (isWin(x, y)) { // 判断游戏是否胜利
            winView(); // 调用胜利界面函数
            break;
        }

        flag++; // 切换玩家
    }
}

int main() {
    menuView(); // 进入菜单界面函数menuView();
    return 0;
}
