@class UIAlertControllerVisualStyle, NSMutableArray, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
    NSMutableArray *textFieldViews;
    BOOL _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

@property (weak, nonatomic) id<_UIAlertControllerTextFieldViewControllerContaining> container;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;
@property (readonly) NSMutableArray *textFields;
@property (nonatomic, getter=isHidden) BOOL hidden;

- (id)init;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)_updatePreferredContentSize;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (double)_bottomMarginForTextFields;
- (void)_returnKeyPressedInTextField:(id)a0;
- (id)addTextFieldWithPlaceholder:(id)a0;
- (long long)numberOfTextFields;
- (void)removeAllTextFields;
- (id)textFieldAtIndex:(long long)a0;
- (id)textFieldContainerViews;
- (void)updateTextFieldStyle;

@end
