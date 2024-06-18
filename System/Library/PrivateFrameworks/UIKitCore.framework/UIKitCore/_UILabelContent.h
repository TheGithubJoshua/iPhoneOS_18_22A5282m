@class NSDictionary;

@interface _UILabelContent : NSObject <NSCopying> {
    NSDictionary *_defaultAttributes;
}

- (id)defaultAttributes;
- (BOOL)isEqualToString:(id)a0;
- (id)shadow;
- (BOOL)isEqualToAttributedString:(id)a0;
- (id)contentByApplyingAttributeToEntireRange:(id)a0 value:(id)a1;
- (id)attributedString;
- (BOOL)isWidthVariant;
- (id)attributedStringContent;
- (id)font;
- (id)backgroundColor;
- (id)contentByAddingAttributesToDefaultAttributes:(id)a0;
- (id)widthVariantContentForView:(id)a0;
- (BOOL)isAttributed;
- (id)initWithDefaultAttributes:(id)a0;
- (id)paragraphStyle;
- (id)textColor;
- (id)contentWithDefaultAttributes:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)string;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)a0;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (void).cxx_destruct;
- (long long)differenceVersusContent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentWithString:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)defaultValueForAttribute:(id)a0;
- (long long)length;
- (BOOL)isNil;
- (id)contentByAddingAttribute:(id)a0 toDefaultAttributesWithValue:(id)a1;

@end
