@class WFColor, NSArray, UICollectionView, NSString;
@protocol WFColorPickerDelegate;

@interface WFColorPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *colorNames;
@property (retain, nonatomic) UICollectionView *colorCollectionView;
@property (retain, nonatomic) WFColor *selectedColor;
@property (weak, nonatomic) id<WFColorPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
