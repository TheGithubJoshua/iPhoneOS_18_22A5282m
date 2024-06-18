@class NSString, NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)_setUpCellControllers;
- (BOOL)detailItemVisibilityChanged;
- (id)owningEventForAttachmentCellController:(id)a0;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)_cleanUpCellControllers;
- (void).cxx_destruct;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (void)reset;

@end
