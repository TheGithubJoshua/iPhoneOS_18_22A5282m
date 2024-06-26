@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {
    struct { unsigned short x0[27]; } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (id)initWithSuffixes:(id)a0;
- (void).cxx_destruct;
- (void)addStringToFailedSuffixes:(id)a0;
- (BOOL)insertString:(id)a0 intoTrieWithCache:(struct { struct { unsigned short x0; unsigned short x1; } x0[32]; unsigned long long x1; } *)a1;
- (BOOL)hasSuffix:(id)a0;
- (void)dealloc;

@end
