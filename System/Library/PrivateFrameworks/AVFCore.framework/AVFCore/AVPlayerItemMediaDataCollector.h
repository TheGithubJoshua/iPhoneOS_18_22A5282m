@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)init;
- (id)_weakReference;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;
- (void)dealloc;

@end
