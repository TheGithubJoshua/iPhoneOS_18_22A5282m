@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *providerCache;
@property (weak, nonatomic) id<TUMetadataCacheDataProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)classIdentifier;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueue:(id)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (id)metadataForDestinationID:(id)a0;
- (void)setObject:(id)a0 forDestinationID:(id)a1;

@end
