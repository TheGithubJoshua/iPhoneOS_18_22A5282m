@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;

- (void)populateArchivedSubviews:(id)a0;
- (void)_buildDescription:(id)a0;
- (BOOL)hitTestView:(id)a0;
- (void)didChangeFirstResponder;
- (void)removeFromTextField;
- (void)layoutIfNeeded;
- (void)setNeedsDisplay;
- (void)addToTextField:(id)a0;
- (id)overridingSetBackgroundColor:(id)a0;

@end
