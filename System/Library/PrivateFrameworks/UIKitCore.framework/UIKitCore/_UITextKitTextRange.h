@class _UITextKitTextPosition, NSTextRange;

@interface _UITextKitTextRange : UITextRange <NSCopying>

@property (retain, nonatomic) _UITextKitTextPosition *start;
@property (retain, nonatomic) _UITextKitTextPosition *end;
@property (retain, nonatomic) NSTextRange *textKit2Range;

+ (id)rangeWithStart:(id)a0 end:(id)a1;
+ (id)rangeWithTextContentManager:(id)a0 textRange:(id)a1 affinity:(long long)a2;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)init;
- (BOOL)isEmpty;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
