@class PKIdentityHeroViewConfiguration;

@interface PKIdentityHeroViewController : PKExplanationViewController {
    PKIdentityHeroViewConfiguration *_configuration;
}

@property (copy, nonatomic) id /* block */ primaryButtonClickedBlock;
@property (copy, nonatomic) id /* block */ secondaryButtonClickedBlock;

- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)primaryButtonClicked:(id)a0;
- (void)secondaryButtonClicked:(id)a0;

@end
