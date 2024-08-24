/*

Pirnog Theodor Ioan
Colegiul National "B. P. Hasdeu"

*/

#include <fstream>
#include <bitset>
#include <algorithm>
#include <deque>

using namespace std;

class InParser
{
private:
    FILE *fin;
    char *buff;
    int sp;

    char read_ch()
    {
        ++sp;
        if(sp==4096)
        {
            sp=0;
            fread(buff,1,4096,fin);
        }
        return buff[sp];
    }

public:
    InParser(const char* nume)
    {
        fin=fopen(nume,"r");
        buff=new char[4096]();
        sp=4095;
    }

    InParser& operator >> (int &n)
    {
        char c;
        while(!isdigit(c=read_ch())&&c!='-');
        int sgn=1;
        if (c=='-')
        {
            n=0;
            sgn=-1;
        }
        else
        {
            n=c-'0';
        }
        while(isdigit(c=read_ch()))
        {
            n=10*n+c-'0';
        }
        n*=sgn;
        return *this;
    }

    InParser& operator >> (long long &n)
    {
        char c;
        n=0;
        while(!isdigit(c=read_ch())&&c!='-');
        long long sgn=1;
        if(c=='-')
        {
            n=0;
            sgn=-1;
        }
        else
        {
            n=c-'0';
        }
        while(isdigit(c=read_ch()))
        {
            n=10*n+c-'0';
        }
        n*=sgn;
        return *this;
    }
};

class OutParser
{
private:
    FILE *fout;
    char *buff;
    int sp;

    void write_ch(char ch)
    {
        if(sp==50000)
        {
            fwrite(buff,1,50000,fout);
            sp=0;
            buff[sp++]=ch;
        }
        else
        {
            buff[sp++]=ch;
        }
    }

public:
    OutParser(const char* name)
    {
        fout=fopen(name,"w");
        buff=new char[50000]();
        sp=0;
    }
    ~OutParser()
    {
        fwrite(buff,1,sp,fout);
        fclose(fout);
    }

    OutParser& operator <<(int vu32)
    {
        if(vu32<=9)
        {
            write_ch(vu32+'0');
        }
        else
        {
            (*this) <<(vu32/10);
            write_ch(vu32%10+'0');
        }
        return *this;
    }

    OutParser& operator <<(long long vu64)
    {
        if(vu64<=9)
        {
            write_ch(vu64+'0');
        }
        else
        {
            (*this) <<(vu64/10);
            write_ch(vu64%10+'0');
        }
        return *this;
    }

    OutParser& operator <<(char ch)
    {
        write_ch(ch);
        return *this;
    }
    OutParser& operator <<(const char *ch)
    {
        while(*ch)
        {
            write_ch(*ch);
            ++ch;
        }
        return *this;
    }
};

InParser cin("sort4.in");
OutParser cout("sort4.out");

const int NMAX = 1e6;

struct element{

    int sum_cif;
    int prod_cif;
    int val;

};

deque <element> dq[11];
int n, c1, c2, c3;

void task(int x){

    c1 = c2 = 0;
    c3 = 1;

    int cif = 0;
    bitset <11> fr;

    while(x){

        cif = x % 10;

        if(!fr[cif])
            c1++;

        fr[cif] = 1;

        c2 += cif;
        c3 *= cif;

        x /= 10;
    }

}

void read(){

    cin >> n;
    int x = 0;

    for(int i = 0; i < n; i++){

        cin >> x;
        
        task(x);
        dq[c1].push_back({c2, c3, x});

    }

}

bool cmp(element a, element b){

    if(a.sum_cif != b.sum_cif)
        return (a.sum_cif < b.sum_cif);
    else if(a.prod_cif != b.prod_cif)
        return (a.prod_cif < b.prod_cif);
    
    return (a.val < b.val);
}

int main(){

    read();
    
    for(int i = 10; i >= 1; i--){
        if(!dq[i].empty()){

            sort(dq[i].begin(), dq[i].end(), cmp);
            
            for(auto e : dq[i])
                cout << e.val << " ";

        }
    }

}