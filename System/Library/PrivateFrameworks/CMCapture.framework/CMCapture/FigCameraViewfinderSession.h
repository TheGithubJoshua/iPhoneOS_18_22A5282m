@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}

- (id)init;
- (void)openPreviewStreamWithOptions:(id)a0;
- (void)closePreviewStream;
- (void)dealloc;

@end
