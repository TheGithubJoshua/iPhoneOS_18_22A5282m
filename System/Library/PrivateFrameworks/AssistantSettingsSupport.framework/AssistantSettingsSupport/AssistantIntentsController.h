@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate>

@property (retain, nonatomic) NSArray *intentsSpecifiers;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accesssForSpecifier:(id)a0;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)a0;
- (void)tccPreferencesChanged;
- (void)viewDidTapLearnMore:(id)a0;

@end
