@class NSArray, UIDeferredMenuElement, NSString;

@interface CNActionMenuHelper : NSObject

@property (retain, nonatomic) NSArray *currentMenuItems;
@property (retain, nonatomic) NSArray *displayedMenuItems;
@property (nonatomic) BOOL isMenuDisplayed;
@property (retain, nonatomic) UIDeferredMenuElement *deferredMenuItem;
@property (copy, nonatomic) id /* block */ deferredMenuElementCompletionBlock;
@property (retain, nonatomic) NSString *menuTitle;

- (void)updateVisibleMenuWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;
- (id /* block */)menuProviderWithActionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)configurationActionProviderWithActionBlock:(id /* block */)a0;
- (void)willDisplayMenuWithContextMenuInteraction:(id)a0;
- (void)replaceDeferredMenuItemWithMenuItems:(id)a0;
- (id)targetedPreviewForSourceView:(id)a0;
- (void)setupDeferredMenuItem;
- (void)willDismissMenu;
- (id)menuForProviders;
- (void)updateWithMenuItems:(id)a0 contextMenuInteraction:(id)a1;

@end
