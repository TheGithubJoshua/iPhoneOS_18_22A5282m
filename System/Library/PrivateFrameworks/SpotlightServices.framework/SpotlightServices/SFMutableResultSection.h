@class NSString, SPGroupHeadingResult, NSMutableOrderedSet, NSArray, NSNumber;

@interface SFMutableResultSection : SFResultSection

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSMutableOrderedSet *resultSet;
@property (retain, nonatomic) SPGroupHeadingResult *headerResult;
@property BOOL doNotFold;
@property (nonatomic) unsigned int domain;
@property BOOL pinToTop;
@property (retain, nonatomic) NSString *relatedSectionBundleIdentifier;
@property (retain, nonatomic) NSArray *hiddenExtResults;
@property int source;
@property (retain, nonatomic) NSString *sourceDomain;
@property (retain, nonatomic) NSString *resultSetIdentifier;
@property (nonatomic) BOOL serialized;
@property (nonatomic) BOOL isGlanceCategory;

+ (BOOL)supportsSecureCoding;
+ (id)mutableSectionWithBundleId:(id)a0;

- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)initWithCoder:(id)a0;
- (void)sortRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (void)addResults:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)initWithSection:(id)a0;
- (void)addHiddenExtResult:(id)a0;
- (void)setResults:(id)a0;
- (void)replaceResultsAtIndex:(unsigned long long)a0 withResults:(id)a1;
- (id)copy;
- (id)initWithPrototype:(id)a0;
- (void)sortUsingComparator:(id /* block */)a0;
- (void)moveResultsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)addResults:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableDeepCopy;
- (void).cxx_destruct;
- (id)description;
- (id)objectForFeedbackWithResultsArray:(id)a0;
- (void)propagateGroupIDToResults;
- (void)removeResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfResult:(id)a0;
- (void)removeResultsInArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeResultsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeResults:(id)a0;
- (void)copyAndSetResults:(id)a0;
- (id)objectForFeedback;
- (id)results;
- (id)initWithResultSection:(id)a0;
- (void)addResultsFromArray:(id)a0;
- (id)copySectionRemovingResults:(id)a0;

@end
