@interface MenstrualCyclesAppPlugin.CalendarViewLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ numberOfDaysPerWeek;
    void /* unknown type, empty encoding */ overlays;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;
@property (class, nonatomic, readonly) Class invalidationContextClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void).cxx_destruct;

@end
