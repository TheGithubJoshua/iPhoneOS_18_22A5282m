@class NSNumber;

@interface BRServerMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *quotaUsed;
@property (retain, nonatomic) NSNumber *recursiveChildCount;
@property (retain, nonatomic) NSNumber *sharedByMeRecursiveCount;
@property (retain, nonatomic) NSNumber *sharedAliasRecursiveCount;
@property (retain, nonatomic) NSNumber *childCount;

- (id)initWithCoder:(id)a0;
- (id)initWithServerMetrics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;

@end
