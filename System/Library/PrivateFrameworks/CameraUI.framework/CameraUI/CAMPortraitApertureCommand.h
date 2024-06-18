@interface CAMPortraitApertureCommand : CAMCaptureCommand

@property (readonly, nonatomic) double aperture;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithAperture:(double)a0;

@end