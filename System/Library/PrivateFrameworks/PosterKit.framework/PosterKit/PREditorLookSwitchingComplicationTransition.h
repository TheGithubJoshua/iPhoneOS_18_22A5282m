@class BSUIVibrancyConfiguration, PREditorRootViewController, CSCachingVibrancyTransitionProvider;

@interface PREditorLookSwitchingComplicationTransition : NSObject

@property (retain, nonatomic) BSUIVibrancyConfiguration *fromVibrancyConfiguration;
@property (retain, nonatomic) BSUIVibrancyConfiguration *toVibrancyConfiguration;
@property (weak, nonatomic) PREditorRootViewController *viewController;
@property (retain, nonatomic) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider;

- (void)updateInteractiveTransition:(double)a0;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)initWithFromVibrancyConfiguration:(id)a0 toVibrancyConfiguration:(id)a1 viewController:(id)a2;
- (id)initWithFromVibrancyConfiguration:(id)a0 toVibrancyConfiguration:(id)a1 viewController:(id)a2 cachingVibrancyTransitionProvider:(id)a3;

@end
