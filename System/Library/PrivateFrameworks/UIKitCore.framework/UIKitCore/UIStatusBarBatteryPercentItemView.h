@class NSString;

@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {
    NSString *_percentString;
}

- (id)accessibilityHUDRepresentation;
- (long long)textStyle;
- (id)contentsImage;
- (void).cxx_destruct;
- (long long)textAlignment;
- (BOOL)animatesDataChange;
- (double)extraRightPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
