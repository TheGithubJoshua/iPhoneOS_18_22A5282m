@class NSString;

@interface PLPTPAssetReader : NSObject {
    BOOL _shouldDeleteTemporaryFileOnDeallocation;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithTemporaryFileDeletedOnDeallocPath:(id)a0;

@end
