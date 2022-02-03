#include <iostream>
int main()
{
    int year, answer, thousand, tens, hundred, ones, flag;
    cin >> year;
    thousand = (year / 1000);
    hundred = (year / 100);
    tens = (year / 10);
    ones = (year - (1000 * thousand + 100 * hundred + 10 * tens));
    int code[4] = {thousand, hundred, tens, ones};
    for (int i = year + 1; i <= 9000; i++)
    {
        flag = 0;
        answer = i;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (code[i] == code[j])
                {
                    flag++;
                    break;
                }
            }

            if (!flag)
                break;
        }

        if (flag)
    }

    return 0;
}
