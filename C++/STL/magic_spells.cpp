

// #include<bits/stdc++.h>
/* Enter your code here. Read input from STDIN. Print output to STDOUT */

if(Fireball *me =dynamic_cast<Fireball*>(spell))
{
    me->revealFirepower();
}
else if(Frostbite *owl = dynamic_cast<Frostbite*>(spell))
{
    owl->revealFrostpower();
}
else if(Thunderstorm *kool = dynamic_cast<Thunderstorm*>(spell))
{
    kool->revealThunderpower();
}
else if( Waterbolt *panda =dynamic_cast<Waterbolt*>(spell))
{
    panda->revealWaterpower();
}


else
    {
        string strA = spell->revealScrollName();
        string strB = SpellJournal::read();
   
    int m = strA.length();
    int n = strB.length();

    vector<vector<int>> 
    vLCSMatrix(m + 1, vector<int>(n + 1));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (strA[i - 1] == strB[j - 1])
            {
                vLCSMatrix[i][j] = 1 + vLCSMatrix[i - 1][j - 1];
            }
            else
            {
                vLCSMatrix[i][j] = max(vLCSMatrix[i - 1][j], vLCSMatrix[i][j - 1]);
            }
        }
    }

     cout << vLCSMatrix[m][n] << endl;
    }

