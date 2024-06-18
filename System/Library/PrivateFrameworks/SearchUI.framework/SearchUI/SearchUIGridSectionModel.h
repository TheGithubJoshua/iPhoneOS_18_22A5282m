@interface SearchUIGridSectionModel : SearchUISectionModel

@property unsigned long long numberOfColumns;

- (id)overriddenAccessibilityIdentifier;
- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (BOOL)needsHorizontalNavigation;
- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)a0;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;

@end
