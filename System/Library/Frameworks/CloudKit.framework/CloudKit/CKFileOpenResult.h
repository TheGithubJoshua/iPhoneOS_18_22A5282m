@class NSNumber, NSFileHandle;

@interface CKFileOpenResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _mkbbackupref { } *handle;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSFileHandle *encryptedFileHandle;
@property (readonly, copy, nonatomic) NSNumber *fileSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFileHandle:(id)a0 fileSize:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMobileKeyBagHandle:(struct _mkbbackupref { } *)a0 path:(id)a1 error:(id *)a2;

@end
