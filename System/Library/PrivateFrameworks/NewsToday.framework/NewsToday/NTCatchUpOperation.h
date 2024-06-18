@class NTCatchUpOperationForYouRequest, NSDictionary, NTCatchUpOperationForYouFetchInfo, NSDate, NSMutableArray, NTCatchUpOperationResults;
@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration;

@interface NTCatchUpOperation : FCOperation

@property (copy, nonatomic) NSDate *fetchDate;
@property (retain, nonatomic) NSMutableArray *articleListRequests;
@property (retain, nonatomic) NSMutableArray *articleIDsRequests;
@property (copy, nonatomic) NSDictionary *resultsByArticleListID;
@property (copy, nonatomic) NSDictionary *resultsByArticleIDsRequestID;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) NTCatchUpOperationResults *forYouResults;
@property (copy, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType;
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, getter=isForYouEnabled) BOOL forYouEnabled;
@property (copy, nonatomic) id /* block */ catchUpCompletionHandler;

- (id)init;
- (void)addArticleIDsRequest:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)a0;
- (void)prepareOperation;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)addArticleListRequest:(id)a0;
- (void).cxx_destruct;

@end
