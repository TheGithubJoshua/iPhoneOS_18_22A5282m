@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *invalidations;

+ (id)emptyResult;

- (id)initWithAssertions:(id)a0 invalidations:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resultCombiningWithResult:(id)a0;

@end
