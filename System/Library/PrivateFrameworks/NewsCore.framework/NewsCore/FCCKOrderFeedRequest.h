@class NSString;

@interface FCCKOrderFeedRequest : NSObject {
    NSString *_feedID;
    unsigned long long _maxOrder;
    unsigned long long _minOrder;
    unsigned long long _resultsLimit;
    unsigned long long _topK;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
