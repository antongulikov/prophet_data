#include <iostream>
#include <cstdio>

using namespace std;

const int MaxN = 10, MaxD = 70;
const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1, 0};
const int dy[] = {0, 1, 0, -1, -1, 1, 1, -1, 0};

char mark[MaxD][MaxN][MaxN], temp[MaxN][MaxN];
int n = 8;

inline bool in(int x, int y) {return (x >= 0 && x < n && y >= 0 && y < n);}

bool reached = false; // (0, 7)

void dfs(int currx, int curry, int depth)
{
    if (reached || (mark[depth][currx][curry] == 'S') || depth > 64) return;

    if (currx == 0 && curry == 7)
    {
        reached = true;
        return;
    }

    for (int k = 0; k < 9; k++)
    {
        int x = currx + dx[k], y = curry + dy[k];
        if (in(x, y) && mark[depth][x][y] != 'S') dfs(x, y, depth + 1);
    }
}

int main()
{
    cin.sync_with_stdio(0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            mark[0][i][j] = c;
        }

    for (int t = 1; t < MaxD; t++)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) temp[i][j] = mark[t - 1][i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) if (mark[t - 1][i][j] == 'S')
            {
                temp[i][j] = '.';
                temp[i + 1][j] = 'S';
            }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) mark[t][i][j] = temp[i][j];
    }

    dfs(7, 0, 0);

    if (reached) puts("WIN");
    else puts("LOSE");

    return 0;
}
