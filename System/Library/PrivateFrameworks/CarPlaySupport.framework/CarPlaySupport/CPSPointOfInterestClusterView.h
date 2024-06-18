@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)_configure;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)update;
- (void)setAnnotation:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
