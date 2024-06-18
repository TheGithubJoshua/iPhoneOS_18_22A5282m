@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (BOOL)isEmpty;
- (id)string;
- (void).cxx_destruct;
- (void)setString:(id)a0;
- (id)description;
- (void)appendString:(id)a0;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (BOOL)binaryWriterContentFlag;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)setPropertiesForDocument;

@end
