@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *purgeableReason;
@property (nonatomic) long long purgeableType;
@property (nonatomic) long long staticDiskUsage;
@property (copy, nonatomic) NSNumber *storeItemID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diagnosticDescription;

@end
