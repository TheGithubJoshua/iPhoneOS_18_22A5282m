@class NSString, OADTableStyle, NSArray;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProperties;

- (void)setStyle:(id)a0;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)effects;
- (id)style;
- (void)setEffects:(id)a0;
- (BOOL)rightToLeft;
- (BOOL)hasEffects;
- (BOOL)firstColumn;
- (BOOL)bandRow;
- (BOOL)lastRow;
- (void)setFirstColumn:(BOOL)a0;
- (void)setRightToLeft:(BOOL)a0;
- (BOOL)bandColumn;
- (BOOL)firstRow;
- (BOOL)hasBandsNormalToDir:(int)a0;
- (BOOL)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;
- (BOOL)lastColumn;
- (void)setBandColumn:(BOOL)a0;
- (void)setBandRow:(BOOL)a0;
- (void)setFirstRow:(BOOL)a0;
- (void)setLastColumn:(BOOL)a0;
- (void)setLastRow:(BOOL)a0;

@end
