@interface AppStoreKitInternal.PlaybackCoordinator : NSObject {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ visibilityTracker;
    void /* unknown type, empty encoding */ playableViews;
    void /* unknown type, empty encoding */ visiblePlayableIds;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ playbackCoalescingWaitTime;
    void /* unknown type, empty encoding */ playbackWorkItem;
}

- (void)didEnterBackground;
- (id)init;
- (void)willEnterForeground;
- (void).cxx_destruct;

@end
