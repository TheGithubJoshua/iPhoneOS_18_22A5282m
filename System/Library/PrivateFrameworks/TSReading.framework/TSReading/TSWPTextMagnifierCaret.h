@class TSWPRep, NSString, TSWPTextMagnifierTimeWeightedPoint, TSWPTextMagnifierRenderer;

@interface TSWPTextMagnifierCaret : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
}

@property (nonatomic) double yOffset;
@property (retain, nonatomic) TSWPRep *target;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } terminalPoint;
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property (nonatomic) struct CGPoint { double x0; double x1; } magnificationPoint;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) struct CGPoint { double x; double y; } animationPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *underlayImageName;
@property (readonly, nonatomic) NSString *overlayImageName;
@property (readonly, nonatomic) NSString *maskImageName;

+ (id)sharedCaretMagnifier;

- (void)remove;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)zoomUpAnimation;
- (void)stopMagnifying:(BOOL)a0;
- (void)autoscrollWillNotStart;
- (void)postAutoscrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAutoscrollDirections:(int)a0;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (id)initWithDefaultFrame;
- (void)beginMagnifyingTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3;
- (void)drawMagnifierClippedCanvasLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)shouldHideCanvasLayer;

@end
