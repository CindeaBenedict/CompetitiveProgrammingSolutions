int DistinctLetters(string s, int L, int U)
{
    int n = s.length(), res = 0, cnt[26], i, j;

    for(i = 0; i < n; i++) {
        int dist_count = 0;

        memset(cnt, 0, sizeof(cnt));

        for(j = i; j < n; j++) {
            if(cnt[s[j] - 'a'] == 0)
                dist_count++;

            cnt[s[j] - 'a']++;

            if (dist_count <= U and dist_count >= L)
                res++;

            if(dist_count > U)
                break;
        }
    }

    return res;
}
