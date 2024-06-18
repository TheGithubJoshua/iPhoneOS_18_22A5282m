@protocol BSInvalidatable;

@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) long long location;
@property (readonly, nonatomic) id<BSInvalidatable> displayLayoutAssertion;

- (unsigned long long)level;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (long long)_displayLayoutElementLevel;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;

@end
