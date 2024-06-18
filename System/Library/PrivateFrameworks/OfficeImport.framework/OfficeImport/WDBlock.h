@class WDText;

@interface WDBlock : NSObject {
    WDText *mText;
}

- (id)init;
- (id)document;
- (id)text;
- (BOOL)isEmpty;
- (id)description;
- (id)initWithText:(id)a0;
- (void)clearProperties;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (int)textType;

@end
