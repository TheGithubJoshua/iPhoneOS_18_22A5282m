@class NSArray, FCFeedRange, NSData;

@interface FCFeedDatabaseLookupResult : NSObject {
    BOOL _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    unsigned long long _ckFromOrder;
    unsigned long long _ckToOrder;
    id _insertionToken;
}

- (void).cxx_destruct;
- (id)description;

@end
