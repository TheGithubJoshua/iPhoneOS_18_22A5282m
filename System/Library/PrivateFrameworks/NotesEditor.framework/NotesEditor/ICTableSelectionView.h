@protocol ICTableSelectionDelegate;

@interface ICTableSelectionView : UIView

@property (weak, nonatomic) id<ICTableSelectionDelegate> delegate;
@property (nonatomic) BOOL shouldAvoidResigningFirstResponder;

- (void)toggleBoldface:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)toggleItalics:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)toggleUnderline:(id)a0;
- (id)preferredTintColor;
- (void)strikethrough:(id)a0;
- (void)addColumnRight:(id)a0;
- (void)addColumnLeft:(id)a0;
- (void)addRowDown:(id)a0;
- (void)addRowUp:(id)a0;
- (void)deletePressed:(id)a0;
- (void)updateAccentColor;
- (void)updateForAccessibilityDarkerSystemColors:(id)a0;

@end
