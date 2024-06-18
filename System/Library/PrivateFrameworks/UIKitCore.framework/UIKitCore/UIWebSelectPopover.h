@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebSelectTableViewController *_tableViewController;

- (id)controlView;
- (void)dealloc;
- (void)_userActionDismissedPopover:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLSelectElement:(id)a0 cachedItems:(id)a1 singleSelectionItem:(id)a2 singleSelectionIndex:(unsigned long long)a3 multipleSelection:(BOOL)a4;

@end
