@class UIColor, NSString, NSDictionary, PDFAppearanceCharacteristicsPrivate;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {
    PDFAppearanceCharacteristicsPrivate *_private;
}

@property (nonatomic) long long controlType;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) long long rotation;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *rolloverCaption;
@property (copy, nonatomic) NSString *downCaption;
@property (readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;

- (struct CGPDFForm { } *)icon;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addColor:(id)a0 forKey:(struct __CFString { } *)a1 toDictionaryRef:(struct __CFDictionary { } *)a2;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forControlType:(long long)a1;
- (BOOL)scaleProportional;

@end
