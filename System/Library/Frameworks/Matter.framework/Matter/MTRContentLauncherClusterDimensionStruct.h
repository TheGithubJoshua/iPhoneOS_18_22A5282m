@class NSNumber;

@interface MTRContentLauncherClusterDimensionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSNumber *metric;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
