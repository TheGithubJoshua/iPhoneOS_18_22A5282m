@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
