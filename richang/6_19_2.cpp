#include <iostream>
#include <string>

using namespace std;

int main() {
    int lower = 1;
    int upper = 99;

    while (true)
	{
        int mid = lower + (upper - lower) / 2;
        cout << "����²�������ǣ�" << mid << endl;
            string feedback;
            cin >> feedback;
            if (feedback == "̫��")
			{
                upper = mid - 1;
            }
			else if (feedback == "̫С")
			{
                lower = mid + 1;
            }
            else if(feedback=="��ȷ")
            {
            	cout << "��ϲ���Ҳ¶��ˣ�" << endl;
            break;
			}
			else
			{
                cout << "��Ч�ķ��������������롣" << endl;
                continue;
            }
    }

    return 0;
}

