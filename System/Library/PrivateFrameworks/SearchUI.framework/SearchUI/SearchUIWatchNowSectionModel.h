@class SFWatchListItem, NSString;

@interface SearchUIWatchNowSectionModel : SearchUIHorizontallyScrollingSectionModel

@property (retain) SFWatchListItem *watchListItem;
@property (retain) NSString *cardSectionId;

- (void).cxx_destruct;
- (id)initWithWatchNowCardSection:(id)a0 result:(id)a1 queryId:(unsigned long long)a2 section:(id)a3;
- (id)horizontalRowModelsForCardSections:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;
- (void)loadIfNecessaryWithCompletionHandler:(id /* block */)a0;

@end
