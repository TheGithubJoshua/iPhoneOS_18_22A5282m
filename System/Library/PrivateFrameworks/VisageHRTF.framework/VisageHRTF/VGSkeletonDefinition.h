@class NSArray;

@interface VGSkeletonDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long jointCount;
@property (nonatomic) long long rootJointIndex;
@property (retain, nonatomic) NSArray *parentChildOrder;
@property (nonatomic) int skeletonType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end