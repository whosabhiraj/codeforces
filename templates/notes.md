### Buffering output so it prints output all at once
> ```ios_base::sync_with_stdio(false);```

This turns off the sync between C-style and C++ style I/O systems, which ensures they are in intended order, if we're using both systems at once. Since we never intend on using C-style I/O, this is safe to do and results in a faster input. 

> ```cin.tie(NULL);```

Every time we use cin after a cout, the I/O buffer is flushed by default because usually that means you're using cout to promt a cin. Since the codeforces judge enters a well-formatted input every time and doesn't need promting, we can turn this flushing off so cout buffer holds onto output. Assuming the function executes as intended and exits using return 0, all the buffers are flushed as a part of program termination &mdash; resulting in cout to print all at once. 

> ```fixed << setprecision(n)```

setprecision() sets number of significant digits that represent given number. Using fixed we control how many decimals appear after the decimal point (fixed precision).