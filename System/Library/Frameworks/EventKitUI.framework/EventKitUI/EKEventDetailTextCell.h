@class UILabel, UITextView, NSString;
@protocol EKEventDetailTextCellDelegate;

@interface EKEventDetailTextCell : EKEventDetailCell {
    UILabel *_textTitleView;
    UITextView *_textView;
    id /* block */ _textFromEventBlock;
    NSString *_title;
    UITextView *_sizingTextView;
}

@property (readonly, nonatomic) BOOL isTruncatingText;
@property (weak, nonatomic) id<EKEventDetailTextCellDelegate> textDelegate;

- (double)_layoutForWidth:(double)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)update;
- (id)_textView;
- (id)_sizingTextView;
- (id)_createNewTextView;
- (id)_textTitleView;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 title:(id)a2 textFromEventBlock:(id /* block */)a3;
- (void)setIsTruncatingText:(BOOL)a0;

@end
