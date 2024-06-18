@class CALayer;

@interface SCNUIKitSource : SCNImageSource {
    CALayer *_uiWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}

@property (retain, nonatomic) id uiView;
@property (retain, nonatomic) id uiWindow;

- (id)init;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)prepareWindowIfNeeded;
- (BOOL)supportsMetal;
- (id)textureSource;

@end
