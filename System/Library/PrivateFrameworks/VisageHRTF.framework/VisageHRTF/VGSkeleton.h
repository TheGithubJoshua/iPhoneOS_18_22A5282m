@class NSArray, VGSkeletonDefinition;

@interface VGSkeleton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int skeletonType;
@property (retain, nonatomic) VGSkeletonDefinition *skeletonDefinition;
@property (retain, nonatomic) NSArray *localPoses;
@property (retain, nonatomic) NSArray *modelPoses;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } rootTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } floorAlignedRootTransform;
@property (retain, nonatomic) NSArray *jointConfidence;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
