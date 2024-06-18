@class NSURL, NSUUID, NSData;

@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding> {
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    NSData *_realData;
    NSData *_bytes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

+ (Class)classForKeyedUnarchiver;

- (id)initWithCoder:(id)a0;
- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_moveToPermanentLocation;
- (void)dealloc;
- (BOOL)_isCloudKitSupportOriginated;
- (void *)_bytesPtrForStore;
- (unsigned long long)length;
- (unsigned long long)_bytesLengthForStore;
- (const void *)bytes;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;

@end
