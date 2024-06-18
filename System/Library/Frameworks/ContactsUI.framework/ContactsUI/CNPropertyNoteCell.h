@class UILabel, UITextView;

@interface CNPropertyNoteCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (retain, nonatomic) UITextView *textView;

+ (BOOL)shouldIndentWhileEditing;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setProperty:(id)a0;
- (id)labelView;
- (void)setAllowsEditing:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)allowsCellSelection;
- (BOOL)displaysCellSelectionState;
- (void)performDefaultAction;
- (void)setValueTextAttributes:(id)a0;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)supportsTintColorValue;
- (void)textViewChanged:(id)a0;
- (void)textViewEditingDidEnd:(id)a0;
- (id)valueView;
- (double)valueViewBottomMargin;

@end
