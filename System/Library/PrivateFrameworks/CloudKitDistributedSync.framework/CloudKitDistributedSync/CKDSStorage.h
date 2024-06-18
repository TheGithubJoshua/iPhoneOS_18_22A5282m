@class NSURL, CKDSStorageFile, NSData;

@interface CKDSStorage : NSObject <NSCopying>

@property (readonly, nonatomic) CKDSStorageFile *file;
@property (nonatomic) BOOL writable;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataWithError:(id *)a0;
- (id)initForWriting:(BOOL)a0 withFile:(id)a1 orData:(id)a2;
- (BOOL)size:(unsigned long long *)a0 error:(id *)a1;

@end
