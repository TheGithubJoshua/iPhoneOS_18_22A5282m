@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect

@property (copy, nonatomic) NSArray *motionEffects;

- (id)initWithCoder:(id)a0;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
