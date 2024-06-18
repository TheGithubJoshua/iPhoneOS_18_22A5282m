@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    void *_embeddingRef;
    struct __CFLocale { } *_locale;
    BOOL _localeIsGerman;
}

- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2 locale:(id)a3;
- (id)dumpWordEmbeddingTable;
- (BOOL)isInsertedWithWord:(id)a0;
- (void)clear;
- (void)finalizze;
- (id)wordEmbeddingsForToken:(id)a0;
- (id)wordEmbeddingVersion;
- (void).cxx_destruct;
- (void)insertWord:(id)a0 synonyms:(id)a1;
- (id)matchesForToken:(id)a0;
- (void)cacheWritableStatements;
- (void)removeWord:(id)a0;
- (void)cacheSearchableStatements;

@end
