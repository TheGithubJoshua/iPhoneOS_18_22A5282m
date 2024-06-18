@class PLPhotoLibraryBundle, PLBackgroundJobCriteria;

@interface PLPhotoLibraryBundleCriteriaTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBundle:(id)a0 withCriteria:(id)a1;

@end
