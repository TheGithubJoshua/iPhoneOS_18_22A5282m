@class _PASCFBurstTrie;

@interface PMLLexicon : NSObject {
    _PASCFBurstTrie *_lexicon;
}

+ (BOOL)serializeLexiconToFile:(id)a0 tokenToWordIDDict:(id)a1;

- (id)init;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getTotalEntries;
- (unsigned long long)getWordIDforToken:(id)a0;

@end
