@class NSNumber;

@interface OBBoldTrayButton : OBTrayButton

@property (retain, nonatomic) NSNumber *buttonStateRequiredHeight;

+ (id)boldButton;

- (void)updateConfiguration;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)tintColorDidChange;
- (void)showsBusyIndicator;
- (id)boldConfiguration;
- (void)hidesBusyIndicator;

@end
