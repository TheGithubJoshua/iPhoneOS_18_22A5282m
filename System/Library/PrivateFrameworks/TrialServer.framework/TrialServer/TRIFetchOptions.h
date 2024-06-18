@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>

@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;

+ (id)optionsWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;

- (BOOL)isEqualToOptions:(id)a0;
- (id)init;
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)a0;
- (unsigned long long)hash;
- (id)initWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementDownloadOptions:(id)a0;

@end
