@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (void)setProperties:(id)a0;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (id)properties;
- (id)plainText;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (unsigned long long)paragraphCount;
- (id)addParagraph;
- (void)addParagraphsFromTextBody:(id)a0;
- (void)applyTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0 ownTextListStyle:(BOOL)a1;
- (id)findFirstTextRunOfClass:(Class)a0;
- (id)firstParagraphEffects;
- (void)flattenProperties;
- (BOOL)isSimilarToTextBody:(id)a0;
- (unsigned long long)newLineCount;
- (unsigned long long)nonEmptyParagraphCount;
- (id)overrideTextListStyle;
- (BOOL)propagateActualTextStyleToTextListStyle;
- (void)removeAllParagraphs;
- (void)removeLastParagraphIfEmpty;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (id)textListStyle;

@end
