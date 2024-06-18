@protocol NSObject, NSCopying;

@interface GKResourceRequest : NSObject

@property (copy, nonatomic) id<NSObject, NSCopying> requestKey;
@property (copy, nonatomic) id<NSObject> cacheKey;
@property (readonly, nonatomic) unsigned long long cacheOptions;

+ (id)makeUniqueKey;

- (id)init;
- (id)makeLoadOperation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)didLoadResource:(id)a0 error:(id)a1;

@end
