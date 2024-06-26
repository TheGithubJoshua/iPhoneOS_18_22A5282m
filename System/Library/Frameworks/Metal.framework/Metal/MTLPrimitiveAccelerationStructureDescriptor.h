@class NSArray;

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

@property (retain, nonatomic) NSArray *geometryDescriptors;
@property (nonatomic) unsigned int motionStartBorderMode;
@property (nonatomic) unsigned int motionEndBorderMode;
@property (nonatomic) float motionStartTime;
@property (nonatomic) float motionEndTime;
@property (nonatomic) unsigned long long motionKeyframeCount;

+ (id)descriptor;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
