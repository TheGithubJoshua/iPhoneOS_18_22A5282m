@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (id)background;
- (id)init;
- (id)foreground;
- (void)setStyle:(int)a0;
- (void)setBackground:(id)a0;
- (void)setForeground:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)style;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
