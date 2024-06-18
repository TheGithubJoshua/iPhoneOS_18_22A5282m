@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {
    NSError *_error;
    BOOL _failed;
    NSArray *_updateItems;
}

@property (readonly) NSError *error;
@property (readonly, getter=isFailed) BOOL failed;
@property (readonly) NSArray *updateItems;

- (id)copyXPCEncoding;
- (id)initWithError:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)description;
- (void)dealloc;
- (id)copyUpdateItemDictionaries;
- (void)setUpdateItemsWithItemDictionaries:(id)a0;

@end
