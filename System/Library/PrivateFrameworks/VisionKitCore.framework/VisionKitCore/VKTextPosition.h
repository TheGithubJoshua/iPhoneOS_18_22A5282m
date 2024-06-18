@interface VKTextPosition : VKBaseTextPosition

@property (class, readonly, nonatomic) VKTextPosition *zeroPosition;

@property (nonatomic) long long offset;

+ (id)positionWithOffset:(long long)a0;

- (id)summaryDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)positionByAddingOffset:(long long)a0;
- (id)initWithOffset:(long long)a0;

@end
