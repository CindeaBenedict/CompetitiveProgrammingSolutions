static string MinLexSwap(string s)
{
    int n = s.size(), i, occur[26], leftOccur[26];

    memset(occur, -1, sizeof(occur));
    memset(leftOccur, -1, sizeof(leftOccur));

    for(i = n - 1; i >= 0; i--) {
        int chI = s[i] - 'a';
        leftOccur[chI] = i;

        if(occur[chI] == -1)
            occur[chI] = i;
    }

    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());

    if(s.compare(sorted_s) == 0) {
        int p1 = -1, p2 = -1;

        for(i = 25; i >= 0; i--) {
            if(p1 == -1 && leftOccur[i] != -1) {
                p1 = leftOccur[i];
            }
            else if(p2 == -1 && occur[i] != -1) {
                p2 = occur[i];
                break;
            }
        }
        swap(s[p1], s[p2]);
    } else
        for(i = 0; i < n; i++) {
            if(s[i] != sorted_s[i]) {
                int chI = sorted_s[i] - 'a';
                int last_occ = occur[chI];

                swap(s[i], s[last_occ]);

                break;
            }
        }

    return s;
}