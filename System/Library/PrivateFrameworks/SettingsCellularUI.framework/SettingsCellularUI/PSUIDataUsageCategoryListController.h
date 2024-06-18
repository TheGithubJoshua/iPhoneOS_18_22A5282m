@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;
@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier;

- (id)specifiers;
- (id)init;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;

@end
