@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)font;
- (void).cxx_destruct;
- (id)description;
- (void)setFont:(id)a0;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
