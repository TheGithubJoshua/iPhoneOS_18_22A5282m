@class NSData, NSURL, NSString;

@interface GEOTileData : NSObject <GEOXPCSerializable> {
    unsigned long long _cachedFileSize;
    long long _sandboxExtension;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) id decodedRepresentation;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void)_replaceFileURL:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDecodedRepresentation:(id)a0;
- (void)dealloc;
- (id)readDataWithError:(id *)a0;

@end
