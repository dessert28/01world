#include <iostream>
#include <string>

using namespace std;

int main() {
    int lower = 1;
    int upper = 99;

    while (true)
	{
        int mid = lower + (upper - lower) / 2;
        cout << "程序猜测的数字是：" << mid << endl;
            string feedback;
            cin >> feedback;
            if (feedback == "太大")
			{
                upper = mid - 1;
            }
			else if (feedback == "太小")
			{
                lower = mid + 1;
            }
            else if(feedback=="正确")
            {
            	cout << "恭喜，我猜对了！" << endl;
            break;
			}
			else
			{
                cout << "无效的反馈，请重新输入。" << endl;
                continue;
            }
    }

    return 0;
}

