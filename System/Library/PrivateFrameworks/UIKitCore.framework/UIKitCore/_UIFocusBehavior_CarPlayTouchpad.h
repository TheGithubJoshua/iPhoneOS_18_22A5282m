@interface _UIFocusBehavior_CarPlayTouchpad : _UIFocusBehavior_CarPlay

+ (id)sharedInstance;

- (BOOL)supportsIndirectPanningMovement;
- (BOOL)refinesIndexBarTargetContentOffset;
- (BOOL)shouldEnableFocusOnSelect;

@end