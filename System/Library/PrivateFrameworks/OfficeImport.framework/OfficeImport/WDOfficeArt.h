@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)imageData;
- (BOOL)isFloating;
- (void)setFloating:(BOOL)a0;
- (id)imageName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParagraph:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (int)runType;
- (void)checkForFloating:(id)a0;
- (void)clearDrawable;
- (id)imageBlipRef;
- (BOOL)isDrawableOverridden;
- (id)overrideDrawable;
- (void)propagateTextTypeToDrawables;
- (void)setImageBlipRef:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;

@end
