@interface TPControl : UIControl

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled;
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)updateConstraints;
- (void)updateFonts;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateConstraintsConstants;
- (void)loadConstraints;
- (void)unloadConstraints;

@end
