@class NSString, UICollectionView, UIView, NSMutableArray, UICollectionViewFlowLayout;

@interface UIDebuggingSpecViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController>

@property (retain, nonatomic) UIView *spec;
@property (retain, nonatomic) NSMutableArray *specImages;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double originalOpacity;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)gotDeleteGesture:(id)a0;
- (void)gotPanGesture:(id)a0;
- (void)hideImage;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)prepareForMediaBrowser;
- (BOOL)startMediaBrowserFromViewController:(id)a0;

@end
