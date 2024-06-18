@class NSString, CLKUIRenderFrequencyLink, CLKUIQuadView;

@interface CLKUIQuadViewRenderCoordinator : NSObject <CLKUIRenderCoordinator> {
    CLKUIQuadView *_quadView;
    CLKUIRenderFrequencyLink *_renderFrequencyLink;
}

@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (double)timestamp;
- (void)_renderLinkFired:(id)a0;
- (id)initWithQuadView:(id)a0 synchronizeWithClockTimer:(BOOL)a1;

@end
