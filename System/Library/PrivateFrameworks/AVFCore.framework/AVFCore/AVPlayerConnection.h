@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)description;
- (id)playerItem;
- (id)error;
- (void)dealloc;
- (id)player;
- (void)removeItemFromPlayQueue;

@end
