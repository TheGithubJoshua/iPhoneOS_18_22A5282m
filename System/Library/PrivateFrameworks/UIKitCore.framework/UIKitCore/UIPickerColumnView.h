@class UIColor, NSString, UIView, UIPickerTableView, UIPickerView;

@interface UIPickerColumnView : UIView <_UIPickerColumn, UIPickerTableViewContainerDelegate, UITableViewDataSource> {
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    double _middleBarHeight;
    UIPickerView *_pickerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tableFrame;
}

@property (nonatomic) BOOL isNoLongerInUse;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionBarRect;
@property (readonly, nonatomic) long long selectionBarRow;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (nonatomic) double rowHeight;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } perspectiveTransform;
@property (nonatomic) double leftHitTestExtension;
@property (nonatomic) double rightHitTestExtension;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *highlightedRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_moveTableViewIfNecessary:(id)a0 toContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 middleBarHeight:(double)a2 rowHeight:(double)a3 pickerView:(id)a4 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a5;
- (BOOL)_soundsEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tableFrame;
- (void)_sendCheckedRow:(long long)a0 inTableView:(id)a1 checked:(BOOL)a2;
- (double)_horizontalBiasForEndTables;
- (id)cellForRowAtIndexPath:(id)a0;
- (void)_centerTableInContainer:(id)a0;
- (id)_createTableViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_visibleCellClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)_systemDefaultFocusGroupIdentifier;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)reloadData;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleGlobalRows;
- (id)_preferredTable;
- (void).cxx_destruct;
- (id)_viewToAddFocusLayer;
- (BOOL)canBecomeFocused;
- (id)_defaultFocusEffect;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2;
- (id)_allVisibleCells;
- (BOOL)selectRow:(long long)a0 animated:(BOOL)a1 notify:(BOOL)a2 updateChecked:(BOOL)a3;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForTableWithTranslationX:(double)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForTableWithPerspectiveTranslationX:(double)a0;
- (void)beginUpdates;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)_usesCheckSelection;
- (void)endUpdates;
- (BOOL)_pointLiesWithinEffectiveTableBounds:(struct CGPoint { double x0; double x1; })a0;
- (void)markAsNoLongerInUse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFocusRegionFrame;
- (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_pickerTableViewDidChangeContentOffset:(id)a0;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)a0 animated:(BOOL)a1;
- (BOOL)_containsTable:(id)a0;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)pickerTableView:(id)a0 didChangeSelectionBarRowFrom:(long long)a1 to:(long long)a2;
- (BOOL)isRowChecked:(long long)a0;

@end
