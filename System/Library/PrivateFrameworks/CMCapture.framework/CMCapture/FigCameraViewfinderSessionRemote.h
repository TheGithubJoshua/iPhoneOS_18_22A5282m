@class FigStateMachine;
@protocol FigCameraViewfinderSessionRemoteObject;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}

- (void)openPreviewStreamWithOptions:(id)a0;
- (void)closePreviewStream;
- (void)_clientDisconnectedFromServer;
- (void)_serverDied;
- (id)_initWithRemoteViewfinderSession:(id)a0 delegateStorage:(id)a1;
- (void)dealloc;
- (void)_previewStreamDidCloseWithStatus:(int)a0;
- (void)_previewStreamDidOpen;

@end
