@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { double horizontal; double vertical; } _referenceOffset;
    struct CGPoint { double x; double y; } _referenceAcceleration;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } acceleration;

- (id)initWithCoder:(id)a0;
- (id)init;
- (struct UIOffset { double x0; double x1; })acceleratedOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a0 accelerationBoostFactor:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAcceleration:(struct CGPoint { double x0; double x1; })a0 fixingOutputForViewerOffset:(struct UIOffset { double x0; double x1; })a1;
- (void)reset;

@end
