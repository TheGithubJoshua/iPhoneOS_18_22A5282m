@class NSArray;
@protocol SKUIMenuViewControllerDelegate;

@interface SKUIMenuViewController : UITableViewController

@property (readonly, nonatomic) NSArray *menuTitles;
@property (readonly, nonatomic) NSArray *menuImages;
@property (weak, nonatomic) id<SKUIMenuViewControllerDelegate> delegate;
@property (nonatomic) long long indexOfCheckedTitle;
@property (nonatomic) long long menuStyle;

- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)preferredUserInterfaceStyle;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithMenuTitles:(id)a0;
- (id)initWithMenuTitles:(id)a0 images:(id)a1;

@end