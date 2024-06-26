@class NSString;

@interface NLLexicon : NSObject {
    NSString *_localization;
    const void *_lexicon;
}

@property (readonly, copy) NSString *localization;

+ (id)lexiconWithOptions:(id)a0 error:(id *)a1;

- (struct _LXLexicon { } *)lexicon;
- (id)languages;
- (void).cxx_destruct;
- (id)description;
- (id)language;
- (void)dealloc;
- (id)entryForString:(id)a0;
- (void)_enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (id)entryForTokenID:(unsigned int)a0;
- (void)enumerateCompletionsForPrefix:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (id)initWithLocalization:(id)a0;
- (id)initWithLocalization:(id)a0 error:(id *)a1;
- (long long)lexiconType;

@end
