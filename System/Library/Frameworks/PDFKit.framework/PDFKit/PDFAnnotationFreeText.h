@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (id)initWithCoder:(id)a0;
- (void)setAlignment:(long long)a0;
- (long long)alignment;
- (id)font;
- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFont:(id)a0;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
