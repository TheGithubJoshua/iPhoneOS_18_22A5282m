@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validAt;
@property (copy, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
