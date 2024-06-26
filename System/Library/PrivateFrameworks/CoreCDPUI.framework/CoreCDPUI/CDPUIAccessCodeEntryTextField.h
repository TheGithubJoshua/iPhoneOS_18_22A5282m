@class NSString, UITextView, NSSet;
@protocol CDPUIAccessCodeEntryTextFieldDelegate;

@interface CDPUIAccessCodeEntryTextField : UITextView <UITextViewDelegate> {
    NSSet *_separatorLocations;
    NSSet *_separatorDeleteLocations;
}

@property (class, readonly, nonatomic) unsigned long long accessKeyCharacterCount;
@property (class, readonly, nonatomic) unsigned long long wrappingKeyCharacterCount;

@property (retain, nonatomic) UITextView *placeholderTextView;
@property (copy, nonatomic) NSString *placeholder;
@property (weak, nonatomic) id<CDPUIAccessCodeEntryTextFieldDelegate> accessCodeInputDelegate;
@property (readonly) BOOL isComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasText;
- (id)viewForLastBaselineLayout;
- (BOOL)enablesReturnKeyAutomatically;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (void)setTextAlignment:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;
- (unsigned long long)_numberOfSeparators;
- (void)updatePlaceholderVisibility;
- (void)_handleMultiCharacterStringInput:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_sanitizeInputString:(id)a0;
- (unsigned long long)_totalCharacterLimit;
- (void)setupSeparatorLocations;

@end
