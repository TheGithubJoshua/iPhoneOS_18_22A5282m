@class CADisplayLink;

@interface WKDisplayLinkHandler : NSObject {
    void *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)displayLinkFired:(id)a0;
- (void)pause;
- (void)schedule;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDrawingAreaProxy:(void *)a0;

@end
