@class PGGraphNode, NSMutableDictionary, NSDictionary;
@protocol PGGraphRelatableEvent;

@interface PGGraphMatchingResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *context;
@property (readonly, nonatomic) PGGraphNode<PGGraphRelatableEvent> *event;
@property (nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *keywords;

+ (id)matchingDescriptionWithEventNode:(id)a0;

- (id)localStartDate;
- (id)localEndDate;
- (unsigned long long)hash;
- (BOOL)isEqualToResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEvent:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_contextItemsSortedByScoreAscending:(BOOL)a0;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)a0;
- (void)addKeywords:(id)a0 forRelatedType:(unsigned long long)a1;
- (void)clearKeywordsForRelatedType:(unsigned long long)a0;
- (id)contextItemForRelatedType:(unsigned long long)a0;
- (void)enumerateContextItems:(id /* block */)a0;
- (id)keywordsForRelatedType:(unsigned long long)a0;
- (void)setContextItem:(id)a0 forRelatedType:(unsigned long long)a1;
- (id)sortedCriteria;

@end
