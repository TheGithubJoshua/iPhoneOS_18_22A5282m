@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {
    UIColor *_errorColor;
}

@property (nonatomic) BOOL hasError;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;

@end
