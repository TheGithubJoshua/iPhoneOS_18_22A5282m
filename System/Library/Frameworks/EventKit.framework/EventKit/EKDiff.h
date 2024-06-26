@class NSSet, NSDictionary, EKObject;

@interface EKDiff : NSObject

@property (retain, nonatomic) EKObject *firstObject;
@property (retain, nonatomic) EKObject *secondObject;
@property (nonatomic) int result;
@property (retain, nonatomic) NSSet *differentIdentityKeys;
@property (retain, nonatomic) NSSet *differentImmutableKeys;
@property (retain, nonatomic) NSSet *differentSingleValueKeys;
@property (retain, nonatomic) NSSet *differentRelationshipSingleValueKeys;
@property (retain, nonatomic) NSSet *differentRelationshipMultiValueKeys;
@property (retain, nonatomic) NSDictionary *relationshipMultiValueAdds;
@property (retain, nonatomic) NSDictionary *relationshipMultiValueRemoves;
@property (retain, nonatomic) NSDictionary *relationshipMultiValueModifies;
@property (retain, nonatomic) NSDictionary *relationshipSingleValueModifies;

+ (id)_addChangeStarIfChangedKey:(id)a0 onObject:(id)a1;
+ (void)_addObject:(id)a0 forKey:(id)a1 toDiff:(id)a2;
+ (void)_addPaddedHeaderToMutableString:(id)a0 forKey:(id)a1 withDepth:(long long)a2;
+ (void)_addSummaryWithDepth:(long long)a0 toMutableString:(id)a1 forRelationshipMultiValueKeys:(id)a2 firstObject:(id)a3 secondObject:(id)a4;
+ (void)_addSummaryWithDepth:(long long)a0 toMutableString:(id)a1 forRelationshipSingleValueKeys:(id)a2 firstObject:(id)a3 secondObject:(id)a4;
+ (void)_addSummaryWithDepth:(long long)a0 toMutableString:(id)a1 forSingleValueKeys:(id)a2 firstObject:(id)a3 secondObject:(id)a4;
+ (id)_indentStringAtDepth:(long long)a0;
+ (id)_keysToIgnoreForComputingDiff;
+ (void)_populateIdentityKeysForDiff:(id)a0;
+ (void)_populateImmutableKeysForDiff:(id)a0;
+ (void)_populateMultiValueRelationshipKeysForDiff:(id)a0;
+ (void)_populateSingleValueKeysForDiff:(id)a0;
+ (void)_populateSingleValueRelationshipKeysForDiff:(id)a0;
+ (id)_summaryKeyForMultiValueChange:(id)a0 ofPropertyKey:(id)a1;
+ (id)diffBetweenObject:(id)a0 andObject:(id)a1;
+ (id)summaryKeyForChangedProperty:(id)a0 subProperty:(id)a1;
+ (id)summaryKeyForMultiValueAddOfPropertyKey:(id)a0;
+ (id)summaryKeyForMultiValueModifyOfPropertyKey:(id)a0;
+ (id)summaryKeyForMultiValueRemoveOfPropertyKey:(id)a0;

- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;
- (void).cxx_destruct;
- (id)summaryString;
- (id)_multiValueModifiedObjectsForKey:(id)a0;
- (id)_nonNilObject;
- (void)_summarizeDiffsBetweenFirstObject:(id)a0 secondObject:(id)a1 mutableString:(id)a2 depth:(long long)a3;
- (id)changeSetForDiff;
- (id)copyOfObject:(id)a0 alreadyCopiedObjects:(id)a1 madeNewCopy:(BOOL *)a2;
- (id)differentKeys;
- (id)summaryDictionary;

@end
