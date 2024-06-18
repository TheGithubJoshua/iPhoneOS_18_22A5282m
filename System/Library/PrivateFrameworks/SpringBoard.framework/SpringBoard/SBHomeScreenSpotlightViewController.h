@protocol SBHomeScreenSpotlightDismissalDelegate, BSInvalidatable;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, weak, nonatomic) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (unsigned long long)level;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;

@end
