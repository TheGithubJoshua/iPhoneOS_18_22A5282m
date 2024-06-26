@class CSSearchQuery, NSString, ICRankingQueriesDefinition, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) BOOL modernResultsOnly;
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (retain, nonatomic) NSArray *externalRankingQueries;
@property (retain, nonatomic) CSSearchQuery *searchQuery;
@property (retain, nonatomic) NSDictionary *queryResults;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) BOOL wasForceStopped;
@property (readonly, nonatomic) NSArray *rankingQueries;

+ (id)defaultAttributesToReturnFromCoreSpotlight;
+ (id)fetchDefaultAttributesForIdentifiers:(id)a0;
+ (id)fetchModernNoteSearchableItemAttributesFromCoreDataForObjectIDURIs:(id)a0 context:(id)a1;
+ (id)queryForClassifiedImages;

- (BOOL)run:(id *)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)forceStop;
- (id)initWithQueryString:(id)a0 rankingQueriesDefinition:(id)a1 modernResultsOnly:(BOOL)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(BOOL)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(BOOL)a2 attributes:(id)a3;
- (void)setupWithAttributes:(id)a0;

@end
