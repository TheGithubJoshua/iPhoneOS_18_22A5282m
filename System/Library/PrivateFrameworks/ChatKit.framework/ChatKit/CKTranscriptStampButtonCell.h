@class UIButton;

@interface CKTranscriptStampButtonCell : CKTranscriptStampCell

@property (readonly, nonatomic) UIButton *stampButton;

+ (id)reuseIdentifier;
+ (id)createStampTextView;

- (id)attributedText;
- (void)setAttributedText:(id)a0;

@end
