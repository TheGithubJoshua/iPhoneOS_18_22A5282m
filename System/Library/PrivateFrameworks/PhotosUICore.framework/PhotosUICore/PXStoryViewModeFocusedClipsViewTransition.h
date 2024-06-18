@class NSIndexSet;

@interface PXStoryViewModeFocusedClipsViewTransition : PXStoryViewModeTransition

@property (readonly, nonatomic) NSIndexSet *focusedClipIdentifiers;
@property (readonly, nonatomic) long long trackingClipIdentifier;

- (void).cxx_destruct;
- (struct { double x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })contentsTransformOverrideForClipWithInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0 proposedOverride:(struct { double x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a1 inViewMode:(long long)a2 layout:(id)a3;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })cornerRadiusForClipWithInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0 proposedCornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a1 inViewMode:(long long)a2 layout:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForClipWithInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0 proposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inViewMode:(long long)a2 layout:(id)a3;
- (id)initWithSourceViewMode:(long long)a0 sourceSnapshot:(id)a1 destinationViewMode:(long long)a2 destinationSnapshot:(id)a3 assetReference:(id)a4;
- (id)initWithSourceViewMode:(long long)a0 sourceSnapshot:(id)a1 destinationViewMode:(long long)a2 destinationSnapshot:(id)a3 assetReference:(id)a4 focusedClipIdentifiers:(id)a5 trackingClipIdentifier:(long long)a6;
- (double)zPositionForClipWithInfo:(struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; })a0 proposedZPosition:(double)a1 inViewMode:(long long)a2 layout:(id)a3;

@end