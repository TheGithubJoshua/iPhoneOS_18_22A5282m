@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (readonly, copy, nonatomic) CKDOperationMetrics *MMCSMetrics;

- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCloudKitMetrics:(id)a0 andMMCSMetrics:(id)a1;

@end
