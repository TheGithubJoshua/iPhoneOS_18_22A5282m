@class NSString;

@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *autoAssetClientName;
@property (retain, nonatomic) NSString *lockReason;

- (id)initWithCoder:(id)a0;
- (id)initFromClientLockReasonKey:(id)a0;
- (id)initForClientName:(id)a0 forLockReason:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newSummaryDictionary;

@end
