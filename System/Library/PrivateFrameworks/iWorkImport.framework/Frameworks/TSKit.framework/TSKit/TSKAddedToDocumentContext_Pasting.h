@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)autoUpdateSmartFields;
- (BOOL)syncChanges;
- (BOOL)wasPasted;
- (BOOL)uniqueSmartFields;
- (void)addDrawable:(id)a0;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;

@end
