@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (unsigned int)flags;
- (int)unit;
- (void)setUnit:(int)a0;
- (void)setFlags:(unsigned int)a0;
- (id)name;
- (void)setSize:(float)a0;
- (void).cxx_destruct;
- (float)size;
- (void)setName:(id)a0;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
