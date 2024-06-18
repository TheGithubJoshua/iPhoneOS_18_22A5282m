@class NSNumber;

@interface MTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *updatedAt;
@property (copy, nonatomic) NSNumber *position;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
