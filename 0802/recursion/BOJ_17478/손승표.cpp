#define MY_LOCAL_TEST

#include <bits/stdc++.h>

using namespace std;

int input;

void PrintBlank(int level)
{
    for(int i = 0; i < 4 * level; i++)
    {
        cout << '_';
    }
}

void recursion(int level)
{
    if(level < input)
    {
        PrintBlank(level);
        cout << "\"����Լ��� ������?\"" << '\n';
        PrintBlank(level);
        cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
        PrintBlank(level);
        cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << '\n';
        PrintBlank(level);
        cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << '\n';
        recursion(level+1);
        PrintBlank(level);
        cout << "��� �亯�Ͽ���." << '\n';
    }
    else if(level == input)
    {
        PrintBlank(level);
        cout << "\"����Լ��� ������?\"" << '\n';
        PrintBlank(level);
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << '\n';
        PrintBlank(level);
        cout << "��� �亯�Ͽ���." << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef MY_LOCAL_TEST
    freopen("input.txt", "r", stdin);
#endif

    cin >> input;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';

    recursion(0);

    return 0;
}