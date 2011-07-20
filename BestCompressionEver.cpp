#include<iostream>
#include<stdint.h>
#include<limits.h>
#include<math.h>

using namespace std;

// For debugging:
// 0: No debugging - ready for submission
// 1: Input test files are read (and output
//    files are written to).
// 2: In addition to (1), debugging information
//    is written to standard output.
#ifndef ONLINE_JUDGE
#define DEBUG 1
#endif

// Don't change anything from here...
#ifdef ONLINE_JUDGE
#define DEBUG 0
#endif

#if DEBUG > 1
#define dout cout
#else
#define dout 0 && cout
#endif

#if DEBUG > 0
#include<cstdio>
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#else
#define read(file)
#define write(file)
#endif
// ...to here, unless you know what you're doing.

int main()
{
    // The test input file
    read("input.txt");
    //write("output.txt");
    // The test output file�
    //write("out.txt");

    // Form�lan er (uint64_t)pow(2.0, ((float)b+1)) - 3, en fer � einhverja steik me� risat�lur, ��tt �g s� � 64bita �rgj...
    // �annig �g bj� til �essa h�r fyrir ne�an, einnig vir�ist �essi a�fer� vera �rl�ti� hra�virkari en a� nota form�luna(mi�a� vi� 1000000 keyrslur � r��)

    // Setjum s = 1 � byrjun, loopum svo jafn oft og bitarnir eru (gefnir � inntakinu) margir, bitwise OR svo s vi� sj�lft sig bit-shifta� um 1
    // ef s er minna en n � lokin �� gengur �a� sem vi� fengum � inntakinu ekki upp.

    /*
        D�mi fyrir 13 3
        0001
        0010
         ---
        0011
        0110
         ---
        0111
        1110
        ----
        1111 = 15

        Getum svo dregi� 2 fr� til a� f� n�kv�ma lausn, 15 - 2 = 13
        A� sleppa �v� a� draga 2 fr� hefur �� engin �hrif � �ttaki�
    */

    uint64_t n,b,s=1,i=1;
    cin>>n>>b;
    for(;i++<=b;s|=(s<<1));
    cout<<(s<n?"no\n":"yes\n");
    return 0;
}
