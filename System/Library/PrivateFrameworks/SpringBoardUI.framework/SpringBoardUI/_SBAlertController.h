@class SBAlertItem, NSString, NSObject;
@protocol UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
}

@property (weak, nonatomic) SBAlertItem *alertItem;
@property (weak, nonatomic) id<_SBAlertControllerDelegate> alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)_canShowWhileLocked;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_styleProvider;
- (id)initWithStyleProvider:(id)a0;
- (void)setHiddenOnClonedDisplay:(BOOL)a0;

@end
