@class NSString, SBWindowScene;

@interface _SBDefaultSceneEntityFrameProvider : NSObject <SBLayoutStateTransitionSceneEntityFrameProvider>

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneEntityFrameForWorkspaceEntity:(id)a0 inLayoutState:(id)a1;

@end
