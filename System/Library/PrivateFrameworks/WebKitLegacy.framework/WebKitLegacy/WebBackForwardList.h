@class WebHistoryItem, WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate *_private;
}

@property (readonly, nonatomic) WebHistoryItem *backItem;
@property (readonly, nonatomic) WebHistoryItem *currentItem;
@property (readonly, nonatomic) WebHistoryItem *forwardItem;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) int backListCount;
@property (readonly, nonatomic) int forwardListCount;

+ (void)initialize;

- (BOOL)containsItem:(id)a0;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (void)goForward;
- (id)init;
- (id)itemAtIndex:(int)a0;
- (id)dictionaryRepresentation;
- (void)_close;
- (void)goBack;
- (id)description;
- (void)dealloc;
- (void)setToMatchDictionaryRepresentation:(id)a0;
- (id)backListWithLimit:(int)a0;
- (id)forwardListWithLimit:(int)a0;
- (void)goToItem:(id)a0;
- (id)initWithBackForwardList:(void *)a0;
- (unsigned long long)pageCacheSize;
- (void)setPageCacheSize:(unsigned long long)a0;

@end
