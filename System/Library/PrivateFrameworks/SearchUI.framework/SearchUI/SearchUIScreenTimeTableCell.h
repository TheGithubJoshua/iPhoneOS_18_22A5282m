@class SearchUIScreenTimeView;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

@property (retain) SearchUIScreenTimeView *sizingContainer;

- (id)visibleResults;
- (void)updateWithRowModel:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
