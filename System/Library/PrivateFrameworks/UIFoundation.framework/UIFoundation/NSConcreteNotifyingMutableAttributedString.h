@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {
    id _delegate;
}

+ (Class)_mutableStringClass;

- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)setDelegate:(id)a0;
- (void)endEditing;
- (id)delegate;
- (void)beginEditing;

@end
