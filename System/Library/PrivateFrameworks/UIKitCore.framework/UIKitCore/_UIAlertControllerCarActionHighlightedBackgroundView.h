@class NSString;

@interface _UIAlertControllerCarActionHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)setPressed:(BOOL)a0;
- (void)setCornerRadius:(double)a0;
- (void)tintColorDidChange;
- (void)setRoundedCornerPosition:(unsigned long long)a0;

@end
