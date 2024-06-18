@class NSNumber;

@interface MTRAccessControlClusterTarget : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *deviceType;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
