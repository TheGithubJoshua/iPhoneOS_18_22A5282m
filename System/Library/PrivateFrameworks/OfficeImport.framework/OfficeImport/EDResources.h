@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection, EDStylesCollection;

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)links;
- (id)fonts;
- (void)setColors:(id)a0;
- (id)colors;
- (id)styles;
- (id)names;
- (void).cxx_destruct;
- (id)description;
- (id)border;
- (id)strings;
- (id)borders;
- (id)themes;
- (void)setThemes:(id)a0;
- (id)alignmentInfos;
- (id)contentFormats;
- (id)differentialStyles;
- (id)fills;
- (id)initWithStringOptimization:(BOOL)a0;
- (id)tableStyles;

@end
