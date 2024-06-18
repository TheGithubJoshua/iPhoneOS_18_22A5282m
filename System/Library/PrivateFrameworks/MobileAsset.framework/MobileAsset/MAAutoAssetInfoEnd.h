@class NSString;

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;

@end
