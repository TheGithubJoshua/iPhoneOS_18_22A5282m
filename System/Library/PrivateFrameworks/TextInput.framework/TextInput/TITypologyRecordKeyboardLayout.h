@class TIKeyboardLayout, NSString;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord

@property (retain, nonatomic) TIKeyboardLayout *keyboardLayout;
@property (copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
