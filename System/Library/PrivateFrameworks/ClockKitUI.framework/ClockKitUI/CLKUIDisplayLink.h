@class CADisplayLink;

@interface CLKUIDisplayLink : CLKUIRenderFrequencyLink {
    CADisplayLink *_displayLink;
}

- (void)updateCoordinator;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
