@class CNContactInlineActionsViewController;

@interface SearchUIActionsViewBoxView : NUIContainerBoxView

@property (retain) CNContactInlineActionsViewController *actionsViewController;

+ (id)inlineActionsBoxView;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
