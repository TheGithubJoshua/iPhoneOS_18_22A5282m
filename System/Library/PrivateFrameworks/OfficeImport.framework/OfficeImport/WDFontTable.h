@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (id)init;
- (void)clear;
- (id)fontAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)fontWithName:(id)a0;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (unsigned long long)indexOfFont:(id)a0;

@end
