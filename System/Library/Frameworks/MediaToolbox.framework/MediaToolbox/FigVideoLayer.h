@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)a0;

- (id)init;
- (id)layerDisplayName;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)notificationBarrier;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (id)initWithLayer:(id)a0;
- (BOOL)isVideoLayerBeingServiced;
- (void)dealloc;
- (id)actionForKey:(id)a0;

@end
