@class EAGLContext, CADisplayLink, NSObject;
@protocol TSDGLLayerContext, TSDGLLayerDelegate;

@interface TSDGLLayer : CAEAGLLayer {
    id<TSDGLLayerContext> _layerContext;
    BOOL _setNeedsDisplay;
    BOOL _wasSharedContextCreated;
    CADisplayLink *_displayLink;
}

@property NSObject<TSDGLLayerDelegate> *delegate;
@property (nonatomic) EAGLContext *sharedContext;

- (void)pauseAnimation;
- (void)startAnimation;
- (void)resumeAnimation;
- (void)displayAtCurrentLayerTime;
- (void)p_drawFrameFromDisplayLink:(id)a0;
- (void)unlock;
- (void)teardown;
- (void)lock;
- (void)stopAnimation;
- (void)dealloc;
- (void)p_drawFrameAtLayerTime:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isOpaque:(BOOL)a1 delegate:(id)a2 sharedContext:(id)a3 isWideGamut:(BOOL)a4;
- (void)setCurrentContext;

@end
