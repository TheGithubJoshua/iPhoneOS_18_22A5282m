@class NSString, EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)_contentSizeCategoryChanged;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (void)reset;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)setSelectedResponder:(id)a0;
- (void)tableViewDidScroll;

@end
