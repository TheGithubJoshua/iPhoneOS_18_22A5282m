@class RMUIConfigurationInterface;

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface;

- (id)specifiers;
- (id)initWithAccount:(id)a0;
- (id)_passcodeSpecifier;
- (void).cxx_destruct;
- (id)initWithMDMProfileIdentifier:(id)a0;
- (id)specifiersReloadedNotificationName;
- (id)_accountSpecifiers;
- (id)_profileSpecifiers;
- (id)_isActivatedProfileText:(id)a0;

@end
