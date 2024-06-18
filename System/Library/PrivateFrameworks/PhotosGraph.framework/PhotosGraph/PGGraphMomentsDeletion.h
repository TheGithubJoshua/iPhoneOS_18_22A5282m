@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithMomentUUIDs:(id)a0;

@end
