@interface SBFTraitsSettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) double zOrderLevel;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithZOrderLevelSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToZOrderLevelSettings:(id)a0;
- (id)initWithZOrderLevel:(double)a0;

@end
