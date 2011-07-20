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
    // The test output fileð
    //write("out.txt");

    // Formúlan er (uint64_t)pow(2.0, ((float)b+1)) - 3, en fer í einhverja steik með risatölur, þótt ég sé á 64bita örgj...
    // þannig ég bjó til þessa hér fyrir neðan, einnig virðist þessi aðferð vera örlítið hraðvirkari en að nota formúluna(miðað við 1000000 keyrslur í röð)

    // Setjum s = 1 í byrjun, loopum svo jafn oft og bitarnir eru (gefnir í inntakinu) margir, bitwise OR svo s við sjálft sig bit-shiftað um 1
    // ef s er minna en n í lokin þá gengur það sem við fengum í inntakinu ekki upp.

    /*
        Dæmi fyrir 13 3
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

        Getum svo dregið 2 frá til að fá nákvæma lausn, 15 - 2 = 13
        Að sleppa því að draga 2 frá hefur þó engin áhrif á úttakið
    */

    uint64_t n,b,s=1,i=1;
    cin>>n>>b;
    for(;i++<=b;s|=(s<<1));
    cout<<(s<n?"no\n":"yes\n");
    return 0;
}
