@class NSNumber;

@interface MTRTimeSynchronizationClusterDstOffsetType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validStarting;
@property (copy, nonatomic) NSNumber *validUntil;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
