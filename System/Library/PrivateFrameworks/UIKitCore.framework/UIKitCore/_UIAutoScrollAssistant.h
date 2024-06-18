@class UIScrollView, CADisplayLink;
@protocol _UIAutoScrollBehavior;

@interface _UIAutoScrollAssistant : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGPoint { double x; double y; } referenceContentOffsetForPoint;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) id<_UIAutoScrollBehavior> behavior;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long mode;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) unsigned long long allowedDirections;

- (void)displayLinkFired:(id)a0;
- (id)initWithScrollView:(id)a0;
- (void)stop;
- (void)_adjustPointToCurrentContentOffset;
- (void)_handleAutoScrollerWithContentOffset:(struct CGPoint { double x0; double x1; })a0 direction:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)autoScrollFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setPoint:(struct CGPoint { double x0; double x1; })a0 forContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_scrollContinuous;

@end
