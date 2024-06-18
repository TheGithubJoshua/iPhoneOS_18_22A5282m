@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithHighlightUUIDs:(id)a0;

@end
