@class NSSet, TIImageCacheClient, NSMutableSet, _UIActionWhenIdle;

@interface UIKeyboardCache : NSObject {
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
}

@property (retain, nonatomic) _UIActionWhenIdle *idleAction;

+ (BOOL)enabled;
+ (id)sharedInstance;

- (void)purge;
- (id)init;
- (struct CGImage { } *)cachedImageForKey:(id)a0 fromLayout:(id)a1;
- (void)_didIdle;
- (void)_didIdleAndShouldWait;
- (struct CGImage { } *)cachedCompositeImageForCacheKeys:(id)a0 fromLayout:(id)a1 opacities:(id)a2;
- (void)incrementExpectedRender:(id)a0;
- (void).cxx_destruct;
- (void)decrementExpectedRender:(id)a0;
- (id)displayImagesForView:(id)a0 fromLayout:(id)a1 imageFlags:(id)a2;
- (void)drawCachedImage:(id)a0 alpha:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)clearNonPersistentCache;
- (id)uniqueLayoutsFromInputModes:(id)a0;
- (void)commitTransaction;
- (void)dealloc;
- (void)updateCacheForInputModes:(id)a0;

@end
