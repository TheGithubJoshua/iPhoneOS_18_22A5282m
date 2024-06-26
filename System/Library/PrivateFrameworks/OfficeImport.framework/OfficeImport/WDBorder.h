@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (BOOL)shadow;
- (id)init;
- (void)setStyle:(int)a0;
- (void)setWidth:(unsigned char)a0;
- (void)setFrame:(BOOL)a0;
- (unsigned char)width;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setColor:(id)a0;
- (void)setBorder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (int)style;
- (BOOL)frame;
- (unsigned char)space;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
