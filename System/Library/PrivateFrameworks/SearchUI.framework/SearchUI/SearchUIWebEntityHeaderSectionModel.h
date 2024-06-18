@interface SearchUIWebEntityHeaderSectionModel : SearchUISectionModel

- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;
- (struct CGSize { double x0; double x1; })heroCardAbsoluteSize;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })heroItemInsets;
- (double)outerGroupInterItemSpacing;

@end
