@class NSDictionary;

@interface PTCinematographyStreamOptions : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, setter=_setSnapshotPolicy:) unsigned long long _snapshotPolicy;
@property (nonatomic, setter=_setOverrideFrameSnapshotPolicy:) BOOL _overrideFrameSnapshotPolicy;
@property unsigned long long version;
@property struct CGSize { double width; double height; } fixedFocusNormalizedRectSize;
@property (copy) NSDictionary *cinematographyParameters;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0;

@end
