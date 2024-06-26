@class NSTextContainer, NSLayoutManager, NSTextStorage;

@interface FBKBugFormLabel : UILabel

@property (retain) NSTextStorage *textStorage;
@property (retain) NSLayoutManager *layoutManager;
@property (retain) NSTextContainer *container;

- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_initLabel;

@end
