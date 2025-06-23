//C/C++:
// -------------------- 数据设计 --------------------
/*
    棋盘:
        board[i][j]表示坐标(i,j)的值
        0表示空地
        1表示黑子
        2表示白子
    如: board[3][6] = 1  表示(3,6)的位置是黑子
*/
#include<bits/stdc++.h>
using namespace std;
const int Size = 19;

int board[19][19];

// 表示当前回合数  偶数表示黑棋落子  奇数表示白棋落子
// 如: flag = 20 表示当前是第[20]次落子  由黑方落子
int flag = 0;


// -------------------- 数据设计 --------------------


// -------------------- service --------------------
/*
    负责人: 张三
    功能: init: 初始化游戏数据
        将棋盘的值初始化为0
        当前回合设为黑棋(flag设为0)
    参数: void
    返回值: void
*/
void init();

/*
    *难点1
    负责人: 张三
    功能: isWin: 根据传入的坐标(board对应位置)和flag值 判断落点后是否获胜
    参数:
        x: 当前回合落子的x坐标
        y: 当前回合落子的y坐标
    返回值:
        0表示没有获胜
        1表示黑子胜利
        2表示白子胜利
*/
int isWin(int x, int y);

/*
    负责人: 张三
    功能: playerMove: 在指定位置落子
        如果board[x][y]是空地 则修改board[x][y]的值:改为相应颜色(flag对应颜色)        否则不操作
    参数:
        x: 当前回合落子的x坐标
        y: 当前回合落子的y坐标
    返回值:
        0表示落子失败 (棋盘已经有子)
        1表示落子成功

*/
int playerMove(int x, int y);
// -------------------- service --------------------



// -------------------- view --------------------
/*
    负责人: 张三
    功能: menuView: 展示选项, 玩家可以在这里选择进入游戏, 进入设置或退出游戏
        while(1){
            1. 展示选项
            2. 用户输入
            3. 根据输入进行对应处理
                进入游戏: 调用游戏界面函数gameView();
                进入设置: 打印敬请期待... 重新循环
                退出游戏: 调用exit(0);
        }
    参数: void
    返回值: void
*/
void menuView();

/*
    负责人: 张三
    功能: gameView_ShowBoard: 根据board数组 打印游戏棋盘
    参数: void
    返回值: void
*/
void gameView_ShowBoard();

/*
    负责人: 张三
    功能: winView: 
        根据flag的值  打印游戏胜利界面  用户可以按任意键(使用getch函数)退出当前界面
    参数: void
    返回值: void
*/
void winView();

/*
    *难点2
    负责人: 张三
    功能: gameView: 游戏界面整合
        初始化游戏数据(调用函数init())
        while(1){
            打印游戏界面(调用函数gameView_Showboard())
            接收玩家坐标输入

            落子(调用落子函数playerMove())
                (如果落子失败 重新开始循环)

            判断游戏是否胜利(调用胜利判断函数isWin())
                (如果游戏胜利 调用胜利界面函数 然后结束当前界面)
            切换玩家(修改flag值)
        }
    参数: void
    返回值: void
*/
void gameView();
// -------------------- view --------------------

int main()
{
    menuView();
    return 0;
}

void init() {
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            board[i][j] = 0; //chushihua
        }
    }
    flag = 0; // 黑棋flag设为0
}

int isWin(int x, int y)
{
    if (x < 0 || x >= Size || y < 0 || y >= Size) return 0;
    int player = board[x][y];
    int count = 0; // 计连续棋子

    //水平
    for (int i = 0; i < Size; i++) {
        if (board[x][i] == player) {
            count++;
            if (count == 5) {
                return player; //判断胜利
            }
        } else {
            count = 0; //重置
        }
    }

    // 垂直
    count = 0;
    for (int i = 0; i < Size; i++) {
        if (board[i][y] == player) {
            count++;
            if (count == 5) {
                return player;
            }
        } else {
            count = 0;
        }
    }

    // 左上右下
    count = 0;
    for (int i = -4; i <= 4; i++) {
        if (x + i >= 0 && x + i < Size && y + i >= 0 && y + i < Size) {
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

    // 右上左下
    count = 0;
    for (int i = -4; i <= 4; i++) {
        if (x + i >= 0 && x + i < Size && y - i >= 0 && y - i < Size) {
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

    return 0; //未获胜
}

int playerMove(int x, int y)
{
    if (x < 0 || x >= Size || y < 0 || y >= Size)
        return 0;
    if (board[x][y] == 0)
    {
        board[x][y] = flag % 2 + 1;
        return 1; //落子成功
    }
    else
    {
        return 0; //落子失败 
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

        if (cin.fail()) {
            cin.clear(); //清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //忽略错误输入
            cout << "无效的选择" << endl;
            system("pause");
            continue;
        }

        switch (choice) {
            case 1:
                gameView();
                break;
            case 2:
                cout << "敬请期待..." << endl;
                system("pause");
                break;
            case 3:
                exit(0); // 退出游戏

                
                break;
            default:
                cout << "无效的选择" << endl;
                system("pause");
        }
    }
}
void gameView_ShowBoard()
{
    system("cls"); // 清屏
    cout << "  ";
    for (int i = 0; i < Size; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < Size; i++) {
        cout << i << " ";
        for (int j = 0; j < Size; j++) {
            if (board[i][j] == 0) {
                cout << "+ ";
            } else if (board[i][j] == 1) {
                cout << "X ";
            } else if (board[i][j] == 2) {
                cout << "O ";
            }
        }
        cout << endl;
    }
}

void winView()
{
    system("cls");
    if (flag % 2 + 1 == 1) {
        cout << "黑子胜利!" << endl;
    } else {
        cout << "白子胜利!" << endl;
    }
    cout << "按任意键返回主菜单...";
    cin.get();
}

void gameView()
{
    init(); //初始化游戏数据
    while (1) {
        gameView_ShowBoard();//打印界面

        int x, y;
        cout << "请输入你要落子的坐标(x y): ";
        cin >> x >> y;

        if (cin.fail()) {
            cin.clear();//清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//忽略错误输入
            cout << "无效的坐标" << endl;
            system("pause");
            continue;
        }

        if (!playerMove(x, y)) //如果落子失败
        {
            cout << "落子失败，该位置已有棋子，请重新输入。" << endl;
            system("pause");//暂停程序等待用户输入
            continue;
        }

        if (isWin(x, y))
        {
            winView();
            break;
        }

        flag++;//切换玩家
    }
}