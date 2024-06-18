@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (void)setStringValue:(id)a0;
- (id)fieldName;
- (void)setFieldName:(id)a0;
- (id)defaultStringValue;
- (id)document;
- (void)setButtonType:(long long)a0;
- (void)commonInit;
- (long long)buttonType;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (int)fieldType;
- (void)setDocument:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAnnotation:(id)a0;
- (BOOL)_isRedacted;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)clearDictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (struct __CFDictionary { } *)dictionaryRef;
- (id)initWithFormDictionary:(struct CGPDFDictionary { } *)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setFieldType:(int)a0;
- (void)setWriteDefaultValue:(BOOL)a0;
- (BOOL)writeDefaultValue;

@end
