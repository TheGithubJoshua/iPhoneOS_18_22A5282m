@class NSString, _UIScenePresenterOwner, _UIScenePresentationView, UIView, FBScene, UIScenePresentationContext;
@protocol UIScenePresentation, _UIComparable, NSCopying;

@interface _UIScenePresenter : NSObject <BSDescriptionProviding, UIScenePresenter> {
    _UIScenePresenterOwner *_owner;
    NSString *_identifier;
    BOOL _invalidated;
    _UIScenePresentationView *_view;
}

@property (nonatomic) double _initializeTime;
@property (nonatomic, getter=isActive) BOOL enabled;
@property (nonatomic, getter=isHosting) BOOL hosting;
@property (nonatomic, getter=isVisibilityPropagationEnabled) BOOL visibilityPropagationEnabled;
@property (readonly, copy, nonatomic) id<NSCopying, _UIComparable> sortContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) UIScenePresentationContext *presentationContext;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)newSnapshotPresentationView;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)compare:(id)a0;
- (id)succinctDescription;
- (void)activate;
- (void)deactivate;
- (id)newSnapshotContext;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)newSnapshot;
- (id)initWithOwner:(id)a0 identifier:(id)a1 sortContext:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)modifyPresentationContext:(id /* block */)a0;

@end
