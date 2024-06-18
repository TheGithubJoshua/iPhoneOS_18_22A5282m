@class NSString, CAMSemanticStyleSettingsView;

@interface CAMSemanticStyleSettingsRootController : UIViewController <CAMSemanticStyleSettingsViewDelegate>

@property (readonly, nonatomic) CAMSemanticStyleSettingsView *_settingsView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_dismiss;
- (BOOL)_canShowWhileLocked;
- (void)settingsViewDidDismiss:(id)a0;

@end
