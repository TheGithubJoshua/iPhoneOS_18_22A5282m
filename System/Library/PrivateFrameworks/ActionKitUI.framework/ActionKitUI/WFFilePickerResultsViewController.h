@class WFRemoteFileListView, NSArray;
@protocol WFRemoteFileListViewDelegate;

@interface WFFilePickerResultsViewController : UIViewController

@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView;
@property (copy, nonatomic) NSArray *files;
@property (readonly, weak, nonatomic) id<WFRemoteFileListViewDelegate> delegate;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateContentInset;
- (id)initWithFileListDelegate:(id)a0;

@end
