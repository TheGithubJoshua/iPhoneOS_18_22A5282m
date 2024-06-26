@interface _INVocabularyValidator : NSObject

+ (void)initialize;

- (void)determineIfBundleID:(id)a0 canProvideVocabularyOfType:(long long)a1 completion:(id /* block */)a2;
- (id)_intentsUsingVocabularyType:(long long)a0;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)a0 handlingIntents:(id)a1 completion:(id /* block */)a2;
- (BOOL)_bundleID:(id)a0 isWhitelistedForVocabularyType:(long long)a1;
- (unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)a0;
- (void)_determineIfBundleID:(id)a0 appPath:(id)a1 canProvideVocabularyOfType:(long long)a2 completion:(id /* block */)a3;
- (id)validatedItemsFromVocabularyStrings:(id)a0 ofType:(long long)a1 loggingWarnings:(BOOL)a2;
- (id)_pathToAppWithBundleID:(id)a0;
- (id)validatedItemsFromVocabularySpeakables:(id)a0 ofType:(long long)a1 loggingWarnings:(BOOL)a2;
- (id)_validatedItemsFromVocabularyObject:(id)a0 ofType:(long long)a1 loggingWarnings:(BOOL)a2 withItemFactory:(id /* block */)a3;

@end
