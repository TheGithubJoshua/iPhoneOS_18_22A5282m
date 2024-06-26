@class CCVegaAccessibilityHelper, NSString, NSArray, JSManagedValue, CALayer, NSMutableDictionary, NSDictionary, JSContext, CCVegaRenderer;

@interface CCVegaCARenderer : NSObject <CCVegaCARendererDelegateInterface> {
    CCVegaRenderer *_renderer;
    BOOL _updateFromBackground;
    NSDictionary *_marks;
    CALayer *_rootLayer;
    CALayer *_contentLayer;
    BOOL _initialized;
    double _width;
    double _height;
    struct CGSize { double width; double height; } _containerSize;
    double _originX;
    double _originY;
    BOOL _dirty;
    BOOL _dirtyAll;
    BOOL _pendingUpdate;
    BOOL _pendingUpdateDirtyAll;
    NSMutableDictionary *_imageCache;
    CCVegaAccessibilityHelper *_accessibilityHelper;
    struct CGPoint { double x; double y; } _currentTranslate;
}

@property (weak) JSContext *context;
@property (weak) CALayer *rootLayer;
@property struct CGSize { double width; double height; } containerSize;
@property (retain) NSArray *accessibilityElements;
@property (retain) JSManagedValue *scenegraphRoot;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } _currentCombinedCTM;
@property (retain) NSString *backgroundColor;
@property double pixelRatio;
@property double zoomFactor;

- (void)invalidateCaches;
- (void)dirty;
- (void).cxx_destruct;
- (void)dealloc;
- (void)render:(id)a0;
- (id)marks;
- (void)applyClip:(id)a0 onLayer:(id)a1;
- (void)callFromJSFunction:(id /* block */)a0;
- (id)compositingFilterForItem:(id)a0;
- (void)dirtyAll;
- (void)drawMark:(id)a0 parentGroup:(id)a1 into:(id)a2 dirtyAll:(BOOL)a3;
- (id)drawMark:(id)a0 parentGroup:(id)a1 item:(id)a2 into:(id)a3 dirtyAll:(BOOL)a4;
- (id)fontOptions;
- (id)initWithRenderer:(id)a0 context:(id)a1 rootLayer:(id)a2 updateFromBackground:(BOOL)a3;
- (struct CGColor { } *)newColorFromCSSString:(id)a0;
- (struct CGColor { } *)newColorFromCSSString:(id)a0 alpha:(double)a1;
- (struct CGImage { } *)newImageFromURL:(id)a0;
- (void)resizeWidth:(double)a0 height:(double)a1 originX:(double)a2 originY:(double)a3;
- (void)updateCALayers;
- (void)updateCALayers:(id)a0 dirtyAll:(BOOL)a1;

@end
