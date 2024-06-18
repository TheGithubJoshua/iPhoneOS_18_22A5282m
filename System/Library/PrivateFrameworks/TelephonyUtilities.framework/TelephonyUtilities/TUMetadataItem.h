@class NSMutableDictionary;

@interface TUMetadataItem : NSObject

@property (readonly, nonatomic) NSMutableDictionary *callMetadata;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)metadataForProvider:(Class)a0;
- (void)setMetadata:(id)a0 forProvider:(Class)a1;

@end
