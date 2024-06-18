@class UIControl;

@interface PSControlTableCell : PSTableCell {
    UIControl *_control;
}

@property (retain, nonatomic) UIControl *control;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)valueLabel;
- (id)controlValue;
- (void)setCellEnabled:(BOOL)a0;
- (void)controlChanged:(id)a0;
- (id)newControl;

@end
