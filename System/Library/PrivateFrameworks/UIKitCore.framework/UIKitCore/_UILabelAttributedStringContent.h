@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSAttributedString *_attributedString;
}

- (BOOL)isEqualToString:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (id)attributedString;
- (BOOL)isWidthVariant;
- (id)attributedStringContent;
- (id)initWithAttributedString:(id)a0 defaultAttributes:(id)a1;
- (BOOL)isAttributed;
- (unsigned long long)hash;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)string;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (void).cxx_destruct;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentWithString:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)defaultValueForAttribute:(id)a0;
- (long long)length;
- (BOOL)isNil;

@end
