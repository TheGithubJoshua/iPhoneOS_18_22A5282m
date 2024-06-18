@class NSAttributedString, UITextView;

@interface PKLabelViewController : UIViewController {
    UITextView *_textView;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)init;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithAttributedText:(id)a0;

@end
