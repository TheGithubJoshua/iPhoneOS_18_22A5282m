@class NSString, WFContentCollection, NSMutableSet;
@protocol WFChooseImageViewControllerDelegate;

@interface WFChooseImageViewController : UITableViewController <WFImageContentItemCellDelegate> {
    NSMutableSet *_selectedItems;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrame;
}

@property (readonly, nonatomic) WFContentCollection *collection;
@property (nonatomic) long long itemsPerRow;
@property (weak, nonatomic) id<WFChooseImageViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long minimumNumberOfItems;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)cancel;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)done;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)cell:(id)a0 didSelectImageViewAtIndex:(unsigned long long)a1;
- (id)initWithCollection:(id)a0 selectedIndexes:(id)a1;

@end
