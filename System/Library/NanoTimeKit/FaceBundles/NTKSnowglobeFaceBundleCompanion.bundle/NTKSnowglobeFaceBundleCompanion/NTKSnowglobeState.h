@class NTKSnowglobeColors;

@interface NTKSnowglobeState : NSObject <NSCopying>

@property (readonly, nonatomic) NTKSnowglobeColors *palette;
@property (readonly, nonatomic) unsigned long long tritiumState;
@property (readonly, nonatomic) double tritiumFraction;
@property (readonly, nonatomic) double backgroundObjectOpacity;
@property (readonly, nonatomic) BOOL idealizedState;
@property (readonly, nonatomic) BOOL editing;

- (id)init;
- (void).cxx_destruct;
- (double)parallaxMultiplier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)scenePaused;
- (BOOL)shouldBeInIdealizedState;
- (id)withBackgroundObjectOpacity:(double)a0;
- (id)withIdealizedState:(BOOL)a0 editing:(BOOL)a1;
- (id)withPalette:(id)a0;
- (id)withTritiumState:(unsigned long long)a0 fraction:(double)a1;

@end
