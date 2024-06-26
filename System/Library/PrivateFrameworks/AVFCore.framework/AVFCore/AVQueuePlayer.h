@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (id)queuePlayerWithItems:(id)a0;
+ (void)initialize;

- (id)items;
- (void)removeItem:(id)a0;
- (id)init;
- (void)removeAllItems;
- (void)dealloc;
- (id)initWithItems:(id)a0;
- (void)advanceToNextItem;
- (void)setActionAtItemEnd:(long long)a0;
- (long long)_defaultActionAtItemEnd;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)insertItem:(id)a0 afterItem:(id)a1;

@end
