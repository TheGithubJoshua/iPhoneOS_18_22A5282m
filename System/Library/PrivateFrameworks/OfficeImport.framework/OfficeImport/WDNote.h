@class WDText, WDCharacterRun;

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (id)text;
- (void).cxx_destruct;
- (id)description;
- (id)reference;
- (int)runType;
- (BOOL)automaticNumbering;
- (id)initWithParagraph:(id)a0 footnote:(BOOL)a1;
- (void)setAutomaticNumbering:(BOOL)a0;

@end
