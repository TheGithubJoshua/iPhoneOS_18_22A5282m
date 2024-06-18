@class NSUUID, NSNumber;

@interface CKFrameworkFingerprint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSNumber *cpuType;
@property (copy, nonatomic) NSNumber *cpuSubtype;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLikelyEqual:(id)a0;

@end
