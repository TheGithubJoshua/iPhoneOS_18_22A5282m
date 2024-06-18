@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;
@property (readonly, nonatomic) NSSet *moments;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMoments:(id)a0;
- (unsigned long long)type;
- (id)initWithMomentUUIDs:(id)a0;

@end
