@class NSString;

@interface _SBFluidSwitcherSystemApertureSuppressionAssertion : NSObject <BSInvalidatable> {
    BOOL _isValid;
    NSString *_sceneID;
    NSString *_bundleID;
    id /* block */ _invalidationBlock;
}

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSceneID:(id)a0 bundleID:(id)a1 invalidationBlock:(id /* block */)a2;

@end
