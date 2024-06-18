@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (BOOL)disambiguationKeypathHasToMany;
- (id)disambiguatingEntity;
- (void)dealloc;
- (id)disambiguationKeypath;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)generateSQLStringInContext:(id)a0;

@end
