@class OADTheme, OADTextListStyle, PDPresentation, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}

@property (readonly, weak, nonatomic) PDPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *slideLayouts;
@property (nonatomic) BOOL headerPlaceholderIsVisible;
@property (nonatomic) BOOL footerPlaceholderIsVisible;
@property (nonatomic) BOOL slideNumberPlaceholderIsVisible;
@property (nonatomic) BOOL dateTimePlaceholderIsVisible;

- (id)colorScheme;
- (id)theme;
- (id)colorMap;
- (id)titleTextStyle;
- (id)defaultTheme;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPresentation:(id)a0;
- (void)setTitleTextStyle:(id)a0;
- (id)bodyTextStyle;
- (void)setBodyTextStyle:(id)a0;
- (id)parentSlideBase;
- (void)addSlideLayout:(id)a0;
- (void)doneWithContent;
- (id)addSlideLayout;
- (id)defaultTextListStyle;
- (id)drawingTheme;
- (id)fontScheme;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)otherTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (void)removeUnnecessaryOverrides;
- (void)setOtherTextStyle:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayoutAtIndex:(unsigned long long)a0;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutOfType:(int)a0;
- (id)styleMatrix;

@end
