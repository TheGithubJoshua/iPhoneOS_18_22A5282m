@class UIView;

@interface PSSliderTableCell : PSControlTableCell {
    UIView *_disabledView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)setValue:(id)a0;
- (id)titleLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)controlValue;
- (void)_configureLayout;
- (id)newControl;

@end
