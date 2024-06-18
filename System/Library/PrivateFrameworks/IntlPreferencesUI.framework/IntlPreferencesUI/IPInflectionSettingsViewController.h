@class _NSAttributedStringGrammarInflection;
@protocol IPInflectionSettingsViewControllerDelegate;

@interface IPInflectionSettingsViewController : PSListController

@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection;
@property BOOL canShareInflection;
@property (weak, nonatomic) id<IPInflectionSettingsViewControllerDelegate> delegate;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setThirdPartyCanAccessUserInflection:(id)a0 specifier:(id)a1;
- (id)thirdPartyCanAccessUserInflection;

@end
