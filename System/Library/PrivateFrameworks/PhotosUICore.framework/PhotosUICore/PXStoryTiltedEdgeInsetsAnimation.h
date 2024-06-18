@interface PXStoryTiltedEdgeInsetsAnimation : PXStoryValueAnimation

@property (readonly, nonatomic) struct { struct { double preRotationInset; double rotationAngle; double postRotationInset; } top; struct { double preRotationInset; double rotationAngle; double postRotationInset; } left; struct { double preRotationInset; double rotationAngle; double postRotationInset; } bottom; struct { double preRotationInset; double rotationAngle; double postRotationInset; } right; } sourceEdgeInsets;
@property (readonly, nonatomic) struct { struct { double preRotationInset; double rotationAngle; double postRotationInset; } top; struct { double preRotationInset; double rotationAngle; double postRotationInset; } left; struct { double preRotationInset; double rotationAngle; double postRotationInset; } bottom; struct { double preRotationInset; double rotationAngle; double postRotationInset; } right; } targetEdgeInsets;
@property (readonly, nonatomic) struct { struct { double preRotationInset; double rotationAngle; double postRotationInset; } top; struct { double preRotationInset; double rotationAngle; double postRotationInset; } left; struct { double preRotationInset; double rotationAngle; double postRotationInset; } bottom; struct { double preRotationInset; double rotationAngle; double postRotationInset; } right; } currentEdgeInsets;

- (void)updateCurrentValueWithProgress:(double)a0;
- (id)initWithIdentifier:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 curveInfo:(struct { long long x0; union { double x0; } x1; })a2;
- (id)initWithIdentifier:(id)a0 sourceEdgeInsets:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a1 targetEdgeInsets:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 curveInfo:(struct { long long x0; union { double x0; } x1; })a4;
- (id)initWithSourceEdgeInsets:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a0 targetEdgeInsets:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 curveInfo:(struct { long long x0; union { double x0; } x1; })a3;
- (void)setCurrentEdgeInsets:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; })a0;

@end