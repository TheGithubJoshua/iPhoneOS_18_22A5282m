@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {
    PDFActionNamedPrivateVars *_private2;
}

@property (nonatomic) long long name;

- (void)commonInit;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(long long)a0;
- (id)toolTip;
- (void)addNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
