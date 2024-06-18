@class NSString, CALayer, AVConferencePreview, PGPictureInPictureProxy;

@interface RPPGPipViewController : UIViewController <AVConferencePreviewClientDelegate, PGPictureInPictureProxyDelegate> {
    CALayer *_previewLayer;
    AVConferencePreview *_preview;
    PGPictureInPictureProxy *_pegasusProxy;
    BOOL _isRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didStartPreview;
- (void)setupPreview;
- (void)didPausePreview;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)a0 reason:(long long)a1;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didStopPreview;
- (void)startPipSession;
- (id)cameraWithPosition:(long long)a0;
- (void)layoutPreviewLayer;
- (void)stopPipSession;
- (void)updateViewGeometry;

@end
