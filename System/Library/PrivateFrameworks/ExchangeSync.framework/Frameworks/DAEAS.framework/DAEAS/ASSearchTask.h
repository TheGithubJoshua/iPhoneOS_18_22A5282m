@class DASearchQuery;

@interface ASSearchTask : ASTask

@property (retain, nonatomic) DASearchQuery *query;
@property (nonatomic) int numDownloadedElements;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQuery:(id)a0;
- (int)commandCode;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
