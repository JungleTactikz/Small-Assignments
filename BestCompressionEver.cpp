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

    
    uint64_t n,b,s=1,i=1;
    cin>>n>>b;
    for(;i++<=b;s|=(s<<1));
    cout<<(s<n?"no\n":"yes\n");
    return 0;
}
