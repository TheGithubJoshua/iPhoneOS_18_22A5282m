@class UIEditMenuInteraction;

@interface PSGSWCopyLabel : UILabel

@property (retain, nonatomic) UIEditMenuInteraction *editMenuInteraction;

- (id)initWithCoder:(id)a0;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didLongPress:(id)a0;

@end
