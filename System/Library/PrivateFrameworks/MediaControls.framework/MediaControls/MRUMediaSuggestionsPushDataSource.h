@class MRMediaSuggestionController, NSString, NSDictionary;
@protocol MRUMediaSuggestionsDataSourceDelegate;

@interface MRUMediaSuggestionsPushDataSource : NSObject <MRMediaSuggestionControllerDelegate, MRUMediaSuggestionsDataSource>

@property (retain, nonatomic) MRMediaSuggestionController *mediaSuggestionsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *mediaSuggestions;
@property (weak, nonatomic) id<MRUMediaSuggestionsDataSourceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)refreshMediaSuggestions;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (void)controller:(id)a0 didUpdateSuggestions:(id)a1;

@end
