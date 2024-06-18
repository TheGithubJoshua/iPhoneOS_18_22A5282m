@class SBStatusBarReusePool, NSString, UIStatusBar;

@interface SBStatusBarContainer : NSObject <BSDescriptionProviding>

@property (weak, nonatomic) UIStatusBar *statusBar;
@property (weak, nonatomic) SBStatusBarReusePool *reusePool;
@property (retain, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
