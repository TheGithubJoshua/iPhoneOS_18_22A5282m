@class UILabel;

@interface CNGeminiPickerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (id)labelView;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setText:(id)a0 detailText:(id)a1;
- (id)valueView;

@end
