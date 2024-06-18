@class NSString, NSMutableSet, UITableView;
@protocol PXFlexMusicPickerViewControllerDelegate, PXAudioAssetFetchResult;

@interface PXFlexMusicPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id<PXAudioAssetFetchResult> songs;
@property (readonly, nonatomic) NSMutableSet *pickedSongs;
@property (weak, nonatomic) id<PXFlexMusicPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_handleDoneButton:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_handleCancelButton:(id)a0;
- (void)_updateDoneButtonEnabledness;

@end
