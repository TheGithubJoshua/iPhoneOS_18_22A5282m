@interface _KeypadButton : UIButton

@property (readonly, nonatomic) long long keyType;
@property (readonly, nonatomic) unsigned long long digit;

- (void)setHighlighted:(BOOL)a0;
- (void)_updateBackgroundColor;
- (id)initWithDigit:(unsigned long long)a0 target:(id)a1;
- (id)initWithKeyType:(long long)a0 digit:(unsigned long long)a1 target:(id)a2;
- (id)initWithKeyType:(long long)a0 target:(id)a1;

@end
