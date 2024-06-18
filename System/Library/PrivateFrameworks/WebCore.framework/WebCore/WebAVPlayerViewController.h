@class NSString;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>, WTF::DefaultRefDerefTraits<WTF::ThreadSafeWeakPtrControlBlock<WebCore::VideoFullscreenInterfaceAVKit>>> { void *m_ptr; } m_controlBlock; } _fullscreenInterface;
    struct RetainPtr<AVPlayerViewController> { void *m_ptr; } _avPlayerViewController;
    struct RetainPtr<NSTimer> { void *m_ptr; } _startPictureInPictureTimer;
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> { id m_weakReference; } _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (id)view;
- (BOOL)showsPlaybackControls;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPlayerController:(id)a0;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureActive;
- (void)setShowsPlaybackControls:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeFromParentViewController;
- (void)dealloc;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPictureInPicture;
- (void)setAllowsPictureInPicturePlayback:(BOOL)a0;
- (void)stopPictureInPicture;
- (void)flashPlaybackControlsWithDuration:(double)a0;
- (void)removeObserver;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (BOOL)pictureInPictureActive;
- (id)avPlayerViewController;
- (void)initObserver;
- (id)initWithFullscreenInterface:(void *)a0;
- (BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)a0;
- (void)tryToStartPictureInPicture;

@end
