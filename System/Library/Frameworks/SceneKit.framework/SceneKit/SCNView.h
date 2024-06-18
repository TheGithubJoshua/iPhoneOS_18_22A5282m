@class AVAudioEngine, EAGLContext, MTLRenderPassDescriptor, SCNDisplayLink, SCNJitterer, SCNNode, SCNRecursiveLock, SCNCameraController, CALayer, AVAudioEnvironmentNode, UIColor, NSString, SCNSpriteKitEventHandler, SCNTechnique, NSArray, SKScene, SCNScene, SCNRenderer;
@protocol SCNCameraControlConfiguration, MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, SCNEventHandler, MTLCommandQueue;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {
    double _currentSystemTime;
    double _lastUpdate;
    NSString *__ibSceneName;
    unsigned long long __ibPreferredRenderingAPI;
    unsigned char _ibNoMultisampling : 1;
    unsigned long long _renderingAPI;
    unsigned char _isOpaque : 1;
    unsigned char _rendersContinuously : 1;
    unsigned char _firstDrawDone : 1;
    unsigned char _drawOnMainThreadPending : 1;
    unsigned char _viewIsOffscreen : 1;
    unsigned char _appChangedColorAppearance : 1;
    unsigned char _appIsDeactivated : 1;
    unsigned char _autoPausedScene : 1;
    unsigned char _inRenderQueueForLayerBackedGLRendering : 1;
    unsigned char _disableLinearRendering : 1;
    unsigned char _isInLiveResize : 1;
    BOOL _isHidden;
    BOOL _didTriggerRedrawWhileRendering;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    BOOL _displayLinkCreationRequested;
    BOOL _skipFramesIfNoDrawableAvailable;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    CALayer *_backingLayer;
    SCNJitterer *_jitterer;
    SCNRecursiveLock *_lock;
    UIColor *_backgroundColor;
    struct CGSize { double width; double height; } _boundsSize;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    id<SCNEventHandler> _navigationCameraController;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    id<MTLDevice> _device;
    NSArray *_controllerGestureRecognizers;
}

@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) BOOL rendersContinuously;
@property (nonatomic) BOOL allowsCameraControl;
@property (readonly, nonatomic) id<SCNCameraControlConfiguration> cameraControlConfiguration;
@property (readonly, nonatomic) SCNCameraController *defaultCameraController;
@property (nonatomic) long long preferredFramesPerSecond;
@property (retain, nonatomic) EAGLContext *eaglContext;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (nonatomic) BOOL usesReverseZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) SCNTechnique *technique;

+ (Class)layerClass;
+ (BOOL)lowLatency;
+ (id)_kvoKeysForwardedToRenderer;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)_isMetalSupported;
+ (id)currentUIFocusEnvironment;
+ (id)deviceForOptions:(id)a0;
+ (BOOL)displayLinkCallbackShouldReturnImmediately;
+ (BOOL)displayLinkPolicy;
+ (unsigned long long)renderingAPIForOptions:(id)a0;
+ (BOOL)shouldObserveApplicationStateToPreventBackgroundGPUAccess;
+ (BOOL)usesSeparateWorkGroup;

- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)pointOfCulling;
- (void)_drawAtTime:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (void)SCN_displayLinkCallback:(double)a0;
- (BOOL)isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1;
- (id)init;
- (id)renderer;
- (void)setContentScaleFactor:(double)a0;
- (BOOL)_controlsOwnScaleFactor;
- (void)_jitterRedisplay;
- (BOOL)prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (BOOL)scn_inLiveResize;
- (BOOL)_canJitter;
- (void)prepareObjects:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_authoringEnvironment;
- (BOOL)_supportsJitteringSyncRedraw;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop:(id)a0;
- (struct SCNVector4 { float x0; float x1; float x2; float x3; })_viewport;
- (struct SCNVector3 { float x0; float x1; float x2; })unprojectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)displayLayer:(id)a0;
- (void)play:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_systemTimeAnimationStarted:(id)a0;
- (void)setDisplayLink:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)eventHandler;
- (id)displayLink;
- (void)setPointOfCulling:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setNeedsDisplay;
- (id)snapshot;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scn_backingLayer;
- (struct SCNVector3 { float x0; float x1; float x2; })projectPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)_enterBackground:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)setEventHandler:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)unlock;
- (void)pause:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (BOOL)_showsAuthoringEnvironment;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)pauseDisplayLink;
- (void)lock;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 toPoint:(struct SCNVector3 { float x0; float x1; float x2; })a1 options:(id)a2;
- (id)nodesInsideFrustumWithPointOfView:(id)a0;
- (void)set_showsAuthoringEnvironment:(BOOL)a0;
- (void)layoutSubviews;
- (void)_enterForeground:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)isOpaque;
- (void)setHidden:(BOOL)a0;
- (void)_sceneDidUpdate:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)presentScene:(id)a0 withTransition:(id)a1 incomingPointOfView:(id)a2 completionHandler:(id /* block */)a3;
- (void)resumeDisplayLink;
- (id)_defaultBackgroundColor;
- (long long)_preferredFocusMovementStyle;
- (void)_updateOpacity;
- (id)_renderingQueue;
- (void)updateAtTime:(double)a0;
- (id)_focusedItemRegionContainer;
- (unsigned long long)_renderOptions;
- (struct CGSize { double x0; double x1; })_updateBackingSize;
- (void)set_enableARMode:(BOOL)a0;
- (void)set_wantsSceneRendererDelegationMessages:(BOOL)a0;
- (double)_flipY:(double)a0;
- (void)_selectRenderingAPIWithOptions:(id)a0;
- (void)_addGPUFramePresentedHandler:(id /* block */)a0;
- (void)set_commandBufferStatusMonitor:(id)a0;
- (void)_backgroundDidChange;
- (const void *)__CFObject;
- (void)_addGPUFrameCompletedHandler:(id /* block */)a0;
- (void)_addGPUFrameScheduledHandler:(id /* block */)a0;
- (void)_adjustBackingLayerPixelFormat;
- (void)setIbSceneName:(id)a0;
- (BOOL)skipFramesIfNoDrawableAvailable;
- (id)_commandBufferStatusMonitor;
- (void)_commonInit:(id)a0;
- (void)_createDisplayLinkIfNeeded;
- (BOOL)_disableLinearRendering;
- (BOOL)_enableARMode;
- (BOOL)_enablesDeferredShading;
- (void)_flushDisplayLink;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusFrameForSCNNode:(id)a0;
- (id)_getFocusableNodes;
- (int)_ibPreferredRenderingAPI;
- (id)_ibSceneName;
- (BOOL)_ibWantsMultisampling;
- (void)_initializeDisplayLinkWithScreen:(id)a0 policy:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isEditor;
- (double)_renderThreadPriority;
- (void)_resetContentsScaleFactor;
- (id)_resourceManagerMonitor;
- (double)_runFPSTestWithDuration:(double)a0;
- (void)_scnUpdateContentsGravity;
- (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })_screenTransform;
- (void)_setNeedsDisplay;
- (BOOL)_shouldDelegateARCompositing;
- (double)_superSamplingFactor;
- (void)_updateContentsScaleFactor;
- (void)_updateProbes:(id)a0 withProgress:(id)a1;
- (BOOL)_wantsSceneRendererDelegationMessages;
- (BOOL)asynchronousResizing;
- (struct CGSize { double x0; double x1; })backingSizeForBoundSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)drawableResizesAsynchronously;
- (void)eventHandlerWantsRedraw;
- (int)ibPreferredRenderingAPI;
- (id)ibSceneName;
- (BOOL)ibWantsMultisampling;
- (id)navigationCameraController;
- (void)scn_setBackingLayer:(id)a0;
- (void)scn_setGestureRecognizers:(id)a0;
- (void)scn_updateGestureRecognizers;
- (void)setAsynchronousResizing:(BOOL)a0;
- (void)setDrawableResizesAsynchronously:(BOOL)a0;
- (void)setIbPreferredRenderingAPI:(int)a0;
- (void)setIbWantsMultisampling:(BOOL)a0;
- (void)setNavigationCameraController:(id)a0;
- (void)setPointOfView:(id)a0 animate:(BOOL)a1;
- (void)setSkipFramesIfNoDrawableAvailable:(BOOL)a0;
- (void)set_disableLinearRendering:(BOOL)a0;
- (void)set_enablesDeferredShading:(BOOL)a0;
- (void)set_ibPreferredRenderingAPI:(int)a0;
- (void)set_ibSceneName:(id)a0;
- (void)set_ibWantsMultisampling:(BOOL)a0;
- (void)set_renderOptions:(unsigned long long)a0;
- (void)set_resourceManagerMonitor:(id)a0;
- (void)set_screenTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (void)set_shouldDelegateARCompositing:(BOOL)a0;
- (void)set_superSamplingFactor:(double)a0;
- (void)switchToCameraNamed:(id)a0;
- (void)switchToNextCamera;

@end