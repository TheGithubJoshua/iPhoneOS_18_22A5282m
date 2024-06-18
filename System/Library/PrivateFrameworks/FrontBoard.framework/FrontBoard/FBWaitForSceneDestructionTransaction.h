@class FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidInvalidate:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)_begin;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScene:(id)a0;

@end
