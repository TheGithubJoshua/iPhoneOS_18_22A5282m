@class NSString, EDResources, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phoneticInfoWithResources:(id)a0;

- (void)setType:(int)a0;
- (id)font;
- (id)string;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFont:(id)a0;
- (void)appendString:(id)a0;
- (int)type;
- (unsigned long long)fontIndex;
- (void)setFontIndex:(unsigned long long)a0;
- (id)initWithResources:(id)a0;
- (void)prependString:(id)a0;
- (int)align;
- (void)setAlign:(int)a0;
- (void)setDoNotModify:(BOOL)a0;
- (BOOL)isEqualToEDPhoneticInfo:(id)a0;
- (id)runs;

@end
