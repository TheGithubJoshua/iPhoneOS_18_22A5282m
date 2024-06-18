@class NSString;

@interface _UILabelStringContent : _UILabelContent {
    NSString *_string;
    struct { unsigned char isWidthVariant : 1; } _flags;
}

- (BOOL)isEqualToString:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (id)attributedString;
- (BOOL)isWidthVariant;
- (id)attributedStringContent;
- (BOOL)isAttributed;
- (unsigned long long)hash;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentWithString:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (id)initWithString:(id)a0 defaultAttributes:(id)a1;
- (long long)length;
- (BOOL)isNil;

@end
