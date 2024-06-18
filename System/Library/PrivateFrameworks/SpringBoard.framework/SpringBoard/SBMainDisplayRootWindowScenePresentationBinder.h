@class UIWindowScene, NSMutableArray, SBRootSceneWindow;

@interface SBMainDisplayRootWindowScenePresentationBinder : SBRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (readonly, nonatomic) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (void)_reconnectToRenderServer;
- (id)_init;
- (id)assertDisconnectionFromRenderServerForReason:(id)a0;
- (void)_disconnectFromRenderServer;
- (void).cxx_destruct;

@end
