@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)init;
- (id)rangeAtIndex:(unsigned long long)a0;
- (void)addRange:(id)a0;
- (id)rules;
- (unsigned long long)ruleCount;
- (void).cxx_destruct;
- (id)description;
- (void)addRule:(id)a0;
- (unsigned long long)rangeCount;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end
