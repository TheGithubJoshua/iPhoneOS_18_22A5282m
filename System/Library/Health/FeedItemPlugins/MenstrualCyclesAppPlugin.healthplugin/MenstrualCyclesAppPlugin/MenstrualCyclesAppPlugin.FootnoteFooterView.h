@interface MenstrualCyclesAppPlugin.FootnoteFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ footerTextView;
    void /* unknown type, empty encoding */ headerSeparator;
    void /* unknown type, empty encoding */ highlightedText;
    void /* unknown type, empty encoding */ tapCompletion;
}

- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithReuseIdentifier:(id)a0;

@end
