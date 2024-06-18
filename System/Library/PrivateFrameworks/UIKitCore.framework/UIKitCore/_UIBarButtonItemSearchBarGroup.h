@class UISearchBar, UIBarButtonItem;

@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup {
    BOOL _hadRepresentativeItemBeforeMovingToProvisionalState;
    BOOL _disabledExpansion;
    double _contextualExpandedPadding;
    BOOL _providesRestingMeasurementValues;
    UIBarButtonItem *_searchItem;
    UISearchBar *_searchBar;
    UIBarButtonItem *_searchIconItem;
}

- (void)setBarButtonItems:(id)a0;
- (void).cxx_destruct;
- (double)_contextualExpandedPadding;
- (void)setRepresentativeItem:(id)a0;
- (BOOL)_disabledExpansion;
- (BOOL)_isCritical;
- (void)setHidden:(BOOL)a0;
- (id)initWithBarButtonItems:(id)a0 representativeItem:(id)a1;

@end
