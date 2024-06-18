@class NSString, UITextView;

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) NSString *string;
@property (weak, nonatomic) UITextView *textView;

- (void)loadView;
- (id)initWithString:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)preferredContentMode;
- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)a0;

@end
