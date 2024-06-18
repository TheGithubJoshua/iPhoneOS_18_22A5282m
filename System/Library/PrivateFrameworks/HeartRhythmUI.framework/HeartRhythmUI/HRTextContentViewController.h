@class NSString;

@interface HRTextContentViewController : HKViewController

@property (copy, nonatomic) NSString *string;

- (void)loadView;
- (id)initWithString:(id)a0;
- (id)textView;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_attributedStringFromString:(id)a0;

@end
