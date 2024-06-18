@class UILabel, MUEdgeLayout, MUScrollableSegmentedPickerCategory;

@interface MUScrollableSegmentedPickerSegmentView : UIControl {
    UILabel *_label;
    MUEdgeLayout *_edgeLayout;
}

@property (retain, nonatomic) MUScrollableSegmentedPickerCategory *viewModel;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateFont;
- (void)_updateAppearance;
- (void)_setupLabel;
- (void)_updateSelectionAppearance;

@end
