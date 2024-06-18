@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void)setPresentingDelegate:(id)a0;
- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)valueChanged:(id)a0;
- (double)leftValueMargin;
- (id)firstResponderItem;
- (void)layoutChanged:(id)a0;
- (void)updateWithPropertyItem:(id)a0;
- (id)valueView;
- (id)variableConstraints;

@end
