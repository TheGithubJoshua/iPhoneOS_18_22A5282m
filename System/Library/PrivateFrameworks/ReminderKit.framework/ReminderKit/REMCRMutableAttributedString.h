@class NSArray, NSSet, NSMutableAttributedString;
@protocol REMCRMutableAttributedStringEditObserver;

@interface REMCRMutableAttributedString : NSMutableAttributedString

@property (class, readonly, nonatomic) NSArray *nonEditableAttributes;
@property (class, readonly, nonatomic) NSSet *allowedAttributesForModel;

@property (retain, nonatomic) NSMutableAttributedString *backingStore;
@property (weak, nonatomic) id<REMCRMutableAttributedStringEditObserver> editObserver;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithBackingStore:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (id)string;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportDidEdit:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;

@end
